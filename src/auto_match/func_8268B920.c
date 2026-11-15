typedef struct String_8268B920 {
    unsigned int tagged; /* 0x0 */
    unsigned int length; /* 0x4 */
} String_8268B920;

extern unsigned int lbl_831E7E64;
extern unsigned int fn_8267BF50(String_8268B920 *);
extern void *fn_8268B368(String_8268B920 *, unsigned int, unsigned int, int);
extern void fn_8267BE38(void *);
extern long _InterlockedExchangeAdd(long *, long);

extern void *memcpy(void *, const void *, unsigned int);
extern unsigned int fn_826BD598(const unsigned short *, int);
extern void fn_826BD620(void *, const unsigned short *, int);

void fn_8268B920(String_8268B920 *self, const unsigned short *text)
{
    unsigned int old = self->tagged & ~3u;
    unsigned int count = text ? fn_826BD598(text, -1) : 0;
    unsigned int length = 0;
    void *block;
    switch (self->tagged & 3) {
    case 0:
        length = lbl_831E7E64;
        break;
    case 1:
        length = fn_8267BF50(self);
        break;
    case 2:
        length = self->length;
        break;
    }
    block = fn_8268B368(self, length, count, 0);
    fn_826BD620((char *)block + 8, text, -1);
    self->tagged = (self->tagged & 3) | (unsigned int)block;
    if (_InterlockedExchangeAdd((long *)(old + 4), -1) - 1 == 0) {
        fn_8267BE38((void *)old);
    }
}
