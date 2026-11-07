typedef struct Elem_823730C0 {
    char *obj;
    int extra;
} Elem_823730C0;

typedef struct Owner_823730C0 {
    char pad[0x184];
    Elem_823730C0 *begin;
    Elem_823730C0 *end;
} Owner_823730C0;

extern void fn_82365BD8(void *res, Elem_823730C0 *it);
extern void fn_823765C8(void *res);

void *fn_823730C0(void *res, Owner_823730C0 *o, unsigned int key)
{
    Elem_823730C0 *p;

    for (p = o->begin; p != o->end; p++) {
        if (*(unsigned int *)(p->obj + 0x217c) == key) {
            fn_82365BD8(res, p);
            return res;
        }
    }
    fn_823765C8(res);
    return res;
}
