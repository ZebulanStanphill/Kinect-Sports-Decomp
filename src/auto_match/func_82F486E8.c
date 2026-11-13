typedef struct IUnk_82F486E8 IUnk_82F486E8;

typedef struct Vtbl_82F486E8 {
    void *QueryInterface;
    void *AddRef;
    unsigned long (*Release)(IUnk_82F486E8 *self);
} Vtbl_82F486E8;

struct IUnk_82F486E8 {
    Vtbl_82F486E8 *vt;
};

typedef struct Obj_82F486E8 {
    char pad0[8];
    unsigned int f8;
    IUnk_82F486E8 *source;
    IUnk_82F486E8 *stream;
    unsigned short f14;
    unsigned int f18;
    unsigned int f1c;
    unsigned int f20;
    char pad24[4];
    void *buffer;
    char list[0x20];
    unsigned int position[2]; /* 64-bit value at a 4-aligned offset */
} Obj_82F486E8;

extern void fn_82E579E0(void *list);
extern void fn_82E4FE40(void *p);

int fn_82F486E8(Obj_82F486E8 *self)
{
    if (self->source == 0)
        return 0xc00d36b6;
    self->f8 = 0;
    self->f14 = 0;
    self->f18 = 0;
    self->f1c = 0;
    fn_82E579E0(self->list);
    *(unsigned __int64 *)self->position = 0;
    self->f20 = 0;
    if (self->buffer != 0)
        fn_82E4FE40(self->buffer);
    self->buffer = 0;
    if (self->source == 0)
        return 0xc00d36b6;
    if (self->stream != 0) {
        self->stream->vt->Release(self->stream);
        self->stream = 0;
    }
    if (self->source != 0) {
        self->source->vt->Release(self->source);
        self->source = 0;
    }
    return 0;
}
