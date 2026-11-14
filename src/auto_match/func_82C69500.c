long _InterlockedExchange(long volatile *dest, long value);
extern volatile long lbl_83231E48;
void fn_82C69500(unsigned int *a, unsigned int *b)
{
    unsigned int t;
    while (_InterlockedExchange(&lbl_83231E48, 1) != 0) {
        while (lbl_83231E48 != 0) {
        }
    }
    t = *a;
    *a = *b;
    *b = t;
    lbl_83231E48 = 0;
}
