typedef struct RefObj_8269F440 {
    int refCount;
} RefObj_8269F440;

typedef struct Def_8269F440 {
    char pad0[0x10];
    void *data;
} Def_8269F440;

typedef struct Self_8269F440 {
    char pad0[0x20];
    void *context;
    char pad24[0x80 - 0x24];
    RefObj_8269F440 *child;
    char pad84[0x8c - 0x84];
    unsigned int flags;
} Self_8269F440;

extern void *fn_8267BED0(Self_8269F440 *self, int size, int *info);
extern RefObj_8269F440 *fn_8269F1B8(void *mem, Def_8269F440 **def, void *context, Self_8269F440 *self);
extern void fn_8269F310(RefObj_8269F440 *child, Def_8269F440 **def, void *context);
extern void fn_8269A608(RefObj_8269F440 *p);
extern void fn_8267BE38(RefObj_8269F440 *p);

void fn_8269F440(Self_8269F440 *self, Def_8269F440 **def)
{
    if ((*def)->data != 0) {
        self->flags &= ~0x4000;
    }
    if ((int)self->child != 0) {
        fn_8269F310(self->child, def, self->context);
    } else {
        int info = 0x143;
        void *mem = fn_8267BED0(self, 0x14, &info);
        RefObj_8269F440 *child = mem ? fn_8269F1B8(mem, def, self->context, self) : 0;
        RefObj_8269F440 *old = self->child;
        if (old && --old->refCount <= 0) {
            fn_8269A608(old);
            fn_8267BE38(old);
        }
        self->child = child;
    }
}
