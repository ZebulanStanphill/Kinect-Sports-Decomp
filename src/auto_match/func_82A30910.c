extern int fn_82A2E6A8(int ctx, int obj, unsigned int index, unsigned int *last,
                       unsigned int *first, int flags);
extern int fn_82A2F1D0(int ctx, unsigned int count, unsigned int bit, unsigned int start,
                       int limit, unsigned int *first, unsigned int *last);

int fn_82A30910(int param_1, int param_2, unsigned int param_3)
{
    unsigned int last;
    unsigned int first;
    unsigned int old;
    unsigned int count;
    int hr;

    last = *(unsigned int *)(param_2 + 0x24);
    old = *(unsigned int *)(param_2 + 0x14);
    if (old != 0 && (int)last == -1) {
        hr = fn_82A2E6A8(param_1, param_2, old - 1, &last, &first, 0);
        if (hr < 0) {
            return hr;
        }
        *(unsigned int *)(param_2 + 0x24) = last;
    }
    count = (param_3 - old) >> 12;
    hr = fn_82A2F1D0(param_1, count, (*(unsigned char *)(param_2 + 0x35) >> 2) & 1, last, -1,
                     &first, &last);
    if (hr < 0) {
        return hr;
    }
    *(unsigned int *)(param_2 + 0x14) = param_3;
    *(unsigned int *)(param_2 + 0x24) = last;
    if (old == 0) {
        *(unsigned int *)(param_2 + 0x20) = first;
        if (last - first + 1 == count) {
            *(unsigned int *)(param_2 + 0x2c) = param_3;
            *(unsigned int *)(param_2 + 0x30) = first;
            *(unsigned int *)(param_2 + 0x28) = 0;
        }
    }
    if (*(unsigned char *)(param_2 + 0x35) & 4) {
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    } else {
        *(unsigned char *)(param_2 + 0x35) = *(unsigned char *)(param_2 + 0x35) | 0x10;
    }
    return 0;
}
