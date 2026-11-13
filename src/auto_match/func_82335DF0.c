typedef struct Info_82335DF0 {
    char name[0x40];
    int id;             /* 0x40 */
    float weight;       /* 0x44 */
    char label[0x40];   /* 0x48 */
    float f88;
    float f8c;
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    float fa8;
    float fac;
    float fb0;
    float fb4;
    float fb8;
    float fbc;
    float fc0;
    float fc4;
    float fc8;
    float fcc;
    float fd0;
} Info_82335DF0;

void fn_82335DF0(Info_82335DF0 *dst, const Info_82335DF0 *src)
{
    int i;

    for (i = 0; i < 0x40; i++) {
        dst->name[i] = src->name[i];
    }
    dst->id = src->id;
    dst->weight = src->weight;
    for (i = 0; i < 0x40; i++) {
        dst->label[i] = src->label[i];
    }
    dst->f88 = src->f88;
    dst->f8c = src->f8c;
    dst->f90 = src->f90;
    dst->f94 = src->f94;
    dst->f98 = src->f98;
    dst->f9c = src->f9c;
    dst->fa0 = src->fa0;
    dst->fa4 = src->fa4;
    dst->fa8 = src->fa8;
    dst->fac = src->fac;
    dst->fb0 = src->fb0;
    dst->fb4 = src->fb4;
    dst->fb8 = src->fb8;
    dst->fbc = src->fbc;
    dst->fc0 = src->fc0;
    dst->fc4 = src->fc4;
    dst->fc8 = src->fc8;
    dst->fcc = src->fcc;
    dst->fd0 = src->fd0;
}
