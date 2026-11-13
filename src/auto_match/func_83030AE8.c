extern unsigned int *fn_83031708(unsigned int **self, unsigned int key);

typedef struct {
    char pad[0xc4];
    unsigned int *map;
} Obj_83030AE8;

static unsigned int *find(unsigned int **self, unsigned int key)
{
    unsigned int *p = *self;
    while (p) {
        if (p[1] == key)
            return p + 2;
        p = (unsigned int *)p[0];
    }
    return 0;
}

int fn_83030AE8(Obj_83030AE8 *o, unsigned int key)
{
    int r = 1;
    unsigned int **m = &o->map;
    unsigned int *v = find(m, key);
    if (v == 0) {
        v = fn_83031708(m, key);
        if (v == 0)
            r = 2;
    }
    return r;
}
