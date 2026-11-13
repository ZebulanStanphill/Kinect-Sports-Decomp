typedef struct Iface_8269A458 Iface_8269A458;
typedef struct IfaceVtbl_8269A458 {
    void *slots[2];
    int (*getKind)(Iface_8269A458 *self);   /* 0x08 */
} IfaceVtbl_8269A458;
struct Iface_8269A458 { IfaceVtbl_8269A458 *vt; };

typedef struct Target_8269A458 Target_8269A458;
typedef struct TargetVtbl_8269A458 {
    void *slots[0x5c / 4];
    int (*f5c)(Target_8269A458 *self);       /* 0x5c */
} TargetVtbl_8269A458;
struct Target_8269A458 { TargetVtbl_8269A458 *vt; };

typedef struct Node_8269A458 {
    char pad0[0x20];
    struct Node_8269A458 *next;   /* 0x20 */
    char pad24[0x68 - 0x24];
    Iface_8269A458 iface;         /* 0x68 */
} Node_8269A458;

extern Target_8269A458 *fn_826BD928(Iface_8269A458 *iface);

int fn_8269A458(Node_8269A458 *self)
{
    Node_8269A458 *n;
    Target_8269A458 *t;

    for (n = self->next; n != 0; n = n->next) {
        if (n->iface.vt->getKind(&n->iface) == 2)
            break;
    }
    if (n == 0)
        return 0;
    t = fn_826BD928(&n->iface);
    return t->vt->f5c(t);
}
