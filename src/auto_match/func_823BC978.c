typedef struct Shared_823BC978 {
    void *object;
    void *references;
} Shared_823BC978;

typedef struct Value_823BC978 {
    int key;
    Shared_823BC978 shared;
} Value_823BC978;

typedef struct Node_823BC978 {
    struct Node_823BC978 *left;
    struct Node_823BC978 *parent;
    struct Node_823BC978 *right;
    Value_823BC978 value;
    unsigned char color;
    unsigned char nil;
} Node_823BC978;
typedef struct Predicate_823BC978 Predicate_823BC978;

typedef struct Vtable_823BC978 {
    void *unused;
    unsigned char (*test)(Predicate_823BC978 *, Value_823BC978 *);
    void *unused8;
    void (*destroy)(Predicate_823BC978 *, int);
} Vtable_823BC978;

struct Predicate_823BC978 {
    Vtable_823BC978 *vtable;
};

typedef struct Function_823BC978 {
    char storage[16];
    Predicate_823BC978 *target;
} Function_823BC978;

extern Shared_823BC978 *fn_82365BD8(Shared_823BC978 *, Shared_823BC978 *);
extern void fn_822315A0(void *);
extern __declspec(noreturn) void fn_82F63108(void);

Node_823BC978 **fn_823BC978(Node_823BC978 **out, Node_823BC978 *node, Node_823BC978 *end,
                            Function_823BC978 *predicate)
{
    Predicate_823BC978 *target;
    while (node != end) {
        Value_823BC978 value;
        unsigned char found;
        Value_823BC978 *entry = &node->value;
        value.key = entry->key;
        fn_82365BD8(&value.shared, &entry->shared);
        if (predicate->target == 0) {
            fn_82F63108();
        }
        found = predicate->target->vtable->test(predicate->target, &value);
        if (value.shared.references != 0) {
            fn_822315A0(value.shared.references);
        }
        if (found) {
            break;
        }
        if (!node->nil) {
            Node_823BC978 *next = node->right;
            if (!next->nil) {
                while (!next->left->nil) {
                    next = next->left;
                }
                node = next;
            } else {
                next = node->parent;
                while (!next->nil && node == next->right) {
                    node = next;
                    next = next->parent;
                }
                node = next;
            }
        }
    }
    target = predicate->target;
    *out = node;
    if (target != 0) {
        target->vtable->destroy(target, (void *)target != (void *)predicate);
        predicate->target = 0;
    }
    return out;
}
