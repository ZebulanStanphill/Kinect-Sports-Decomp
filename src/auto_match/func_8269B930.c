typedef struct Params_8269B930 {
    int kind;        /* 0x00 */
    int flags;       /* 0x04 */
    double start;    /* 0x08 */
    double end;      /* 0x10 */
    double length;   /* 0x18 */
    float values[6]; /* 0x20 */
} Params_8269B930;

typedef struct AllocInfo_8269B930 {
    int id;
} AllocInfo_8269B930;

typedef struct Owner_8269B930 {
    char pad00[0x84];
    Params_8269B930 *params; /* 0x84 */
} Owner_8269B930;

extern void *fn_8267BED0(Owner_8269B930 *owner, unsigned int size, AllocInfo_8269B930 *info);

static __forceinline void CopyParams(Params_8269B930 *dst, const Params_8269B930 *src)
{
    dst->kind = src->kind;
    dst->flags = src->flags;
    dst->start = src->start;
    dst->end = src->end;
    dst->length = src->length;
    dst->values[0] = src->values[0];
    dst->values[1] = src->values[1];
    dst->values[2] = src->values[2];
    dst->values[3] = src->values[3];
    dst->values[4] = src->values[4];
    dst->values[5] = src->values[5];
}

void fn_8269B930(Owner_8269B930 *self, const Params_8269B930 *src)
{
    Params_8269B930 *params = self->params;
    Params_8269B930 *memory;
    AllocInfo_8269B930 info;

    if (params != 0) {
        CopyParams(params, src);
    } else {
        info.id = 0x143;
        memory = (Params_8269B930 *)fn_8267BED0(self, sizeof(Params_8269B930), &info);
        if (memory != 0) {
            CopyParams(memory, src);
            params = memory;
        } else {
            params = 0;
        }
        self->params = params;
    }
}
