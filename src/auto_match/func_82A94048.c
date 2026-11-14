typedef struct Desc_82A94048 {
    unsigned int words[8];
    unsigned int m20;
    unsigned int pad24[3];
    unsigned int m30;
} Desc_82A94048;

extern void fn_8263B958(Desc_82A94048 *desc, void *a, void *b, unsigned int *o0, unsigned int *o1,
                        unsigned int *o2, unsigned int *o3, unsigned int *o4, unsigned int *o5,
                        unsigned int *o6, unsigned int *o7);

unsigned int fn_82A94048(const Desc_82A94048 *src, void *a, void *b)
{
    Desc_82A94048 desc;
    unsigned int o0;
    unsigned int o1;
    unsigned int o2;
    unsigned int o3;
    unsigned int o4;
    unsigned int o5;
    unsigned int o6;
    unsigned int o7;

    desc = *src;
    desc.m20 &= 0xfff;
    desc.m30 &= 0xfff;
    fn_8263B958(&desc, a, b, &o0, &o1, &o2, &o3, &o4, &o5, &o6, &o7);
    return o7;
}
