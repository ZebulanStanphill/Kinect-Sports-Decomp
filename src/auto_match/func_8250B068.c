typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Ref_8250B068 Ref_8250B068;

extern unsigned char fn_8223AAC0(Ref_8250B068 *ref);
extern void fn_822315A0(Ref_8250B068 *ref);

typedef struct {
    void *ptr;
    Ref_8250B068 *ref;
} Handle_8250B068;

typedef struct {
    unsigned int a;
    unsigned int b;
    __vector4 v0;
    float f20;
    __vector4 v1;
    float x;
    float y;
    float z;
    Handle_8250B068 handle;
} Item_8250B068;

Item_8250B068 *fn_8250B068(Item_8250B068 *self, Item_8250B068 *other)
{
    Handle_8250B068 *h;
    Ref_8250B068 *ref;
    void *ptr;

    self->a = other->a;
    self->b = other->b;
    self->v0 = other->v0;
    self->f20 = other->f20;
    self->v1 = other->v1;
    self->x = other->x;
    self->y = other->y;
    self->z = other->z;
    h = &self->handle;
    h->ptr = 0;
    h->ref = 0;
    ref = other->handle.ref;
    ptr = other->handle.ptr;
    if (ref != 0 && fn_8223AAC0(ref)) {
        if (h->ref != 0) {
            fn_822315A0(h->ref);
        }
        h->ref = ref;
        h->ptr = ptr;
    }
    return self;
}
