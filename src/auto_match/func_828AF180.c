void *memmove(void *, const void *, unsigned int);


typedef struct Vec_828AF180 {
    int *first;
    int *last;
} Vec_828AF180;

typedef struct Obj_828AF180 {
    char pad[0x258];
    Vec_828AF180 vec;
} Obj_828AF180;

static __forceinline void Erase_828AF180(Vec_828AF180 *v, int *where)
{
    int *next = where + 1;
    memmove(where, next, (v->last - next) * sizeof(int));
    v->last--;
}

void fn_828AF180(Obj_828AF180 *o, int value)
{
    int *end = o->vec.last;
    int *p;
    for (p = o->vec.first; p != end; p++) {
        if (value == *p) {
            Erase_828AF180(&o->vec, p);
            return;
        }
    }
}
