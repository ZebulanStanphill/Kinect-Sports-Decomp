typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f0[5];
    void (*fn14)(Obj *, int, int);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
};
typedef struct Owner {
    char pad[0x68];
    Obj *o68; int p6c;
    Obj *o70; int p74;
    Obj *o78; int p7c;
    Obj *o80; int p84;
    Obj *o88; int p8c;
    Obj *o90; int p94;
    Obj *o98; int p9c;
    Obj *oa0;
} Owner;
extern int fn_828E9D60(int, int);
extern int fn_828E9D90(int);

int fn_82234668(Owner *self, int arg)
{
    int start;
    int end;

    start = fn_828E9D90(arg);
    self->o68->vt->fn14(self->o68, arg, 0);
    self->o70->vt->fn14(self->o70, arg, 0);
    self->o78->vt->fn14(self->o78, arg, 0);
    self->o80->vt->fn14(self->o80, arg, 0);
    self->o88->vt->fn14(self->o88, arg, 0);
    self->o90->vt->fn14(self->o90, arg, 0);
    self->o98->vt->fn14(self->o98, arg, 0);
    self->oa0->vt->fn14(self->oa0, arg, 0);
    end = fn_828E9D90(arg);
    end = end - start;
    fn_828E9D60(arg, start);
    return end;
}
