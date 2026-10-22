typedef struct Obj Obj;
typedef struct ObjVt {
    void *f0[5];
    void (*get)(Obj *o, int k, void *out);
} ObjVt;
struct Obj { ObjVt *vt; };

typedef struct B28 { unsigned char b[0x1c]; } B28;

typedef struct Self {
    int pad0;
    int pad4;
    char *a;
    char *b;
    Obj *o1;
    int pad14;
    Obj *o2;
} Self;

void fn_823F95D0(Self *self, int param_2, unsigned int param_3)
{
    int s50[4];
    B28 s40;

    self->o1->vt->get(self->o1, param_2, s50);
    self->o2->vt->get(self->o2, param_2, &s40);
    if (param_3 != 0) {
        *(int *)(self->a + param_3) = s50[0];
        *(B28 *)(self->b + param_3) = s40;
    }
}
