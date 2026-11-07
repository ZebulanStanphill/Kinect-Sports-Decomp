typedef int (*GetFn_82E701A0)(void *self, unsigned int *out);

typedef struct Vtbl_82E701A0 {
    void *slot0;
    void *slot4;
    int (*GetCount)(struct Obj_82E701A0 *self, unsigned int *out);
} Vtbl_82E701A0;

typedef struct Obj_82E701A0 {
    Vtbl_82E701A0 *vt;              /* 0x00 */
    unsigned char pad04[0x3C];      /* 0x04 */
    unsigned __int64 time40;        /* 0x40 */
    unsigned char pad48[0x20];      /* 0x48 */
    unsigned __int64 count68;       /* 0x68 */
    unsigned char flag70;           /* 0x70 */
    unsigned char pad71;            /* 0x71 */
    unsigned short seq72;           /* 0x72 */
    unsigned char pad74[4];         /* 0x74 */
    unsigned __int64 key78;         /* 0x78 */
    unsigned short seq80;           /* 0x80 */
} Obj_82E701A0;

int fn_82E701A0(Obj_82E701A0 *o, unsigned __int64 key, unsigned __int64 unused,
                unsigned char *info, unsigned int *out)
{
    unsigned int n;
    int hr;

    if (info == 0 || out == 0) {
        return (int)0x80004003;
    }
    n = 0;
    hr = o->vt->GetCount(o, &n);
    if (hr < 0) {
        return hr;
    }
    if (n == 0) {
        return (int)0xC00D36BB;
    }
    *out = 0;
    if (o->key78 != key) {
        o->key78 = key;
        o->seq80 = 0xFFFF;
    }
    if (*(unsigned int *)(info + 7) == 0) {
        o->seq80 = o->seq80 + 1;
    }
    if (o->flag70 != info[6]) {
        o->flag70 = info[6];
        if (*(unsigned int *)(info + 7) == 0) {
            o->count68 = o->count68 + 1;
        }
    }
    if (o->count68 % (unsigned __int64)n == 0 && *(unsigned int *)(info + 7) == 0) {
        o->time40 = key;
        o->seq72 = o->seq80;
        *out = 1;
    }
    return hr;
}
