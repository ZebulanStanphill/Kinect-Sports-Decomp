typedef struct {
    int pad[5];
    void *handle;
} Obj_82BF2AC0;

extern int fn_82CE0AD8(void *handle, int a, int b, int c);

int fn_82BF2AC0(Obj_82BF2AC0 *o, int a, int b)
{
    int r = fn_82CE0AD8(o->handle, a, b, 0);
    if (r == -1) {
        return -1;
    }
    return r;
}
