typedef struct { unsigned *begin; unsigned *end; } Rng_8303E6E8;
typedef struct { void *vt; Rng_8303E6E8 ids; } Obj_8303E6E8;

static __forceinline unsigned *find(Rng_8303E6E8 *r, unsigned v)
{
    unsigned *p = r->begin;
    while (p != r->end && *p != v) {
        p++;
    }
    return p;
}

int fn_8303E6E8(Obj_8303E6E8 *o, unsigned v, unsigned short *out)
{
    unsigned *p = find(&o->ids, v);
    if (p != o->ids.end) {
        *out = (unsigned short)(p - o->ids.begin);
        return 1;
    }
    return 0;
}
