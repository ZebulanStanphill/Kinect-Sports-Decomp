// Kinect Sports retail 4D5308C9, function 0x82C106C8 (72 bytes).
// Clears entry i (< 0x7f) of a 12-byte {used, a, b} table; counterpart of fn_82C105F0.

typedef struct E { int used; int a; int b; } E;

int fn_82C106C8(E *e, int i)
{
    int hr = 0;
    if (e != 0) {
        if (i >= 0x7f) {
            hr = 0x80070057;
        } else {
            E *p = &e[i];
            p->used = 0;
            p->a = 0;
            p->b = 0;
        }
    }
    return hr;
}
