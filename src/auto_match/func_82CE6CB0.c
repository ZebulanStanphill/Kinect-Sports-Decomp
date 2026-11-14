typedef struct Writer_82CE6CB0 Writer_82CE6CB0;
typedef struct WriterVtbl_82CE6CB0 {
    void *pad0[2];
    int (*write)(Writer_82CE6CB0 *self, const void *buf, int nbytes);  /* 0x08 */
} WriterVtbl_82CE6CB0;
struct Writer_82CE6CB0 {
    WriterVtbl_82CE6CB0 *vt;
};

typedef struct Sub_82CE6CB0 Sub_82CE6CB0;
typedef struct SubVtbl_82CE6CB0 {
    void *pad0[16];
    void (*finish)(Sub_82CE6CB0 *self);  /* 0x40 */
} SubVtbl_82CE6CB0;
struct Sub_82CE6CB0 {
    SubVtbl_82CE6CB0 *vt;
};

typedef struct Stream_82CE6CB0 {
    int pad0;
    char *begin;    /* 0x04 */
    char *end;      /* 0x08 */
} Stream_82CE6CB0;

typedef struct Obj_82CE6CB0 Obj_82CE6CB0;
typedef struct ObjVtbl_82CE6CB0 {
    void *pad0[4];
    void (*close)(Obj_82CE6CB0 *self, void *info, int flags);  /* 0x10 */
} ObjVtbl_82CE6CB0;
struct Obj_82CE6CB0 {
    ObjVtbl_82CE6CB0 *vt;
    Writer_82CE6CB0 *writer;    /* 0x04 */
    char pad08[0x1c - 0x08];
    Sub_82CE6CB0 sub;           /* 0x1c */
    char pad20[0x978 - 0x20];
    char info[0x99c - 0x978];   /* 0x978 */
    Stream_82CE6CB0 stream;     /* 0x99c */
};

extern void fn_82CF7648(Stream_82CE6CB0 *stream, char *begin, int size);

static __forceinline int GetSize(Stream_82CE6CB0 *s)
{
    return s->end - s->begin;
}

void fn_82CE6CB0(Obj_82CE6CB0 *self, int flags)
{
    Stream_82CE6CB0 *stream;

    if (flags & 2) {
        stream = &self->stream;
        if (GetSize(&self->stream) != 0) {
            self->writer->vt->write(self->writer, self->stream.begin, GetSize(stream));
            fn_82CF7648(stream, 0, 0);
        }
    }
    if (flags & 1) {
        self->vt->close(self, self->info, flags);
        self->sub.vt->finish(&self->sub);
    }
    self->writer = 0;
}
