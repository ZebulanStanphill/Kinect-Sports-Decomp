typedef struct Node_82244A90 {
    struct Node_82244A90 *left; /* 0x0 */
    struct Node_82244A90 *parent;
    struct Node_82244A90 *right;
    int key;                    /* 0xc */
    void *value;                /* 0x10 */
    char color;
    char isnil;                 /* 0x15 */
} Node_82244A90;

typedef struct Registry_82244A90 {
    char pad0[0x230];
    Node_82244A90 *head; /* 0x230 */
} Registry_82244A90;

struct Lookup_82244A90;
typedef struct LookupVt_82244A90 {
    void *pad[14];
    int (*find)(struct Lookup_82244A90 *self, void *value); /* 0x38 */
} LookupVt_82244A90;
typedef struct Lookup_82244A90 {
    LookupVt_82244A90 *vt;
} Lookup_82244A90;

typedef struct Context_82244A90 {
    char pad0[0x9c];
    Lookup_82244A90 lookup; /* 0x9c */
} Context_82244A90;

struct Owner_82244A90;
typedef struct OwnerVt_82244A90 {
    void *pad0;
    Context_82244A90 *(*getContext)(struct Owner_82244A90 *self); /* 0x4 */
} OwnerVt_82244A90;
typedef struct Owner_82244A90 {
    OwnerVt_82244A90 *vt;
    char pad4[0xc];
    Registry_82244A90 *registry; /* 0x10 */
} Owner_82244A90;

void fn_82381BC0(Node_82244A90 **it);
unsigned int fn_82A4AAA8(void *value);

unsigned char fn_82244A90(Owner_82244A90 *self, int id)
{
    unsigned char ok = 1;
    Node_82244A90 *it = self->registry->head->left;

    while (it != self->registry->head) {
        Node_82244A90 *node = it;
        switch (fn_82A4AAA8(node->value)) {
        case 0:
            ok = 0;
            break;
        case 1: {
            void *value = node->value;
            Lookup_82244A90 *lookup = &self->vt->getContext(self)->lookup;
            int found = lookup->vt->find(lookup, value);
            ok = ok && found == id;
            break;
        }
        case 2:
            break;
        default:
            ok = 0;
            break;
        }
        fn_82381BC0(&it);
    }
    return ok;
}
