typedef struct Inner_82DAF6A0 {
    int f0;
    int f4;
    void *obj;
} Inner_82DAF6A0;

typedef struct Arg_82DAF6A0 {
    char pad[0x14];
    Inner_82DAF6A0 *inner;
} Arg_82DAF6A0;

extern void fn_82D8EA98(void *obj);

void fn_82DAF6A0(void *self, Arg_82DAF6A0 *arg)
{
    fn_82D8EA98(arg->inner->obj);
}
