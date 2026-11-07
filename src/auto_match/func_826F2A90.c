typedef struct Inner_826F2A90 {
    int a;
    char b;
} Inner_826F2A90;

typedef struct Outer_826F2A90 {
    int z;
    Inner_826F2A90 v;
} Outer_826F2A90;

typedef struct Src_826F2A90 {
    int a;
    int b;
} Src_826F2A90;

extern int fn_826F2668(void *dst, Outer_826F2A90 *item);

void fn_826F2A90(char *param_1, Src_826F2A90 *param_2)
{
    Inner_826F2A90 tmp;
    Outer_826F2A90 o;

    tmp.b = (char)param_2->b;
    tmp.a = param_2->a;
    o.z = 0;
    o.v = tmp;
    fn_826F2668(param_1 + 0x24, &o);
}
