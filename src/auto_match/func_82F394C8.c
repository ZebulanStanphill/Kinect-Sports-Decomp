typedef struct Guid_82F394C8 {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82F394C8;

typedef struct Obj_82F394C8 Obj_82F394C8;

typedef struct ObjVtbl_82F394C8 {
    void *f[5];
    int (*GetSize)(Obj_82F394C8 *self, unsigned __int64 *a, unsigned __int64 *b);
} ObjVtbl_82F394C8;

struct Obj_82F394C8 {
    ObjVtbl_82F394C8 *vt;
    char pad4[8];
    unsigned int ready;          /* 0x0c */
    Guid_82F394C8 guid;          /* 0x10 */
    unsigned __int64 size;       /* 0x20 */
    char pad28[0x20];
    unsigned int f48;            /* 0x48 */
    void *data;                  /* 0x4c */
    unsigned int dataSize;       /* 0x50 */
};

extern void *memcpy(void *dst, const void *src, unsigned int n);
unsigned long _byteswap_ulong(unsigned long);
unsigned short _byteswap_ushort(unsigned short);
unsigned __int64 _byteswap_uint64(unsigned __int64);

static __forceinline void WriteGuid(unsigned char *dst, const Guid_82F394C8 *src)
{
    Guid_82F394C8 g;
    g.Data1 = _byteswap_ulong(src->Data1);
    g.Data2 = _byteswap_ushort(src->Data2);
    g.Data3 = _byteswap_ushort(src->Data3);
    memcpy(g.Data4, src->Data4, 8);
    memcpy(dst, &g, 0x10);
}

int fn_82F394C8(Obj_82F394C8 *self, unsigned char *buf, unsigned int size, unsigned int *outSize)
{
    unsigned __int64 total;
    unsigned char *p;

    if (self->ready == 0) {
        return 0xc00d36b6;
    }
    if (outSize == 0) {
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
    WriteGuid(buf, &self->guid);
    p = buf + 0x10;
    {
        unsigned __int64 t = self->size;
        *(unsigned __int64 *)p = _byteswap_uint64(t);
    }
    p += 8;
    *(unsigned int *)p = _byteswap_ulong(self->f48);
    p += 4;
    *(unsigned int *)p = _byteswap_ulong(self->dataSize);
    p += 4;
    if (self->dataSize != 0) {
        memcpy(p, self->data, self->dataSize);
    }
    return 0;
}
