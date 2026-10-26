typedef struct Pair { void *obj; int extra; } Pair;
typedef struct Vec { Pair *first; Pair *last; } Vec;
typedef struct Owner { char pad[0x28]; Vec v; char pad2[8]; unsigned char flag; } Owner;
extern void fn_82282350(void *obj);

void fn_82462768(Owner *o)
{
    Vec *v = &o->v;
    Pair *it = v->first;
    Pair *end = v->last;
    for (; it != end; it++) {
        fn_82282350(it->obj);
    }
    o->flag = 1;
}
