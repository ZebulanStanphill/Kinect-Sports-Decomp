class Counters_828CC680 {
public:
    virtual void IncrementCounter(int index);
    unsigned char unk4;
    unsigned char counters[3];
};

void Counters_828CC680::IncrementCounter(int index)
{
    counters[index]++;
    if (counters[index] >= 0x100U) {
        counters[index] = 0;
    }
}
