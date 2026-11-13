typedef struct Vec_8303F198 {
    unsigned int *begin;
    unsigned int *end;
} Vec_8303F198;

typedef struct Self_8303F198 {
    char pad[0x1c];
    Vec_8303F198 vec;       /* 0x1c */
} Self_8303F198;

extern unsigned int *fn_82FF5D28(Vec_8303F198 *v);

static __forceinline int VecFind_8303F198(Vec_8303F198 *v, unsigned int val)
{
    unsigned int *it;
    for (it = v->begin; it != v->end && *it != val; ++it) {
    }
    return it != v->end ? (int)it : 0;
}

char fn_8303F198(Self_8303F198 *self, unsigned int val)
{
    unsigned int *slot;


    if (VecFind_8303F198(&self->vec, val) != 0)
        return 1;
    slot = fn_82FF5D28(&self->vec);
    if (slot != 0)
        *slot = val;
    return (slot == 0) + 1;
}
