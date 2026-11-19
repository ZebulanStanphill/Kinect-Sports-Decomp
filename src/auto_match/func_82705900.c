typedef struct Node_82705900 Node_82705900;

struct Node_82705900 {
    char pad0[8];
    int data[4];         /* 0x8 */
    Node_82705900 *next; /* 0x18 */
    unsigned char keep;  /* 0x1c */
};

typedef struct Entry_82705900 {
    void *key;            /* 0x0 */
    Node_82705900 *nodes; /* 0x4 */
} Entry_82705900;

typedef struct NodeRef_82705900 {
    void *key;             /* 0x0 */
    Node_82705900 **nodes; /* 0x4 */
} NodeRef_82705900;

typedef struct Visitor_82705900 Visitor_82705900;

typedef struct VisitorVt_82705900 {
    void *slots[3];
    void (*Visit)(Visitor_82705900 *self, int time, Node_82705900 *node, int *data,
                  unsigned char *result); /* 0xc */
} VisitorVt_82705900;

struct Visitor_82705900 {
    VisitorVt_82705900 *vt;
};

typedef struct Target_82705900 Target_82705900;

typedef struct TargetVt_82705900 {
    void *slots[23];
    int (*GetTime)(Target_82705900 *self); /* 0x5c */
} TargetVt_82705900;

typedef struct Inner_82705900 {
    char pad0[0xc];
    char key[4]; /* 0xc */
} Inner_82705900;

struct Target_82705900 {
    TargetVt_82705900 *vt; /* 0x0 */
    char pad4[0x68 - 4];
    Visitor_82705900 visitor; /* 0x68 */
    char pad6c[0x80 - 0x6c];
    Inner_82705900 *inner; /* 0x80 */
};

typedef struct Owner_82705900 {
    char pad0[0xa28];
    char map[4]; /* 0xa28 */
} Owner_82705900;

extern Inner_82705900 *fn_8269F500(Target_82705900 *target);
extern Entry_82705900 *fn_8269DA30(void *map, void *key);
extern void fn_826F7940(Node_82705900 *node, int flag);
extern void fn_826FDB30(void *map, void *key);
extern void fn_82704298(void *map, void *where, NodeRef_82705900 *ref);

static __forceinline unsigned char Find(void *map, void *key, Node_82705900 **nodes)
{
    Entry_82705900 *entry = fn_8269DA30(map, key);

    if (entry != 0) {
        *nodes = entry->nodes;
        return 1;
    }
    return 0;
}

static __forceinline Inner_82705900 *GetInner(Target_82705900 *target)
{
    if ((int)target->inner != 0) {
        return target->inner;
    }
    return fn_8269F500(target);
}

void fn_82705900(Owner_82705900 *self, Target_82705900 *target)
{
    void *key = GetInner(target)->key;
    void *map = self->map;
    Node_82705900 *head = 0;
    Node_82705900 *first;
    Node_82705900 *last;
    Node_82705900 *node;
    Node_82705900 *next;
    NodeRef_82705900 ref;
    unsigned char result;

    if (Find(map, key, &head)) {
        last = 0;
        first = 0;
        for (node = head; node != 0; node = next) {
            result = 0;
            target->visitor.vt->Visit(&target->visitor, target->vt->GetTime(target), node, node->data,
                                      &result);
            next = node->next;
            if (node->keep) {
                if (first == 0) {
                    first = node;
                } else {
                    last->next = node;
                }
                last = node;
                node->next = 0;
            } else {
                fn_826F7940(node, 1);
            }
        }
        if (first != 0) {
            if (first != head) {
                ref.key = key;
                ref.nodes = &first;
                fn_82704298(map, map, &ref);
            }
        } else {
            fn_826FDB30(map, key);
        }
    }
}
