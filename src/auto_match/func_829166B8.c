typedef struct Ent_829166B8 {
    int pad0;
    int value;
} Ent_829166B8;

typedef struct Table_829166B8 {
    int pad0[2];
    unsigned int count;      /* 0x08 */
    int pad1[2];
    Ent_829166B8 **entries;  /* 0x14 */
    int pad2[27];
    int value;               /* 0x84 */
} Table_829166B8;

typedef struct Ctx_829166B8 {
    int pad0[2];
    Table_829166B8 *table;   /* 0x08 */
    int pad1[16];
    int error;               /* 0x4C */
} Ctx_829166B8;

typedef struct Desc_829166B8 {
    int pad0;
    int type;                /* 0x04 */
    int pad1[2];
    int id;                  /* 0x10 */
    int w;                   /* 0x14 */
    int h;                   /* 0x18 */
} Desc_829166B8;

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);
extern int fn_82904370(Ctx_829166B8 *a, Desc_829166B8 *b, unsigned int n, unsigned int *in,
                       unsigned int *out, int x, int y);
extern int fn_829080F8(Ctx_829166B8 *a, int id, unsigned int *buf, int value, int p5, int p6,
                       int p7, int p8);
extern int fn_82914750(Ctx_829166B8 *a, Desc_829166B8 *b, unsigned int *buf, int x);

int fn_829166B8(Ctx_829166B8 *a, Desc_829166B8 *b)
{
    unsigned int n;
    unsigned int *buf;
    unsigned int i;
    int hr;

    if (b->type != 0xe)
        return 0;

    n = b->h * b->w;
    buf = (unsigned int *)fn_8265C940(n * 4, 0x24810000);
    if (buf == 0) {
        hr = 0x8007000e;
    } else {
        if (n != 0) {
            for (i = 0; i < n; i++)
                buf[i] = 0xffffffff;
        }
        hr = fn_82914750(a, b, buf, 0);
        if (hr >= 0) {
            hr = fn_82904370(a, b, (n & 0x000fffff) | 0x10000000, buf, buf, 0, 0);
            if (hr >= 0) {
                for (i = 0; i < n; i++) {
                    Table_829166B8 *t = a->table;
                    unsigned int idx = buf[i];
                    Ent_829166B8 *e;
                    if (idx < t->count)
                        e = t->entries[idx];
                    else
                        e = 0;
                    if (e != 0)
                        e->value = t->value;
                }
                hr = fn_829080F8(a, b->id, buf, a->table->value, 1, 1, 0, 0);
            }
        }
    }
    fn_8265C990(buf, 0x24810000);
    if (a->error != 0)
        hr = 0x80004005;
    return hr;
}
