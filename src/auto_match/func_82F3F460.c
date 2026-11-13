typedef struct Guid_82F3F460 {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82F3F460;

typedef struct Obj_82F3F460 Obj_82F3F460;

typedef struct ObjVtbl_82F3F460 {
    void *f[5];
    int (*GetSize)(Obj_82F3F460 *self, unsigned __int64 *a, unsigned __int64 *b);
} ObjVtbl_82F3F460;

struct Obj_82F3F460 {
    ObjVtbl_82F3F460 *vt;
    char pad4[8];
    unsigned int ready;          /* 0x0c */
    Guid_82F3F460 guid;          /* 0x10 */
    unsigned __int64 size;       /* 0x20 */
    char pad28[0x20];
    unsigned short *data[5];     /* 0x48 */
    unsigned short len[5];       /* 0x5c */
};

extern void fn_82E57888(unsigned char **cursor, unsigned short *src, unsigned int size);
extern void *memcpy(void *dst, const void *src, unsigned int n);
unsigned long _byteswap_ulong(unsigned long);
unsigned short _byteswap_ushort(unsigned short);
unsigned __int64 _byteswap_uint64(unsigned __int64);

static __forceinline void WriteGuid(unsigned char *dst, const Guid_82F3F460 *src)
{
    Guid_82F3F460 g;
    g.Data1 = _byteswap_ulong(src->Data1);
    g.Data2 = _byteswap_ushort(src->Data2);
    g.Data3 = _byteswap_ushort(src->Data3);
    memcpy(g.Data4, src->Data4, 8);
    memcpy(dst, &g, 0x10);
}

int fn_82F3F460(Obj_82F3F460 *self, unsigned char *buf, unsigned int size, unsigned int *outSize)
{
    unsigned __int64 total;
    unsigned char *p;
    unsigned char *cur;

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
    *(unsigned short *)p = _byteswap_ushort((unsigned short)(self->len[0] * 2));
    p += 2;
    *(unsigned short *)p = _byteswap_ushort((unsigned short)(self->len[1] * 2));
    p += 2;
    *(unsigned short *)p = _byteswap_ushort((unsigned short)(self->len[2] * 2));
    p += 2;
    *(unsigned short *)p = _byteswap_ushort((unsigned short)(self->len[3] * 2));
    p += 2;
    *(unsigned short *)p = _byteswap_ushort((unsigned short)(self->len[4] * 2));
    p += 2;
    cur = p;
    if (self->data[0] != 0)
        fn_82E57888(&cur, self->data[0], self->len[0] * 2);
    if (self->data[1] != 0)
        fn_82E57888(&cur, self->data[1], self->len[1] * 2);
    if (self->data[2] != 0)
        fn_82E57888(&cur, self->data[2], self->len[2] * 2);
    if (self->data[3] != 0)
        fn_82E57888(&cur, self->data[3], self->len[3] * 2);
    if (self->data[4] != 0)
        fn_82E57888(&cur, self->data[4], self->len[4] * 2);
    return 0;
}
