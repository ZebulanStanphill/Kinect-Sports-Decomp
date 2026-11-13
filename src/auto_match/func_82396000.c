typedef struct Name_82396000 {
    int v[4];
} Name_82396000;

typedef struct Owner_82396000 {
    char pad0[0x178];
    int f178;
    char pad17c[0x1a0 - 0x17c];
    char f1a0[4];
} Owner_82396000;

typedef struct Ptr_82396000 {
    void *p;
} Ptr_82396000;

extern void fn_82520158(const char *name, Name_82396000 *out, int flags);
extern void *fn_8265C9E0(int size);
extern int fn_82397F30(Owner_82396000 *self);
extern int fn_82397F88(Owner_82396000 *self);
extern void *fn_822A08D0(void *mem, Owner_82396000 *owner, void *a, Name_82396000 *name, int b, int c, int d);

Ptr_82396000 *fn_82396000(Ptr_82396000 *out, Owner_82396000 *self)
{
    Name_82396000 name;
    int v;
    void *mem;

    fn_82520158("ui_handiconmanager", &name, 0);
    v = self->f178;
    mem = fn_8265C9E0(0xd8);
    out->p = mem != 0 ? fn_822A08D0(mem, self, self->f1a0, &name, v, fn_82397F88(self), fn_82397F30(self)) : 0;
    return out;
}
