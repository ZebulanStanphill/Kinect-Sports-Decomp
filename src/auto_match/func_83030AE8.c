typedef unsigned int uint;
extern uint *fn_83031708(uint **self, uint key);

typedef struct {
    char pad[0xc4];
    uint *map;
} Obj_83030AE8;

static uint *find(uint **self, uint key)
{
    uint *p = *self;
    while (p) {
        if (p[1] == key)
            return p + 2;
        p = (uint *)p[0];
    }
    return 0;
}

int fn_83030AE8(Obj_83030AE8 *o, uint key)
{
    int r = 1;
    uint **m = &o->map;
    uint *v = find(m, key);
    if (v == 0) {
        v = fn_83031708(m, key);
        if (v == 0)
            r = 2;
    }
    return r;
}
