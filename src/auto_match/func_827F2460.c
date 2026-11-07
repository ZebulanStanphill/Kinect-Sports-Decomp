typedef struct VObj_827F2460 VObj_827F2460;

typedef struct {
    void *slot0;
    void *slot4;
    int (*getSize)(VObj_827F2460 *self);
} VObjVtbl_827F2460;

struct VObj_827F2460 {
    VObjVtbl_827F2460 *vt;
};

typedef struct {
    int pad0;
    VObj_827F2460 *obj;     /* 0x04 */
    int pad8[6];            /* 0x08 */
    int entries[12];        /* 0x20 */
    unsigned char pad50[2]; /* 0x50 */
    unsigned char bits[1];  /* 0x52 */
    unsigned char last;     /* 0x53 */
    unsigned char first;    /* 0x54 */
} Ctx_827F2460;

extern int fn_827F3A60(Ctx_827F2460 *p);
extern unsigned int fn_827F3AB0(int e);

static __forceinline int bitTest_827F2460(Ctx_827F2460 *p, unsigned int i)
{
    return (((unsigned char *)p)[0x52 + (i >> 3)] >> (i & 7)) & 1;
}

int fn_827F2460(Ctx_827F2460 *p)
{
    unsigned int aligned;
    unsigned int max;
    int count;
    int i;
    int n;
    int k;
    int result;

    aligned = (unsigned int)(p->obj->vt->getSize(p->obj) + 0xf) & ~0xfu;
    i = p->first;
    result = 0;
    max = 0;
    count = 0;
    for (;;) {
        if (bitTest_827F2460(p, i) == 0) {
            count++;
            if (max <= fn_827F3AB0(p->entries[i])) {
                max = fn_827F3AB0(p->entries[i]);
            }
        }
        if (i == p->last) break;
        i = (i + 1) & 3;
    }
    if (count > 0) {
        n = (count < 1) ? count : 1;
        if (count > 1 || bitTest_827F2460(p, p->first) != 0) {
            k = 0;
        } else {
            k = 1;
        }
        result = fn_827F3A60(p) * (n - k) + (max + aligned) * n;
    }
    return result;
}
