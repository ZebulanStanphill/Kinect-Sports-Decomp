typedef struct Link_82B84350 { unsigned int f0; unsigned int f4; } Link_82B84350;
typedef struct Obj_82B84350 { unsigned int first; char pad[0x20]; Link_82B84350 link; } Obj_82B84350;
extern unsigned int fn_82ABDD90(unsigned int a, unsigned int b, unsigned int c, unsigned int d);
extern unsigned int fn_82AC6560(unsigned int a, unsigned int b, int c);
extern void fn_82B83B68(unsigned int r, unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e);

unsigned int fn_82B84350(unsigned int a, unsigned int b, Link_82B84350 *head, unsigned int c)
{
    unsigned int r;
    Link_82B84350 *lk;
    r = fn_82ABDD90(a, 0x6e, c, 4);
    r = fn_82AC6560(a, r, 0x23);
    fn_82B83B68(r, a, b, 0x6e, c, c);
    if (head != 0) {
        lk = &((Obj_82B84350 *)(r & ~1u))->link;
        lk->f0 = head->f0;
        ((Obj_82B84350 *)(head->f0 & ~1u))->first = (unsigned int)lk - 0x24;
        lk->f4 = ((unsigned int)head - 0x24) | 1;
        head->f0 = (unsigned int)&lk->f4;
    }
    return r;
}
