int fn_82E651E0(int self, unsigned int *a, unsigned int *b, unsigned int *c)
{
    int hr = 0;
    if (a == 0) {
        hr = 0x80070057;
    } else if (*(unsigned int *)(self + 0x14) == 0) {
        hr = 0xc00d36b6;
    } else {
        *a = *(unsigned int *)(self + 0x14);
        if (c != 0) *c = *(unsigned int *)(self + 8);
        if (b != 0) *b = *(unsigned int *)(self + 0xc);
    }
    return hr;
}
