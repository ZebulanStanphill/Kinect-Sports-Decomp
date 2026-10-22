typedef struct Obj Obj;
typedef struct {
    void *pad[2];
    void (*fn8)(Obj *);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct {
    void *vtbl;
    int pad4[6];
    void *vtbl2;
    int pad20[0x22];
    Obj **begin;
    Obj **end;
    Obj **cap;
} Self;

extern void fn_82FA5190(int heap, void *p);
extern void fn_830338F0(Self *);
extern void fn_83033EA0(Self *);
extern void fn_83035CC0(Obj *, int);
extern int lbl_8217C940;
extern int lbl_8217CC20;
extern int lbl_831BC768;

void fn_830319D0(Self *self)
{
    Obj **end;
    Obj **it;

    end = self->end;
    it = self->begin;
    self->vtbl = &lbl_8217CC20;
    self->vtbl2 = &lbl_8217C940;
    for (; it != end; it++) {
        fn_83035CC0(*it, 0);
        (*it)->vtbl->fn8(*it);
    }
    if (self->begin != 0) {
        self->end = self->begin;
        fn_82FA5190(lbl_831BC768, self->begin);
        self->begin = 0;
        self->end = 0;
        self->cap = 0;
    }
    fn_83033EA0(self);
    fn_830338F0(self);
}
