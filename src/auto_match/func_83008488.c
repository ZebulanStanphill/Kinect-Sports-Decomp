typedef struct Obj_83008488 Obj_83008488;
typedef struct ObjVt_83008488 {
    void *pad0[4];
    int (*Release)(Obj_83008488 *self, const void *iid);
} ObjVt_83008488;
struct Obj_83008488 { ObjVt_83008488 *vt; };

typedef struct Buffer_83008488 {
    int a;
    int index;
    int b;
    int c;
    union {
        unsigned char byte;
        struct {
            unsigned int top : 2;
            unsigned int kind : 5;
            unsigned int active : 1;
            unsigned int rest : 24;
        } bits;
    } u;
    Obj_83008488 *obj;
} Buffer_83008488;

typedef struct Self_83008488 {
    void *vt;
    Buffer_83008488 buffer;
} Self_83008488;

extern const char lbl_831BC7F4[];
extern void *lbl_831BC768;
extern void fn_82FA5190(void *heap, void *p);

static __forceinline void Detach(Buffer_83008488 *b)
{
    b->obj = 0;
    b->u.bits.active = 0;
}

void fn_83008488(Self_83008488 *self)
{
    Obj_83008488 *obj = self->buffer.obj;
    if (obj != 0) {
        switch (self->buffer.u.bits.kind) {
        case 1:
        case 3:
            fn_82FA5190(lbl_831BC768, obj);
            break;
        case 2:
            obj->vt->Release(obj, lbl_831BC7F4);
            break;
        }
    }
    self->buffer.a = 0;
    self->buffer.index = -1;
    self->buffer.b = 0;
    self->buffer.c = 0;
    self->buffer.u.byte = 0;
    Detach(&self->buffer);
}
