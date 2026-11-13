typedef struct Guid_82EE15F0 {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82EE15F0;

typedef struct Obj_82EE15F0 Obj_82EE15F0;
typedef struct Entry_82EE15F0 Entry_82EE15F0;

typedef struct ObjVtbl_82EE15F0 {
    void *f[5];
    int (*GetSize)(Obj_82EE15F0 *self, unsigned __int64 *a, unsigned __int64 *b);
    void *f18[8];
    int (*WriteEntry)(Obj_82EE15F0 *self, Entry_82EE15F0 *e, unsigned char *dst, unsigned int *written);
} ObjVtbl_82EE15F0;

struct Obj_82EE15F0 {
    ObjVtbl_82EE15F0 *vt;
    char pad4[8];
    unsigned int ready;          /* 0x0c */
    Guid_82EE15F0 guid;          /* 0x10 */
    unsigned __int64 size;       /* 0x20 */
    char pad28[0x20];
    char tab[0x254 - 0x48];      /* 0x48 */
    unsigned int count;          /* 0x254 */
};

extern int fn_82EE1048(char *tab, unsigned int index, Entry_82EE15F0 **out);
extern void *memcpy(void *dst, const void *src, unsigned int n);
unsigned long _byteswap_ulong(unsigned long);
unsigned short _byteswap_ushort(unsigned short);
unsigned __int64 _byteswap_uint64(unsigned __int64);

static __forceinline void WriteGuid(unsigned char *dst, const Guid_82EE15F0 *src)
{
    Guid_82EE15F0 g;
    g.Data1 = _byteswap_ulong(src->Data1);
    g.Data2 = _byteswap_ushort(src->Data2);
    g.Data3 = _byteswap_ushort(src->Data3);
    memcpy(g.Data4, src->Data4, 8);
    memcpy(dst, &g, 0x10);
}

int fn_82EE15F0(Obj_82EE15F0 *self, unsigned char *buf, unsigned int size, unsigned int *outSize)
{
    int hr;
    unsigned __int64 total;
    unsigned int i;
    unsigned int written;
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
    hr = 0;
    written = 0;
    {
        unsigned __int64 t = self->size;
        *(unsigned __int64 *)p = _byteswap_uint64(t);
    }
    p += 8;
    *(unsigned short *)p = _byteswap_ushort((unsigned short)self->count);
    p += 2;
    for (i = 0; i < self->count; i++) {
        Entry_82EE15F0 *e;
        int r = fn_82EE1048(self->tab, i, &e);
        hr = self->vt->WriteEntry(self, r >= 0 ? e : 0, p, &written);
        if (hr < 0) {
            *outSize = 0;
            return hr;
        }
        p += written;
    }
    return hr;
}
