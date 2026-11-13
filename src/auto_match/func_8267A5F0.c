// Asks the object's own key (vtable slot 7), then whether any of its children (one child or a
// list of them, see func_8267A6B8) accepts it.
typedef struct Child_8267A5F0 Child_8267A5F0;
typedef struct ChildVtbl_8267A5F0 {
    void *f0;
    void *f4;
    unsigned char (*accepts)(Child_8267A5F0 *self, void *key);
} ChildVtbl_8267A5F0;
struct Child_8267A5F0 { ChildVtbl_8267A5F0 *vt; };

typedef struct List_8267A5F0 {
    Child_8267A5F0 **items;
    unsigned int count;
} List_8267A5F0;

typedef struct Node_8267A5F0 Node_8267A5F0;
typedef struct NodeVtbl_8267A5F0 {
    void *f[7];
    void *(*getKey)(Node_8267A5F0 *self);
} NodeVtbl_8267A5F0;

struct Node_8267A5F0 {
    NodeVtbl_8267A5F0 *vt;
    char pad4[0x10];
    unsigned char isList;   /* 0x14 */
    void *p;                /* 0x18 */
};

#define LIST(s) ((List_8267A5F0 *)(s)->p)
#define ONE(s) ((Child_8267A5F0 *)(s)->p)
int fn_8267A5F0(Node_8267A5F0 *self)
{
    void *key = self->vt->getKey(self);
    if (self->isList) {
        unsigned int i;
        for (i = 0; i < LIST(self)->count; i++) {
            Child_8267A5F0 *c = LIST(self)->items[i];
            if (c->vt->accepts(c, key))
                return 1;
        }
    } else if (ONE(self) != 0) {
        if (ONE(self)->vt->accepts(ONE(self), key))
            return 1;
    }
    return 0;
}
