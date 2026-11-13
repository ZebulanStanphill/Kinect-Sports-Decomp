typedef struct Obj_824F6158 Obj_824F6158;
typedef struct Vtbl_824F6158 {
    void (*update)(Obj_824F6158 *self, float t, void *arg);
} Vtbl_824F6158;
struct Obj_824F6158 {
    Vtbl_824F6158 *vt;
};
typedef struct Node_824F6158 {
    Obj_824F6158 *obj;
    struct Node_824F6158 *next;
} Node_824F6158;
typedef struct Owner_824F6158 {
    int pad[3];
    Node_824F6158 *head;
} Owner_824F6158;

void fn_824F6158(Owner_824F6158 *self, float t, void *arg)
{
    Node_824F6158 *n;
    for (n = self->head; n != 0; n = n->next) {
        if (n->obj != 0)
            n->obj->vt->update(n->obj, t, arg);
    }
}
