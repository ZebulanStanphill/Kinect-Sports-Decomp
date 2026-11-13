typedef struct Owner_82FAA318 {
    int pad[11];
    int refs;
} Owner_82FAA318;

typedef struct Buffer_82FAA318 {
    int data;
    int pad[3];
    unsigned short count;
    unsigned short owned : 1;
    unsigned short capacity : 15;
    int size;
} Buffer_82FAA318;

typedef struct Obj_82FAA318 {
    void *vt;
    int a;
    int b;
    int id;
    unsigned char enabled;
    int c;
    int d;
    int e;
    Buffer_82FAA318 buf;
    int pad;
    int pad2;
    int owner;
    int f;
    int g;
    unsigned char h;
} Obj_82FAA318;

extern char lbl_8216CC50[];
extern void fn_82FAC5E8(int owner, Obj_82FAA318 *self);

static __forceinline void InitBuffer(Buffer_82FAA318 *b)
{
    b->data = 0;
    b->count = 0;
    b->owned = 0;
    b->size = 0;
}

Obj_82FAA318 *fn_82FAA318(Obj_82FAA318 *self, int id, Owner_82FAA318 *owner)
{
    self->id = id;
    self->a = 0;
    self->vt = lbl_8216CC50;
    self->b = 0;
    self->enabled = 1;
    self->c = 0;
    self->d = 0;
    self->e = 0;
    InitBuffer(&self->buf);
    self->owner = (int)owner;
    if (owner != 0)
        owner->refs++;
    self->f = 0;
    self->g = 0;
    self->h = 0;
    if (self->owner != 0)
        fn_82FAC5E8(self->owner, self);
    return self;
}
