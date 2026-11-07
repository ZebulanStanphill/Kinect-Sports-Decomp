typedef struct Var_82899478 {
    int pad0;
    int type;
    void *data[4];
    unsigned int size;
} Var_82899478;

typedef struct Src_82899478 {
    int pad0;
    int type;
    void *value;
    unsigned int size;
} Src_82899478;

extern void *fn_8265C9E0(unsigned int size);
extern void fn_82897ED8(void **dst, void **src);
void *memset(void *dst, int c, unsigned int n);
void *memcpy(void *dst, const void *src, unsigned int n);

void fn_82899478(Var_82899478 *dst, Src_82899478 *src, int idx)
{
    void **s = (void **)src + (idx + 2);
    int i;
    int j;

    for (i = 0; i < 4; i++) {
        if (dst->type == 9 && src->type == 7) {
            dst->type = 7;
            dst->size = src->size;
            for (j = 0; j < 4; j++) {
                if (dst->size <= 4) {
                    dst->data[j] = 0;
                } else {
                    void *p = fn_8265C9E0(src->size);
                    memset(p, 0, src->size);
                    dst->data[j] = p;
                }
            }
        } else {
            dst->type = src->type;
        }
        if (dst->type == 7) {
            if (dst->size > 4) {
                memcpy(dst->data[i], *s, dst->size);
            } else {
                dst->data[i] = *s;
            }
        } else if (dst->type == 8) {
            fn_82897ED8(&dst->data[i], s);
        } else {
            dst->data[i] = *s;
        }
    }
}
