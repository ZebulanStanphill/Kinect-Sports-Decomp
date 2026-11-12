typedef struct Guid_82EE5130 {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82EE5130;

typedef struct Obj_82EE5130 Obj_82EE5130;

typedef struct ObjVtbl_82EE5130 {
    void *f[5];
    int (*GetSize)(Obj_82EE5130 *self, unsigned __int64 *a, unsigned __int64 *b);
} ObjVtbl_82EE5130;

struct Obj_82EE5130 {
    ObjVtbl_82EE5130 *vt;
    char pad4[8];
    unsigned int ready;          /* 0x0c */
    Guid_82EE5130 guid;          /* 0x10 */
    unsigned __int64 size;       /* 0x20 */
    char pad28[0x20];
    char tab[0x88 - 0x48];       /* 0x48 */
    unsigned int count;          /* 0x88 */
    unsigned int f8c;
    unsigned int f90;
    Guid_82EE5130 guid2;         /* 0x94 */
};

extern void fn_82E3C5F8(char *tab, unsigned int index, unsigned short **out);
extern void *memcpy(void *dst, const void *src, unsigned int n);
unsigned long _byteswap_ulong(unsigned long);
unsigned short _byteswap_ushort(unsigned short);
unsigned __int64 _byteswap_uint64(unsigned __int64);

static __forceinline void WriteGuid(unsigned char *dst, const Guid_82EE5130 *src)
{
    Guid_82EE5130 g;
    g.Data1 = _byteswap_ulong(src->Data1);
    g.Data2 = _byteswap_ushort(src->Data2);
    g.Data3 = _byteswap_ushort(src->Data3);
    memcpy(g.Data4, src->Data4, 8);
    memcpy(dst, &g, 0x10);
}

int fn_82EE5130(Obj_82EE5130 *self, unsigned char *buf, unsigned int size, unsigned int *outSize)
{
    unsigned __int64 total;
    unsigned short i;
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
    WriteGuid(p, &self->guid2);
    p += 0x10;
    *(unsigned int *)p = _byteswap_ulong(self->f8c);
    p += 4;
    *(unsigned int *)p = _byteswap_ulong(self->f90);
    p += 4;
    *(unsigned short *)p = _byteswap_ushort((unsigned short)self->count);
    p += 2;
    for (i = 0; i < self->count; i++) {
        unsigned short *pe;
        fn_82E3C5F8(self->tab, i, &pe);
        *(unsigned short *)p = _byteswap_ushort(*pe);
        p += 2;
    }
    return 0;
}
