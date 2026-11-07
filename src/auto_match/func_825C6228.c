typedef struct Obj_825C6228 {
    void *vtable;
    int owner;
    int pad[1003];
    int f_fb4;
    int f_fb8;
    int f_fbc;
    int f_fc0;
    int f_fc4;
    int f_fc8;
    float f_fcc;
    int f_fd0;
    int f_fd4;
    int f_fd8;
    int f_fdc;
} Obj_825C6228;

typedef struct Node_825C6228 {
    Obj_825C6228 *obj;
    struct Node_825C6228 *next;
} Node_825C6228;

typedef struct List_825C6228 {
    int f0;
    int f4;
    Node_825C6228 *head;
} List_825C6228;

extern void *fn_82522D98(unsigned int size);
extern void *fn_8265C9E0(unsigned int size);
extern char lbl_821CAD0C[];
extern float lbl_821CC160;

Obj_825C6228 *fn_825C6228(List_825C6228 *list, int param_2, int param_3)
{
    Obj_825C6228 *p;
    Obj_825C6228 *o;
    Node_825C6228 *n;
    float f;

    p = (Obj_825C6228 *)fn_8265C9E0(0xfe0);
    if (p != 0) {
        p->owner = param_3;
        p->f_fb4 = 0;
        f = lbl_821CC160;
        p->vtable = lbl_821CAD0C;
        p->f_fcc = f;
        p->f_fb8 = 0;
        p->f_fbc = 0;
        p->f_fc0 = 0;
        p->f_fc8 = 0;
        p->f_fd0 = -1;
        p->f_fd4 = 0;
        p->f_fd8 = 0;
        o = p;
    } else {
        o = 0;
    }
    n = (Node_825C6228 *)fn_82522D98(8);
    n->obj = o;
    n->next = list->head;
    list->head = n;
    return o;
}
