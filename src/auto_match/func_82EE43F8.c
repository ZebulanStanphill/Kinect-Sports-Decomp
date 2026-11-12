typedef struct Guid_82EE43F8 {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82EE43F8;

typedef struct Inner_82EE43F8 {
    char pad[0x40];
    unsigned int count;
} Inner_82EE43F8;

typedef struct Obj_82EE43F8 Obj_82EE43F8;

typedef struct ObjVtbl_82EE43F8 {
    void *f[5];
    int (*GetSize)(Obj_82EE43F8 *self, unsigned __int64 *a, unsigned __int64 *b);
} ObjVtbl_82EE43F8;

struct Obj_82EE43F8 {
    ObjVtbl_82EE43F8 *vt;
    char pad4[8];
    unsigned int ready;          /* 0x0c */
    Guid_82EE43F8 guid;          /* 0x10 */
    unsigned __int64 size;       /* 0x20 */
    char pad28[0x20];
    char tab[0xb0 - 0x48];       /* 0x48 */
    unsigned int count;          /* 0xb0 */
    char padb4[0x174 - 0xb4];
    Guid_82EE43F8 guid2;         /* 0x174 */
};

extern void fn_82EE3630(char *tab, unsigned int index, Inner_82EE43F8 ***out);
extern void fn_82E3C5F8(Inner_82EE43F8 *inner, unsigned int index, unsigned short **out);
extern void *memcpy(void *dst, const void *src, unsigned int n);
unsigned long _byteswap_ulong(unsigned long);
unsigned short _byteswap_ushort(unsigned short);
unsigned __int64 _byteswap_uint64(unsigned __int64);

static __forceinline void WriteGuid(unsigned char *dst, const Guid_82EE43F8 *src)
{
    Guid_82EE43F8 g;
    g.Data1 = _byteswap_ulong(src->Data1);
    g.Data2 = _byteswap_ushort(src->Data2);
    g.Data3 = _byteswap_ushort(src->Data3);
    memcpy(g.Data4, src->Data4, 8);
    memcpy(dst, &g, 0x10);
}

int fn_82EE43F8(Obj_82EE43F8 *self, unsigned char *buf, unsigned int size, unsigned int *outSize)
{
    unsigned __int64 total;
    Inner_82EE43F8 **pi;
    Inner_82EE43F8 *inner;
    unsigned short i;
    unsigned char *p;
    unsigned short j;

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
    *(unsigned short *)p = _byteswap_ushort((unsigned short)self->count);
    p += 2;
    for (i = 0; i < self->count; i++) {
        fn_82EE3630(self->tab, i, &pi);
        inner = *pi;
        *(unsigned short *)p = _byteswap_ushort((unsigned short)inner->count);
        p += 2;
        for (j = 0; j < inner->count; j++) {
            unsigned short *pe;
            fn_82E3C5F8(inner, j, &pe);
            *(unsigned short *)p = _byteswap_ushort(*pe);
            p += 2;
        }
    }
    return 0;
}
