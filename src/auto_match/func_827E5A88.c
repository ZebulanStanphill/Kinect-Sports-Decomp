typedef struct { char pad[8]; int h; } A;
typedef struct { char pad[0x20]; int x20; } B;
extern unsigned int fn_827D9DC0(int h);
extern void fn_827D9DA0(int h, unsigned int f);

int fn_827E5A88(A *a, B *b)
{
    unsigned int f;
    if (b->x20 == 0) {
        f = (fn_827D9DC0(a->h) & ~1u) | 2;
        fn_827D9DA0(a->h, f);
    } else {
        fn_827D9DA0(a->h, 0x100);
    }
    return b->x20;
}
