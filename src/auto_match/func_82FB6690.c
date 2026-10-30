typedef struct { char pad[0x34]; } Item;
typedef struct { Item *first; Item *last; } Vec;
typedef struct { char pad[0xa0]; Vec v; } Obj;
extern void fn_82FAF810(void *);
extern void fn_82FFF990(int *);
void fn_82FB6690(Obj *o)
{
    Vec *v;
    unsigned int i = 0;
    int off;
    v = &o->v;
    {
    Item *f0 = v->first;
    Item *l0 = v->last;
    if (l0 - f0 != 0) {
        off = 0;
        do {
            int **q = *(int ***)(off + (int)o->v.first + 0x30);
            if (q != 0)
                fn_82FFF990(*q);
            i++;
            off += 0x34;
        } while (i < (unsigned int)(v->last - v->first));
    }
    }
    fn_82FAF810(o);
}
