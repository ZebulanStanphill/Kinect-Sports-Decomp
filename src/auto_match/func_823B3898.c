typedef struct {
    int key;
    void *ptr;
    void *rep;
} Elem;

typedef struct {
    char pad[0xc];
    Elem *first;
    Elem *last;
    Elem *end;
} Owner;

extern void fn_822315A0(void *rep);
extern void fn_8265CA20(void *p);

void fn_823B3898(Owner *o)
{
    Elem *it;
    Elem *last;
    void **rep;

    it = o->first;
    if (it != 0) {
        last = o->last;
        if (it != last) {
            rep = &it->rep;
            do {
                if (*rep != 0) {
                    fn_822315A0(*rep);
                }
                it++;
                rep += 3;
            } while (it != last);
        }
        fn_8265CA20(o->first);
    }
    o->first = 0;
    o->last = 0;
    o->end = 0;
}
