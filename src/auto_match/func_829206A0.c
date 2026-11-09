typedef struct {
    int handle;
    void *buf;
    unsigned int size;
} Obj_82920638;

extern int fn_82920638(Obj_82920638 *o);

void fn_829206A0(Obj_82920638 *o)
{
    if (o->handle != -1) {
        fn_82920638(o);
    }
}
