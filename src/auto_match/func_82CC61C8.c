extern void fn_82C53970(void *p);

typedef struct {
    int state;
    int pad[14];
    void *handle;
} Obj;

void fn_82CC61C8(Obj *o)
{
    if (o->handle != 0) {
        fn_82C53970(o->handle);
        o->handle = 0;
    }
    o->state = 1;
}
