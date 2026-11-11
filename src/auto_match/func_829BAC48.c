extern int fn_82F67988(void *stream);

typedef struct {
    int f0;
    int f4;
    int f8;
    void *stream;
} Obj_829BAC48;

int fn_829BAC48(void *self, Obj_829BAC48 *o)
{
    return fn_82F67988(o->stream);
}
