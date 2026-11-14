typedef struct Obj_82D8CCD0 {
    char pad0[0x20];
    unsigned short id;
    char pad22[6];
    unsigned __int64 value;
} Obj_82D8CCD0;

typedef struct Holder_82D8CCD0 {
    char pad0[0xcc];
    Obj_82D8CCD0 *obj;
} Holder_82D8CCD0;

typedef struct Self_82D8CCD0 {
    int pad0;
    Holder_82D8CCD0 *a;
    Holder_82D8CCD0 *b;
    int target;
    int mode;
} Self_82D8CCD0;

extern int fn_82CEFB20(unsigned __int64 *p);
extern int fn_82DBB778(int target, Obj_82D8CCD0 *obj);

void fn_82D8CCD0(Self_82D8CCD0 *self)
{
    Obj_82D8CCD0 *o;
    unsigned __int64 saved;

    o = self->a->obj;
    if (o->id == 0xffff) {
        o = self->b->obj;
    }
    if (self->mode != 2) {
        fn_82DBB778(self->target, o);
        return;
    }
    saved = o->value;
    fn_82CEFB20(&o->value);
    fn_82DBB778(self->target, o);
    o->value = saved;
}
