extern char lbl_821ACB04[];
extern void fn_8251FA58(void *p);
extern void fn_8265CA20(void *p);
extern void fn_82359C18(void *f);
extern void fn_822B5CE8(void *self);

typedef struct Vec_822BA578 { void *first, *last, *end; } Vec_822BA578;
typedef struct Sub_822BA578 {
    unsigned char func[0x60];
    Vec_822BA578 vec;
} Sub_822BA578;
typedef struct Obj_822BA578 {
    void *vt;
    char pad4[0x220];
    void *p224;
    int pad228;
    void *p22c;
    void *p230;
    char pad234[0x318 - 0x234];
    Sub_822BA578 sub;
} Obj_822BA578;

void fn_822BA578(Obj_822BA578 *self)
{
    Sub_822BA578 *s;
    self->vt = lbl_821ACB04;
    if (self->p224 != 0) {
        fn_8251FA58(self->p224);
        self->p224 = 0;
    }
    if (self->p22c != 0) {
        fn_8251FA58(self->p22c);
        self->p22c = 0;
    }
    if (self->p230 != 0) {
        fn_8251FA58(self->p230);
        self->p230 = 0;
    }
    s = &self->sub;
    if (s->vec.first != 0) {
        fn_8265CA20(s->vec.first);
    }
    s->vec.first = 0;
    s->vec.last = 0;
    s->vec.end = 0;
    fn_82359C18(s);
    fn_822B5CE8(self);
}
