typedef struct It_824930B0 { int a; void *b; } It_824930B0;
typedef struct Slot_824930B0 { char pad[0x10]; int f10; char pad2[0x20 - 0x14]; char f20[4]; } Slot_824930B0;
typedef struct Inner_824930B0 {
    char pad[0x30];
    unsigned begin;
    unsigned end;
    char pad2[0xe70 - 0x38];
    int fe70;
    char pad3[0xee8 - 0xe74];
    unsigned fee8;
} Inner_824930B0;
typedef struct Obj_824930B0 { char pad[0x44]; Inner_824930B0 *in; } Obj_824930B0;
extern unsigned int _CountLeadingZeros(unsigned int);
extern int *fn_82522588(It_824930B0 *, unsigned);
extern void fn_822315A0(void *);
extern int *fn_8225F160(void);
extern char *fn_82250A18(void);
extern int fn_824CCD80(int);
extern void fn_825603C8(int, void *, int);
extern void fn_8229EEA0(int);
extern char *lbl_832975B0;
void fn_824930B0(Obj_824930B0 *o)
{
    Inner_824930B0 *in = o->in;
    unsigned p;
    It_824930B0 it;
    for (p = in->begin; p != in->end; p += 8) {
        int *e = (int *)*fn_82522588(&it, p);
        e[0x390 / 4] = 0;
        e[0x3c0 / 4] = 0;
        e[0x3c4 / 4] = 0;
        if (it.b != 0) fn_822315A0(it.b);
    }
    in->fe70 = 0;
    if (fn_8225F160()[2] == 1) {
        char *g;
        if (lbl_832975B0 != 0) g = lbl_832975B0; else g = fn_82250A18();
        if (g[4] == 0) {
            char *s = *(char **)((_CountLeadingZeros(in->fee8) >> 2 & 8) + in->begin);
            if (*(int *)(s + 0x22c) != 1) {
                fn_825603C8(fn_824CCD80(*(int *)(s + 0x10)), s + 0x20, 1);
                *(int *)(s + 0x22c) = 1;
            }
        }
    }
    if (*(int *)(*(int *)((char *)in + 0x94) + 0x5c) != 0)
        fn_8229EEA0(*(int *)(*(int *)((char *)in + 0x94) + 0x5c));
}
