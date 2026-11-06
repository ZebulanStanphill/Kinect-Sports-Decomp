typedef struct Vec_828BFAB8 {
    void *first;
    void *last;
    void *end;
    unsigned char alloc;
} Vec_828BFAB8;

typedef struct Obj_828BFAB8 {
    void *vtbl;
    int pad04[0x13];
    void *vtbl2;
    int pad54[0xd];
    Vec_828BFAB8 vec;
} Obj_828BFAB8;

extern void fn_8265CA20(void *p);
extern void fn_828BDE70(Obj_828BFAB8 *p);
extern void fn_828BF248(void *first, void *last, unsigned char *alloc, unsigned char tag);
extern char lbl_82025CC8[];
extern char lbl_82025CD0[];

void fn_828BFAB8(Obj_828BFAB8 *self)
{
    Vec_828BFAB8 *v;
    unsigned char tag;

    self->vtbl = lbl_82025CD0;
    v = &self->vec;
    self->vtbl2 = lbl_82025CC8;
    if (v->first != 0) {
        fn_828BF248(v->first, v->last, &v->alloc, tag);
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
    fn_828BDE70(self);
}
