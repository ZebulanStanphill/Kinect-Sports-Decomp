typedef struct Guid_82F3B2C8 {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82F3B2C8;

typedef struct Entry_82F3B2C8 {
    unsigned int a;
    unsigned short b;
} Entry_82F3B2C8;

typedef struct Obj_82F3B2C8 Obj_82F3B2C8;

typedef struct ObjVtbl_82F3B2C8 {
    void *f[5];
    int (*GetSize)(Obj_82F3B2C8 *self, unsigned __int64 *a, unsigned __int64 *b);
} ObjVtbl_82F3B2C8;

struct Obj_82F3B2C8 {
    ObjVtbl_82F3B2C8 *vt;
    char pad4[8];
    unsigned int ready;          /* 0x0c */
    Guid_82F3B2C8 guid;          /* 0x10 */
    unsigned __int64 size;       /* 0x20 */
    char pad28[0x24];
    unsigned int flags;          /* 0x4c */
    Guid_82F3B2C8 guid2;         /* 0x50 */
    unsigned __int64 size2;      /* 0x60 */
    unsigned int f68;            /* 0x68 */
    unsigned int count;          /* 0x6c */
    unsigned char *entries;      /* 0x70 */
};

extern void *memcpy(void *dst, const void *src, unsigned int n);
unsigned long _byteswap_ulong(unsigned long);
unsigned short _byteswap_ushort(unsigned short);
unsigned __int64 _byteswap_uint64(unsigned __int64);

static __forceinline void WriteGuid(unsigned char *dst, const Guid_82F3B2C8 *src)
{
    Guid_82F3B2C8 g;
    g.Data1 = _byteswap_ulong(src->Data1);
    g.Data2 = _byteswap_ushort(src->Data2);
    g.Data3 = _byteswap_ushort(src->Data3);
    memcpy(g.Data4, src->Data4, 8);
    memcpy(dst, &g, 0x10);
}

static __forceinline unsigned __int64 Swap64(unsigned __int64 v)
{
    union { unsigned __int64 q; unsigned int w[2]; } u;
    u.q = v;
    return ((unsigned __int64)_byteswap_ulong(u.w[1]) << 32) | _byteswap_ulong(u.w[0]);
}

int fn_82F3B2C8(Obj_82F3B2C8 *self, unsigned char *buf, unsigned int size, unsigned int *outSize)
{
    unsigned __int64 total;
    unsigned int i;

    if (self->ready == 0) {
        return 0xc00d36b6;
    }
    if (outSize == 0 || (size != 0 && buf == 0)) {
        return 0x80070057;
    }
    total = 0;
    self->vt->GetSize(self, &total, 0);
    if (total > 0xffffffffULL) {
        return 0x8000ffff;
    }
    *outSize = (unsigned int)total;
    if (size < (unsigned int)total) {
        return 0xc00d36b1;
    }
    WriteGuid(buf, &self->guid);
    buf += 0x10;
    *(unsigned __int64 *)buf = Swap64(self->size);
    buf += 8;
    WriteGuid(buf, &self->guid2);
    buf += 0x10;
    *(unsigned __int64 *)buf = Swap64(self->size2);
    buf += 8;
    *(unsigned int *)buf = _byteswap_ulong(self->f68);
    buf += 4;
    *(unsigned int *)buf = _byteswap_ulong(self->count);
    buf += 4;
    if (self->flags & 1) {
        for (i = 0; i < self->count; i++) {
            Entry_82F3B2C8 *e = (Entry_82F3B2C8 *)(self->entries + i * 6);
            *(unsigned int *)buf = _byteswap_ulong(e->a);
            buf += 4;
            *(unsigned short *)buf = _byteswap_ushort(e->b);
            buf += 2;
        }
    }
    return 0;
}
