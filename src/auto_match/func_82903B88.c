typedef struct Value_82903B88 {
    int unused;
} Value_82903B88;

typedef struct Node_82903B88 Node_82903B88;

struct Node_82903B88 {
    int pad0;
    int kind;                                                           /* 0x04 */
    union {
        struct { Node_82903B88 *first; Node_82903B88 *second; } pair;  /* kind 1 */
        struct { char pad[8]; Value_82903B88 value; } leaf;             /* kind 3: 0x10 */
        struct { char pad[0xc]; Node_82903B88 *target; } ref;           /* kind 6: 0x14 */
        struct { char pad[0xc]; Node_82903B88 *args[4]; } call;         /* kind 12: 0x14..0x20 */
        struct { char pad[0x28]; Value_82903B88 value; } decl;          /* kind 14: 0x30 */
    } u;
};

Value_82903B88 *fn_82903B88(Node_82903B88 *node)
{
    Value_82903B88 *found;

    if (node != 0) {
        switch (node->kind) {
        case 1:
            if ((found = fn_82903B88(node->u.pair.first)) != 0)
                return found;
            if ((found = fn_82903B88(node->u.pair.second)) != 0)
                return found;
            break;
        case 3:
            return &node->u.leaf.value;
        case 6:
            if (node->u.ref.target != 0)
                return &node->u.ref.target->u.leaf.value;
            break;
        case 11:
            return 0;
        case 12:
            if ((found = fn_82903B88(node->u.call.args[0])) != 0)
                return found;
            if ((found = fn_82903B88(node->u.call.args[1])) != 0)
                return found;
            if ((found = fn_82903B88(node->u.call.args[2])) != 0)
                return found;
            if ((found = fn_82903B88(node->u.call.args[3])) != 0)
                return found;
            break;
        case 14:
            return &node->u.decl.value;
        }
    }
    return 0;
}
