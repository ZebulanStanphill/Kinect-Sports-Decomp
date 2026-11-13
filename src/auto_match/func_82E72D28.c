typedef struct Guid_82E72D28 {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82E72D28;


typedef struct Obj_82E72D28 Obj_82E72D28;

typedef struct ObjVtbl_82E72D28 {
    void *f[5];
    int (*GetSize)(Obj_82E72D28 *self, unsigned __int64 *a, unsigned __int64 *b);
} ObjVtbl_82E72D28;

struct Obj_82E72D28 {
    ObjVtbl_82E72D28 *vt;
    char pad4[8];
    unsigned int ready;          /* 0x0c */
    Guid_82E72D28 guid;          /* 0x10 */
    unsigned __int64 size;       /* 0x20 */
};

extern void *memcpy(void *dst, const void *src, unsigned int n);
extern void *memset(void *dst, int c, unsigned int n);
unsigned long _byteswap_ulong(unsigned long);
unsigned short _byteswap_ushort(unsigned short);

static __forceinline void WriteGuid(unsigned char *dst, const Guid_82E72D28 *src)
{
    Guid_82E72D28 g;
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

int fn_82E72D28(Obj_82E72D28 *self, unsigned char *buf, unsigned int size, unsigned int *outSize)
{
    unsigned __int64 total;

    if (self->ready == 0) {
        return 0xc00d36b6;
    }
    if (outSize == 0 || (size != 0 && buf == 0)) {
        return 0x80070057;
    }
    self->vt->GetSize(self, &total, 0);
    if (total >= 0x100000000ULL) {
        return 0xc00d3a9a;
    }
    *outSize = (unsigned int)total;
    if ((unsigned int)total > size) {
        return 0xc00d36b1;
    }
    memset(buf, 0, size);
    WriteGuid(buf, &self->guid);
    buf += 0x10;
    *(unsigned __int64 *)buf = Swap64(self->size);
    return 0;
}
