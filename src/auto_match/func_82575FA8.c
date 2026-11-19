typedef struct Effects_82575FA8 {
    char pad0[8];
    unsigned char disabled; /* 0x8 */
} Effects_82575FA8;

extern void *fn_8251F720(unsigned int *name, int flags);
extern void *fn_82575C78(Effects_82575FA8 *self, unsigned int *name, void *desc, int zero, int a, int id,
                         float scale, float c, int d, int e);
extern void *fn_825758D0(Effects_82575FA8 *self, unsigned int name, int zero0, void *resource, int zero1,
                         void *desc, int zero2, int a, int id, float scale, int zero3, int b, float c, int d,
                         int e);

void *fn_82575FA8(Effects_82575FA8 *self, unsigned int *name, void *desc, int a, int id, float scale, int b,
                  float c, int d, int e)
{
    void *result;
    int kind;
    void *resource;

    if (self->disabled) {
        return 0;
    }
    result = 0;
    kind = *name != 0 ? *name >> 24 : 0x7a;
    if (kind == 0x1b) {
        result = fn_82575C78(self, name, desc, 0, a, id, scale, c, d, e);
    } else {
        resource = fn_8251F720(name, 0);
        if (resource != 0) {
            result = fn_825758D0(self, *name, 0, resource, 0, desc, 0, a, id, scale, 0, b, c, d, e);
        }
    }
    return result;
}
