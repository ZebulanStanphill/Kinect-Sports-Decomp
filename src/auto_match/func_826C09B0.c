typedef struct Ref_826C09B0 {
    void *ref;
} Ref_826C09B0;

typedef struct Handle_826C09B0 {
    void *vtbl;
    Ref_826C09B0 member;
} Handle_826C09B0;

typedef struct Obj_826C09B0 {
    void *vtbl;
    void *ref;
    int count;
    int padc;
    Handle_826C09B0 handle;
    int f18;
    int f1c;
    int f20;
    unsigned char f24;
    int f28;
    unsigned char f2c;
    unsigned char f2d;
} Obj_826C09B0;

extern void *fn_826A71D8(void *p);
extern void fn_826824B0(void *p);
extern char lbl_8200B5A8[];
extern char lbl_82010118[];
extern char lbl_82012A64[];

Obj_826C09B0 *fn_826C09B0(Obj_826C09B0 *self, void **src)
{
    self->ref = *src != 0 ? fn_826A71D8(*src) : 0;
    self->count = 1;
    {
        Handle_826C09B0 *h = &self->handle;
        h->vtbl = lbl_8200B5A8;
    }
    {
        Ref_826C09B0 *r0 = &self->handle.member;
        r0->ref = 0;
    }
    self->vtbl = lbl_82012A64;
    self->handle.vtbl = lbl_82010118;
    self->f18 = 0;
    self->f24 = 0;
    self->f1c = 0;
    self->f20 = 0;
    self->f28 = 0;
    self->f2c = 0;
    self->f2d = 0;
    {
        Ref_826C09B0 *r = &self->handle.member;
        if (r->ref != 0)
            fn_826824B0(r->ref);
        r->ref = 0;
    }
    return self;
}
