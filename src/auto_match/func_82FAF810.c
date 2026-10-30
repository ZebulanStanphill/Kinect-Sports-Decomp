typedef struct {
    int unk0;
    void *obj;
    char pad[0xc];
} Elem_82FAF810;

typedef struct {
    int unk0;
    Elem_82FAF810 *first;
    Elem_82FAF810 *last;
} Holder_82FAF810;

typedef struct {
    Elem_82FAF810 *first;
    Elem_82FAF810 *last;
} Vec_82FAF810;

typedef struct {
    char pad[0x9c];
    char *holder;
} Self_82FAF810;

extern void fn_82FFF990(void *p);

void fn_82FAF810(Self_82FAF810 *self)
{
    char *h = self->holder;
    if (h != 0) {
        Vec_82FAF810 *v = (Vec_82FAF810 *)(h + 4);
        Elem_82FAF810 *it;
        for (it = v->first; it != v->last; it++) {
            fn_82FFF990(it->obj);
        }
    }
}
