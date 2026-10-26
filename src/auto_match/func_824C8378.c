typedef struct Obj { char pad[0x28]; void *h; } Obj;
typedef struct Pair { Obj *obj; int extra; } Pair;
typedef struct Vec { Pair *first; Pair *last; } Vec;
extern void fn_824C97F0(void *h, int arg);

void fn_824C8378(Vec *v, int arg)
{
    Pair *it = v->first;
    Pair *end = v->last;
    for (; it != end; it++) {
        fn_824C97F0(it->obj->h, arg);
    }
}
