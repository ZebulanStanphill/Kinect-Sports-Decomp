typedef struct Item_82FB0E40 {
    unsigned int w[10];
} Item_82FB0E40;

typedef struct Vec_82FB0E40 {
    void *begin;
    void *end;
    void *cap;
} Vec_82FB0E40;

typedef struct Obj_82FB0E40 {
    unsigned char pad[0x94];
    unsigned int mode;
    Vec_82FB0E40 vec;
} Obj_82FB0E40;

extern void fn_82FA5190(unsigned int heap, void *ptr);
extern void fn_82FB0C10(Obj_82FB0E40 *self, Item_82FB0E40 *item);
extern int fn_82FB1A08(Vec_82FB0E40 *vec, unsigned int count);
extern unsigned int lbl_831BC768;

int fn_82FB0E40(Obj_82FB0E40 *self, unsigned int count, Item_82FB0E40 *items, unsigned int mode)
{
    Vec_82FB0E40 *v = &self->vec;
    unsigned int i;

    if (v->begin != 0) {
        v->end = v->begin;
        fn_82FA5190(lbl_831BC768, v->begin);
        v->begin = 0;
        v->end = 0;
        v->cap = 0;
    }
    self->mode = mode;
    if (fn_82FB1A08(v, count) != 1) {
        return 2;
    }
    for (i = 0; i < count; i++) {
        fn_82FB0C10(self, &items[i]);
    }
    return 1;
}
