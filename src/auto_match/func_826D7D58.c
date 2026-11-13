extern void fn_826D6728(void *self);

typedef struct {
    float x, y, z, w;
} Vec_826D7D58;

typedef struct {
    int f0;
    int f4;
    Vec_826D7D58 v;
    float f18;
    int f1c;
    int f20;
    int sub;
} Obj_826D7D58;

static __forceinline void Vec_Zero(Vec_826D7D58 *v)
{
    v->x = 0.0f;
    v->y = 0.0f;
    v->z = 0.0f;
    v->w = 0.0f;
}

Obj_826D7D58 *fn_826D7D58(Obj_826D7D58 *self)
{
    self->f0 = 0;
    self->f4 = -1;
    Vec_Zero(&self->v);
    self->f20 = 0;
    self->f18 = 1.0f;
    fn_826D6728(&self->sub);
    self->f1c = 1;
    return self;
}
