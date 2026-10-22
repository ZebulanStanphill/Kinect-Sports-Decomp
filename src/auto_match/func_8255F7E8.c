extern void fn_8251FA58(void *p);
extern void fn_82563400(void *a, int b, void *c, int d, int e, int f);

typedef struct Obj {
    char pad0[0x110];
    void *target;
    char pad114[0x160 - 0x114];
    int state;
    void *buffer;
    int external;
    int ready;
    int arg170;
    int arg174;
    int arg178;
    int arg17c;
    void *dest;
} Obj;

void fn_8255F7E8(Obj *o)
{
    if (o->buffer != 0 && o->dest != 0 && o->ready != 0 && o->target != 0) {
        fn_82563400(o->target, o->arg17c, o->buffer, o->arg170, o->arg174, o->arg178);
    }
    if (o->external == 0 && o->buffer != 0) {
        fn_8251FA58(o->buffer);
    }
    o->buffer = 0;
    o->external = 0;
    o->state = 0;
}
