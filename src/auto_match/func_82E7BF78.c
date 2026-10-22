extern int fn_82A5DA68(const unsigned short *s, unsigned int cch, unsigned int *len);

int fn_82E7BF78(const unsigned short *s, unsigned int cb, unsigned int *pcb)
{
    unsigned int cch = cb >> 1;
    unsigned int len = 0;
    int hr;

    if (s == 0 || cch > 0x7fffffff) {
        hr = 0x80070057;
    } else {
        hr = fn_82A5DA68(s, cch, &len);
    }
    if (hr >= 0 && pcb != 0) {
        *pcb = len << 1;
    }
    return hr;
}
