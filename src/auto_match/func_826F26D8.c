typedef struct { int key; int a; int b; } E;
extern E *fn_826F1B20(void *p, int key);

int fn_826F26D8(void *p, int key, int *out)
{
    E *e = fn_826F1B20(p, key);
    if (e) {
        if (out) {
            out[0] = e->a;
            out[1] = e->b;
        }
        return 1;
    }
    return 0;
}
