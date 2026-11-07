struct Counters_82428EC0 {
    char pad[0x1a0];
    int count0;
    int count1;
};

void fn_82428EC0(int param_1, struct Counters_82428EC0 *param_2, unsigned int param_3)
{
    switch (param_3) {
    case 1:
        param_2->count1++;
        break;
    case 0:
        param_2->count0++;
        break;
    }
}
