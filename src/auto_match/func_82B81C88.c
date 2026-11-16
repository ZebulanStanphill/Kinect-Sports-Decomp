typedef struct Node_82B81C88 Node_82B81C88;

struct Node_82B81C88 {
    unsigned int flags;
    Node_82B81C88 *first; /* 0x4 */
    unsigned int type;    /* 0x8 */
    Node_82B81C88 *value; /* 0xc */
    void *data;           /* 0x10 */
    char padding[0x18];
    Node_82B81C88 *arguments[8]; /* 0x2c */
};

extern unsigned char fn_82ABE190(Node_82B81C88 *);

static __forceinline int hasNode(Node_82B81C88 *node)
{
    if (node != 0) {
        return 1;
    }
    return 0;
}

static __forceinline int hasIndex(unsigned int index, unsigned int count)
{
    if (index < count) {
        return 1;
    }
    return 0;
}

int fn_82B81C88(void *unused, Node_82B81C88 *self)
{
    Node_82B81C88 *node = self->first;
    int result = 0;
    while (hasNode(node)) {
        if (node->data != 0 && fn_82ABE190(node) != 0) {
            result = -1;
            break;
        }
        node = (Node_82B81C88 *)node->type;
    }
    if ((self->type & 0x3f80) == 0x3700) {
        result = 0;
    } else {
        Node_82B81C88 **arguments = self->arguments;
        unsigned int i = 0;
        unsigned int count = (self->type >> 19) & 7;
        for (; hasIndex(i, count); i++) {
            Node_82B81C88 *argument = arguments[i];
            if (fn_82ABE190(argument) != 0 && (argument->value->type & 0x3f80) != 0x3e00) {
                unsigned int j;
                Node_82B81C88 *first;
                for (j = 0; hasIndex(j, count); j++) {
                    first = arguments[j];
                    if (first == argument) {
                        goto unique;
                    }
                    if (first->value == argument->value) {
                        goto compare;
                    }
                }
                first = 0;
            compare:
                if (first == argument) {
                unique:
                    result++;
                }
            }
        }
    }
    return result;
}
