typedef struct Obj_82520E68 Obj_82520E68;

typedef struct ObjVt_82520E68 {
    void (*f0)(Obj_82520E68 *);
    void (*f1)(Obj_82520E68 *);
    void (*f2)(Obj_82520E68 *);
    void (*f3)(Obj_82520E68 *);
    void (*f4)(Obj_82520E68 *);
} ObjVt_82520E68;

struct Obj_82520E68 {
    ObjVt_82520E68 *vt;
    int pad4;
    unsigned int state;   /* 0x08 */
};

void fn_82520E68(Obj_82520E68 *self)
{
    switch (self->state) {
    case 0:
        self->state = 4;
        break;
    case 1:
        self->state = 3;
        break;
    case 2:
        self->state = 3;
        self->vt->f4(self);
        break;
    }
}
