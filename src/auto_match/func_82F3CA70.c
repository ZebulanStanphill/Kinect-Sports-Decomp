typedef struct Guid_82F3CA70 {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82F3CA70;

typedef struct Stream_82F3CA70 Stream_82F3CA70;
typedef struct StreamVtbl_82F3CA70 {
    void *f[12];
    int (*Write)(Stream_82F3CA70 *self, unsigned char *buf, unsigned int size, unsigned int *written);
} StreamVtbl_82F3CA70;
struct Stream_82F3CA70 {
    StreamVtbl_82F3CA70 *vt;
};

typedef struct Obj_82F3CA70 Obj_82F3CA70;

typedef struct ObjVtbl_82F3CA70 {
    void *f[5];
    int (*GetSize)(Obj_82F3CA70 *self, unsigned __int64 *a, unsigned __int64 *b);
} ObjVtbl_82F3CA70;

struct Obj_82F3CA70 {
    ObjVtbl_82F3CA70 *vt;
    char pad4[8];
    unsigned int ready;          /* 0x0c */
    Guid_82F3CA70 guid;          /* 0x10 */
    unsigned __int64 size;       /* 0x20 */
    char pad28[0x24];
    unsigned char b4c;           /* 0x4c */
    unsigned char b4d;           /* 0x4d */
    char pad4e[2];
    unsigned int f50;            /* 0x50 */
    Stream_82F3CA70 *stream;     /* 0x54 */
};

extern void *memcpy(void *dst, const void *src, unsigned int n);
unsigned long _byteswap_ulong(unsigned long);
unsigned short _byteswap_ushort(unsigned short);
unsigned __int64 _byteswap_uint64(unsigned __int64);
extern int fn_82F3C920(Obj_82F3CA70 *self);

static __forceinline void WriteGuid(unsigned char *dst, const Guid_82F3CA70 *src)
{
    Guid_82F3CA70 g;
    g.Data1 = _byteswap_ulong(src->Data1);
    g.Data2 = _byteswap_ushort(src->Data2);
    g.Data3 = _byteswap_ushort(src->Data3);
    memcpy(g.Data4, src->Data4, 8);
    memcpy(dst, &g, 0x10);
}

int fn_82F3CA70(Obj_82F3CA70 *self, unsigned char *buf, unsigned int size, unsigned int *outSize)
{
    unsigned __int64 total;
    unsigned char *p;
    unsigned int written;
    int hr;

    if (self->ready == 0) {
        return 0xc00d36b6;
    }
    if (outSize == 0 || (size != 0 && buf == 0)) {
        return 0x80070057;
    }
    hr = self->vt->GetSize(self, 0, &total);
    if (hr < 0) {
        return hr;
    }
    if (total >= 0x100000000ULL) {
        return 0xc00d3a9a;
    }
    if (size < (unsigned int)total) {
        *outSize = (unsigned int)total;
        return 0xc00d36b1;
    }
    WriteGuid(buf, &self->guid);
    p = buf + 0x10;
    {
        unsigned __int64 t = self->size;
        *(unsigned __int64 *)p = _byteswap_uint64(t);
    }
    p += 8;
    hr = fn_82F3C920(self);
    if (hr < 0) {
        return hr;
    }
    *(unsigned int *)p = _byteswap_ulong(self->f50);
    p += 4;
    *p++ = self->b4c;
    *p++ = self->b4d;
    *outSize = 0x1e;
    hr = self->stream->vt->Write(self->stream, p, size - 0x1e, &written);
    *outSize += written;
    return hr;
}
