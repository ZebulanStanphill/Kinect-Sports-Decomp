typedef struct Guid_82EE5A20 {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82EE5A20;

typedef struct Obj_82EE5A20 Obj_82EE5A20;

typedef struct ObjVtbl_82EE5A20 {
    void *f[5];
    int (*GetSize)(Obj_82EE5A20 *self, unsigned __int64 *a, unsigned __int64 *b);
} ObjVtbl_82EE5A20;

typedef struct Pair_82EE5A20 {
    unsigned short a;
    unsigned short b;
} Pair_82EE5A20;

struct Obj_82EE5A20 {
    ObjVtbl_82EE5A20 *vt;
    char pad4[8];
    unsigned int ready;          /* 0x0c */
    Guid_82EE5A20 guid;          /* 0x10 */
    unsigned __int64 size;       /* 0x20 */
    char pad28[0x24];
    char tab[0xb4 - 0x4c];       /* 0x4c */
    unsigned int count;          /* 0xb4 */
};

extern void fn_82EE5688(char *tab, unsigned int index, Pair_82EE5A20 **out);
extern void *memcpy(void *dst, const void *src, unsigned int n);
unsigned long _byteswap_ulong(unsigned long);
unsigned short _byteswap_ushort(unsigned short);
unsigned __int64 _byteswap_uint64(unsigned __int64);

static __forceinline void WriteGuid(unsigned char *dst, const Guid_82EE5A20 *src)
{
    Guid_82EE5A20 g;
    g.Data1 = _byteswap_ulong(src->Data1);
    g.Data2 = _byteswap_ushort(src->Data2);
    g.Data3 = _byteswap_ushort(src->Data3);
    memcpy(g.Data4, src->Data4, 8);
    memcpy(dst, &g, 0x10);
}

int fn_82EE5A20(Obj_82EE5A20 *self, unsigned char *buf, unsigned int size, unsigned int *outSize)
{
    unsigned __int64 total;
    unsigned int i;
    unsigned char *p;

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
    WriteGuid(buf, &self->guid);
    p = buf + 0x10;
    {
        unsigned __int64 t = self->size;
        *(unsigned __int64 *)p = _byteswap_uint64(t);
    }
    p += 8;
    *(unsigned short *)p = _byteswap_ushort((unsigned short)self->count);
    p += 2;
    for (i = 0; i < self->count; i++) {
        Pair_82EE5A20 *pa;
        Pair_82EE5A20 *pb;
        fn_82EE5688(self->tab, i, &pa);
        *(unsigned short *)p = _byteswap_ushort(pa->a);
        p += 2;
        fn_82EE5688(self->tab, i, &pb);
        *(unsigned short *)p = _byteswap_ushort(pb->b);
        p += 2;
    }
    return 0;
}
