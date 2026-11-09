typedef struct Child_82BE5000 Child_82BE5000;
typedef struct VTable_82BE5000 { void *pad[5]; void (*method)(Child_82BE5000 *); } VTable_82BE5000;
struct Child_82BE5000 { VTable_82BE5000 *vt; };
typedef struct Obj_82BE5000 { int pad[2]; Child_82BE5000 *child; int status; } Obj_82BE5000;
int fn_82BE5000(Obj_82BE5000 *self)
{
    if (self->child != 0) {
        self->child->vt->method(self->child);
        return 0;
    } else {
        self->status = 400;
        return 400;
    }
}
