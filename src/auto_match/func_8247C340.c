extern char lbl_821BD50C[];
extern char lbl_821BE838[];
extern void fn_8251FA58(void *p);
extern void fn_822848B8(void *p);
extern void fn_82359C18(void *f);

typedef struct Deletable_8247C340 Deletable_8247C340;
typedef struct DeletableVtbl_8247C340 {
    void (*destroy)(Deletable_8247C340 *self, int flags);
} DeletableVtbl_8247C340;
struct Deletable_8247C340 {
    DeletableVtbl_8247C340 *vt;
};

typedef struct Sub_8247C340 {
    char pad0[0x14];
    Deletable_8247C340 *obj;
    char pad18[0x58 - 0x18];
    unsigned char func[0x18];
    char pad70[4];
    void *p74;
} Sub_8247C340;

typedef struct Obj_8247C340 {
    void *vt;
    char pad4[0xc];
    Sub_8247C340 sub;
    char pad88[0xa4 - 0x88];
    void *pa4;
} Obj_8247C340;

void fn_8247C340(Obj_8247C340 *self)
{
    Sub_8247C340 *s;
    self->vt = lbl_821BD50C;
    if (self->pa4 != 0) {
        fn_8251FA58(self->pa4);
        self->pa4 = 0;
    }
    s = &self->sub;
    if (s->p74 != 0) {
        fn_822848B8(s->p74);
        s->p74 = 0;
    }
    if (s->obj != 0) {
        s->obj->vt->destroy(s->obj, 1);
    }
    fn_82359C18(s->func);
    self->vt = lbl_821BE838;
}
