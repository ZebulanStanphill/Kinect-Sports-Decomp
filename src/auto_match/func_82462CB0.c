typedef struct Pair { void *obj; int extra; } Pair;
typedef struct Owner { char pad[0x28]; Pair *first; Pair *last; } Owner;
extern void fn_82463780(void *obj, int arg);

void fn_82462CB0(Owner *o, int arg)
{
    Pair *it = o->first;
    Pair *end = o->last;
    for (; it != end; it++) {
        fn_82463780(it->obj, arg);
    }
}
