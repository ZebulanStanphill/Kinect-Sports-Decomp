void *memcpy(void *dst, const void *src, unsigned int n);

struct Obj_82E6EA58;

typedef struct Vtbl_82E6EA58 {
    void *slots[25];
    int (*Reserve)(struct Obj_82E6EA58 *self, unsigned __int64 pos, unsigned int n);
} Vtbl_82E6EA58;

typedef struct Obj_82E6EA58 {
    Vtbl_82E6EA58 *vt;
    int pad04[5];
    unsigned __int64 f18;
    int pad20[4];
    unsigned __int64 f30;
    unsigned int f38;
    int f3c;
} Obj_82E6EA58;

int fn_82E6EA58(Obj_82E6EA58 *p, const void *src, unsigned int n, unsigned int *out)
{
    if (out == 0) {
        return 0x80004003;
    }
    *out = 0;
    if (src != 0 && n != 0) {
        if (p->vt->Reserve(p, p->f18, n) != 0) {
            memcpy((char *)(p->f38 - (unsigned int)p->f30 + (unsigned int)p->f18), src, n);
            *out = n;
            p->f3c = 0;
        } else {
            return 0xC00D36BF;
        }
    }
    return 0;
}
