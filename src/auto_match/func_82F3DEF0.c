typedef struct Guid_82F3DEF0 {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82F3DEF0;

typedef struct Obj_82F3DEF0 {
    void *vt;
    char pad4[8];
    unsigned int ready;          /* 0x0c */
    Guid_82F3DEF0 guid;          /* 0x10 */
    unsigned __int64 size;       /* 0x20 */
    char pad28[0x24];
    unsigned short kind;         /* 0x4c */
    char pad4e[2];
    Guid_82F3DEF0 guid2;         /* 0x50 */
    unsigned __int64 size2;      /* 0x60 */
} Obj_82F3DEF0;

extern void *memcpy(void *dst, const void *src, unsigned int n);
unsigned long _byteswap_ulong(unsigned long);
unsigned short _byteswap_ushort(unsigned short);

static __forceinline void WriteGuid(unsigned char *dst, const Guid_82F3DEF0 *src)
{
    Guid_82F3DEF0 g;
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

int fn_82F3DEF0(Obj_82F3DEF0 *self, unsigned char *buf, unsigned int size, unsigned int *outSize)
{
    if (self->ready == 0) {
        return 0xc00d36b6;
    }
    if (outSize == 0 || (size != 0 && buf == 0)) {
        return 0x80070057;
    }
    *outSize = 0x32;
    if (size < 0x32) {
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
    *(unsigned short *)buf = _byteswap_ushort(self->kind);
    return 0;
}
