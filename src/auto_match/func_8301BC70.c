typedef struct Iface_8301BC70 Iface_8301BC70;
struct Iface_8301BC70 {
    struct {
        void *f0;
        void *f4;
        void (*call)(Iface_8301BC70 *self);
    } *vt;
};

typedef struct Owner_8301BC70 {
    char pad[0xc0];
    Iface_8301BC70 iface;
} Owner_8301BC70;

typedef struct Buffer_8301BC70 {
    void *data;
} Buffer_8301BC70;

typedef struct Self_8301BC70 {
    char pad[0xc];
    Owner_8301BC70 *owner;
    int pad10;
    Buffer_8301BC70 buffer;
} Self_8301BC70;

extern void fn_83037590(Buffer_8301BC70 *buffer);

void fn_8301BC70(Self_8301BC70 *self)
{
    if (self->buffer.data != 0) {
        fn_83037590(&self->buffer);
        return;
    }
    self->owner->iface.vt->call(&self->owner->iface);
}
