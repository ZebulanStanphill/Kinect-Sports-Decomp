typedef struct Obj_8242BE90 Obj_8242BE90;

typedef struct VTable_8242BE90 {
    void *slot0;
    void (*slot1)(Obj_8242BE90 *self, float f, int x);
} VTable_8242BE90;

struct Obj_8242BE90 {
    VTable_8242BE90 *vt;
};

typedef struct SharedPtr_8242BE90 {
    Obj_8242BE90 *obj;
    void *ctrl;
} SharedPtr_8242BE90;

typedef struct Elem_8242BE90 {
    int a;
    int b;
} Elem_8242BE90;

typedef struct Owner_8242BE90 {
    char pad[0x30];
    Elem_8242BE90 *begin;
    Elem_8242BE90 *end;
} Owner_8242BE90;

extern void fn_822315A0(void *ctrl);
extern SharedPtr_8242BE90 *fn_82522588(SharedPtr_8242BE90 *out, Elem_8242BE90 *elem);

void fn_8242BE90(Owner_8242BE90 *self, float f, int x)
{
    Elem_8242BE90 *it;

    for (it = self->begin; it != self->end; it++) {
        SharedPtr_8242BE90 sp;
        Obj_8242BE90 *o = fn_82522588(&sp, it)->obj;
        o->vt->slot1(o, f, x);
        if (sp.ctrl != 0) {
            fn_822315A0(sp.ctrl);
        }
    }
}
