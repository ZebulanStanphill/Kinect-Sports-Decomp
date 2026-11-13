typedef struct Owner_83014230 {
    char pad0[0x5c];
    int f5c;                 /* 0x5c */
} Owner_83014230;

typedef struct Desc_83014230 {
    int f0;
    int f4;                  /* 0x04 */
    int f8;                  /* 0x08 */
    int fc;
    char sub10[0x18];        /* 0x10 */
    char sub28[0x50];        /* 0x28 */
    int f78;                 /* 0x78 */
    int f7c;                 /* 0x7c */
    unsigned char f80;
    unsigned char f81;       /* 0x81 */
} Desc_83014230;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, int size);
extern void *fn_830394E8(void *mem, int a, int b, int c, int d, void *e, void *f,
                         unsigned char g, int h, int i, int j, int k);

void *fn_83014230(Owner_83014230 *owner, int a, int b, Desc_83014230 *desc, int e)
{
    void *mem = fn_82FA5060(lbl_831BC768, 0x1f8);
    if (mem != 0)
        return fn_830394E8(mem, a, b, desc->f8, desc->f78, desc->sub10, desc->sub28, desc->f81,
                           desc->f7c, desc->f4, e, owner->f5c);
    return 0;
}
