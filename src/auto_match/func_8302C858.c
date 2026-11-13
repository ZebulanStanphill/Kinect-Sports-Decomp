typedef struct Desc_8302C858 {
    int kind;
    int f4;
    int f8;
    int fc;
    char sub10[0x18];
    char sub28[0x50];
    int f78;
    int f7c;
    unsigned char f80;
    unsigned char f81;
} Desc_8302C858;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, int size);
extern void *fn_83038550(void *mem, int a, int b, int c, int d, void *e, void *f,
                         unsigned char g, int h, int i, int j, unsigned char k);
extern void *fn_82FFFB48(void *owner, int a, int b, Desc_8302C858 *desc, int e);

void *fn_8302C858(void *owner, int a, int b, Desc_8302C858 *desc, int e)
{
    void *mem;

    if (desc->kind == 1) {
        mem = fn_82FA5060(lbl_831BC768, 0x1e8);
        if (mem != 0)
            return fn_83038550(mem, a, b, desc->f8, desc->f78, desc->sub10, desc->sub28, desc->f81,
                               desc->f7c, desc->f4, e, desc->f80);
        return 0;
    }
    return fn_82FFFB48(owner, a, b, desc, e);
}
