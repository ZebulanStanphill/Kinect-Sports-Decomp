typedef struct {
    char pad[0x1c];
    int ready;
} Sub;

typedef struct {
    char pad[0x308];
    int sub;
} Obj;

typedef struct {
    Obj *obj;
    int pad[2];
    int enabled;
} Owner;

extern void *fn_828A8BA0(Obj *o);
extern unsigned char fn_8288D868(void *p);

unsigned char fn_823B6790(Owner *o)
{
    if (o->obj != 0 && o->enabled != 0 && o->obj->sub != 0 && ((Sub *)o->obj->sub)->ready != 0) {
        if (fn_8288D868(fn_828A8BA0(o->obj))) {
            return 1;
        }
    }
    return 0;
}
