extern int fn_82F6ADA8(const unsigned short *a, const unsigned short *b);
extern int fn_82F69F30(const unsigned short *s, unsigned short **end, int base);

int fn_82F41048(void *self, const unsigned short *name, int stream, unsigned int type, unsigned char *value)
{
    int hr = 0;
    if (fn_82F6ADA8(name, L"WM/TrackNumber") == 0) {
        int number;
        switch (type) {
        case 0:
            number = *(unsigned int *)value;
            break;
        case 1:
            number = fn_82F69F30((unsigned short *)value, 0, 10);
            break;
        case 4:
            number = (int)*(unsigned __int64 *)value;
            break;
        case 5:
            number = *(unsigned short *)value;
            break;
        default:
            number = 0;
            break;
        }
        if (number <= 0) {
            hr = 0x80070057;
        }
    }
    return hr;
}
