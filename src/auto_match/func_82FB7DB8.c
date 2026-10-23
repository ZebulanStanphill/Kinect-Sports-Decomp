typedef struct VObj VObj;
typedef struct VObjVtbl {
    void (*dtor)(VObj *self, int flags);
    void (*release)(VObj *self);
} VObjVtbl;
struct VObj {
    VObjVtbl *vtbl;
};
typedef struct Owner {
    void *vtbl;
    int pad04[3];
    VObj **first;
    VObj **last;
    VObj **end;
    int pad1c;
    VObj *ref;
} Owner;
extern void fn_82FA5190(void *heap, void *p);
extern char lbl_8216D5A4[];
extern char lbl_8217D040[];
extern void *lbl_831BC768;

void fn_82FB7DB8(Owner *o)
{
    VObj **it;
    o->vtbl = lbl_8216D5A4;
    if (o->ref != 0) {
        o->ref->vtbl->release(o->ref);
        o->ref = 0;
    }
    for (it = o->first; it != o->last; it++) {
        VObj *e = *it;
        if (e != 0) {
            void *heap = lbl_831BC768;
            e->vtbl->dtor(e, 0);
            fn_82FA5190(heap, e);
        }
    }
    if (o->first != 0) {
        o->last = o->first;
        fn_82FA5190(lbl_831BC768, o->first);
        o->first = 0;
        o->last = 0;
        o->end = 0;
    }
    o->vtbl = lbl_8217D040;
}
