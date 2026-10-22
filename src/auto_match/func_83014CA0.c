typedef struct Obj Obj;
typedef struct {
    void *f0;
    void *f4;
    void (*Release)(Obj *);
    void *pad[7];
    void (*Fn28)(Obj *, int, void *, int);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };

typedef struct {
    char pad0[0x38];
    int active;
    int f3c;
    char pad40[0x10];
    int f50;
    char pad54[0xc];
    void *f60;
    char pad64[0x14];
    int f78;
} Self;

extern Obj *fn_82FAB9C0(int, void *);
extern void fn_83010288(int, int);
extern int lbl_832642E0;
extern int lbl_832642E4;

int fn_83014CA0(Self *self)
{
    Obj *o;

    if (self->active != 0) {
        self->active = 0;
        self->f78 = 0;
        fn_83010288(lbl_832642E4, self->f50);
        if (self->f60 != 0) {
            o = fn_82FAB9C0(lbl_832642E0 + 4, self->f60);
            if (o != 0) {
                o->vt->Fn28(o, self->f3c, self->f60, self->f50);
                o->vt->Release(o);
            }
        }
    }
    return 1;
}
