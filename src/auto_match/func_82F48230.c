typedef struct Obj_82F48230 Obj_82F48230;

typedef struct ObjVtbl_82F48230 {
    void *f[6];
    int (*GetSize)(Obj_82F48230 *self, unsigned __int64 *size);
    void *g[13];
    int (*HasExtra)(Obj_82F48230 *self);
} ObjVtbl_82F48230;

struct Obj_82F48230 {
    ObjVtbl_82F48230 *vt;
    char pad4[0x14];
    unsigned short count;          /* 0x18 */
    char pad1a[0xa];
    unsigned int id;               /* 0x24 */
    unsigned int flags;            /* 0x28 */
    unsigned __int64 *items;       /* 0x2c */
    char pad30[0x28];
    unsigned short extra;          /* 0x58 */
};

unsigned long _byteswap_ulong(unsigned long);
unsigned short _byteswap_ushort(unsigned short);
unsigned __int64 _byteswap_uint64(unsigned __int64);

int fn_82F48230(Obj_82F48230 *self, unsigned char *buf, unsigned int size, unsigned int *outSize)
{
    unsigned __int64 total;
    unsigned char *p;
    unsigned short i;
    int hr;
    union { unsigned __int64 q; unsigned int w[2]; } u;

    if (self->flags & 1)
        return 0x80004001;
    if (outSize == 0 || (size != 0 && buf == 0))
        return 0x80070057;
    total = 0;
    hr = self->vt->GetSize(self, &total);
    if (hr < 0)
        return hr;
    if (total >= 0x100000000ULL)
        return 0xc00d3a9a;
    *outSize = (unsigned int)total;
    if (size < (unsigned int)total)
        return 0xc00d36b1;
    *(unsigned int *)buf = _byteswap_ulong(self->id);
    p = buf + 4;
    if (self->vt->HasExtra(self) != 0) {
        *(unsigned short *)p = _byteswap_ushort(self->extra);
        p += 2;
    }
    for (i = 0; i < self->count; i++) {
        u.q = self->items[i];
        *(unsigned __int64 *)p = ((unsigned __int64)_byteswap_ulong(u.w[1]) << 32) | _byteswap_ulong(u.w[0]);
        p += 8;
    }
    return (self->flags & 1) ? 0x80004001 : 0;
}
