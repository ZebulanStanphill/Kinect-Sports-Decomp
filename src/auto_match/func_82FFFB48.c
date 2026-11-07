typedef struct Desc_82FFFB48 {
    char pad0[8];
    int f8;
    char padC[4];
    char f10[0x18];
    char f28[0x58];
    unsigned char f80;
} Desc_82FFFB48;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, int size);
extern void *fn_82FF0838(void *mem, int a, int b, int c, void *d, void *e, int f, int g,
                         unsigned char h, int i);

void *fn_82FFFB48(int unused, int a, int b, Desc_82FFFB48 *desc, int g)
{
    void *mem = fn_82FA5060(lbl_831BC768, 0x188);
    if (mem != 0)
        return fn_82FF0838(mem, a, b, desc->f8, desc->f10, desc->f28, 0, g, desc->f80, 0);
    return 0;
}
