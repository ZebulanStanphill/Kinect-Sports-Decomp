typedef struct { unsigned int v[6]; } Data;
typedef struct { int x0; Data *d; } Ref;
typedef struct { char pad[0x1c]; unsigned int type; } Obj;
typedef struct { char pad[0x90]; Obj *obj; } Self;
extern void fn_8285F270(Obj *o, unsigned int a, unsigned int b);
extern void fn_8285C418(Obj *o, unsigned int a, unsigned int b);

void fn_8284FF60(Self *self, Ref *src, Ref *dst)
{
    Data *s;
    Data *d;

    if (self->obj == 0) {
        return;
    }
    switch (self->obj->type) {
    case 0:
        s = src->d;
        d = dst->d;
        d->v[0] = s->v[0];
        d->v[1] = s->v[1];
        d->v[2] = s->v[2];
        d->v[3] = s->v[3];
        d->v[4] = s->v[4];
        fn_8285C418(self->obj, s->v[5], d->v[5]);
        break;
    case 1:
        s = src->d;
        d = dst->d;
        d->v[0] = s->v[0];
        fn_8285F270(self->obj, s->v[1], d->v[1]);
        break;
    }
}
