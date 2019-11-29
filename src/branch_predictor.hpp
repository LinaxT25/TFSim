class branch_predictor
{
public:
    branch_predictor(unsigned int t);
    bool predict();
    void update_state(bool taken);
    
private:
    int n_bits,max,state;
};

/* Classe de herança da branch_predictor para implementação do BPB */

class BPB : public branch_predictor
{
    public:
        BPB();
        BPB(unsigned int x) : num_buffers(x) {};
        branch_predictor *Array_BPB = new branch_predictor[num_buffers];    
    public:
        unsigned int num_buffers, count = 0;      
};
