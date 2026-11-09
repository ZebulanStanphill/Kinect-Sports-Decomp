typedef struct Child_82BE4FB0 Child_82BE4FB0;
typedef struct VTable_82BE4FB0 { void *pad[4]; void (*method)(Child_82BE4FB0 *); } VTable_82BE4FB0;
struct Child_82BE4FB0 { VTable_82BE4FB0 *vt; };
typedef struct Obj_82BE4FB0 { int pad[2]; Child_82BE4FB0 *child; int status; } Obj_82BE4FB0;
int fn_82BE4FB0(Obj_82BE4FB0 *self)
{
    if (self->child != 0) {
        self->child->vt->method(self->child);
        return 0;
    } else {
        self->status = 400;
        return 400;
    }
}
