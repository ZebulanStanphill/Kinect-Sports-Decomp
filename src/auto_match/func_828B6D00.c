typedef struct Ref {
    void *a;
    void *p;
} Ref;

typedef struct Entry {
    void *a;
    void *p;
} Entry;

typedef struct List {
    int f0;
    Entry *begin;
    Entry *end;
} List;

extern unsigned char fn_828B8F60(void *a, void *k);
extern unsigned char fn_828B8F68(void *a, void *k);
extern unsigned char fn_828B8F58(void *a, void *k);
extern void fn_82517978(Ref *r, void *a, void *b, int c);

Ref *fn_828B6D00(Ref *out, List *list, void *k1, void *k2, void *k3)
{
    Entry *e;

    for (e = list->begin; e != list->end; e++) {
        if (fn_828B8F60(e->a, k1) && fn_828B8F68(e->a, k2) && fn_828B8F58(e->a, k3)) {
            out->a = 0;
            out->p = 0;
            fn_82517978(out, e->a, e->p, 0);
            return out;
        }
    }
    out->a = 0;
    out->p = 0;
    return out;
}
