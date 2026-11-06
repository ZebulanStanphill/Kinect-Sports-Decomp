typedef struct Stream_823292D0 Stream_823292D0;

typedef struct Ref_823292D0 {
    Stream_823292D0 *ptr;
    void *ctrl;
} Ref_823292D0;

typedef struct Field_823292D0 Field_823292D0;
typedef struct FieldVtbl_823292D0 {
    void *slot[4];
    void (*Write)(Field_823292D0 *self, Stream_823292D0 *s, void *value);
} FieldVtbl_823292D0;
struct Field_823292D0 {
    FieldVtbl_823292D0 *vt;
};

typedef struct FieldRef_823292D0 {
    Field_823292D0 *ptr;
    void *ctrl;
} FieldRef_823292D0;

typedef struct Obj_823292D0 {
    int pad00[0xe];
    int field38[4];
    void *field48;
    int pad4c[7];
    FieldRef_823292D0 fields[8];
} Obj_823292D0;

extern void fn_822315A0(void *ctrl);
extern void fn_82256048(Obj_823292D0 *self, Stream_823292D0 *s, int *p);
extern void fn_822D79D8(Ref_823292D0 *ref, Stream_823292D0 *s);
extern Stream_823292D0 *fn_822D7FE0(void *mem);
extern void *fn_8265C9E0(int size);
extern void fn_828B55B0(void *value);
extern void fn_828E2B28(Obj_823292D0 *self, Ref_823292D0 *ref);
extern int fn_828E9D40(Stream_823292D0 *s);
extern int fn_828E9D90(Stream_823292D0 *s);

void fn_823292D0(Obj_823292D0 *self, int a, int b, int c, int d, void *e, int f, float g, int h)
{
    void *mem = fn_8265C9E0(0x28);
    Stream_823292D0 *s;
    Ref_823292D0 ref;

    if (mem != 0) {
        s = fn_822D7FE0(mem);
    } else {
        s = 0;
    }
    ref.ptr = 0;
    ref.ctrl = 0;
    fn_822D79D8(&ref, s);
    self->fields[0].ptr->vt->Write(self->fields[0].ptr, ref.ptr, &a);
    self->fields[1].ptr->vt->Write(self->fields[1].ptr, ref.ptr, &b);
    self->fields[2].ptr->vt->Write(self->fields[2].ptr, ref.ptr, &c);
    self->fields[3].ptr->vt->Write(self->fields[3].ptr, ref.ptr, &d);
    self->fields[4].ptr->vt->Write(self->fields[4].ptr, ref.ptr, e);
    self->fields[5].ptr->vt->Write(self->fields[5].ptr, ref.ptr, &f);
    self->fields[6].ptr->vt->Write(self->fields[6].ptr, ref.ptr, &g);
    self->fields[7].ptr->vt->Write(self->fields[7].ptr, ref.ptr, &h);
    if (self->field48 != 0) {
        fn_828E9D90(ref.ptr);
        fn_828E9D40(ref.ptr);
        fn_82256048(self, ref.ptr, self->field38);
    }
    fn_828E2B28(self, &ref);
    if (ref.ctrl != 0) {
        fn_822315A0(ref.ctrl);
    }
    fn_828B55B0(e);
}
