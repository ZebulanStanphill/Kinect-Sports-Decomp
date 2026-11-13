typedef struct Obj_830095D0 Obj_830095D0;

typedef struct Handle_830095D0 {
    Obj_830095D0 *obj;
    unsigned int kind : 2;
    unsigned int index : 30;
} Handle_830095D0;

typedef struct Vt_830095D0 {
    void *pad[17];
    void (*Notify)(Obj_830095D0 *self, float value, Handle_830095D0 *h, int flag);
} Vt_830095D0;

struct Obj_830095D0 {
    Vt_830095D0 *vt;
    char pad4[0x9c];
    unsigned char flags;
};

void fn_830095D0(Obj_830095D0 *self)
{
    Handle_830095D0 h;
    h.kind = 2;
    self->flags |= 8;
    h.obj = self;
    self->vt->Notify(self, 0.0f, &h, 1);
}
