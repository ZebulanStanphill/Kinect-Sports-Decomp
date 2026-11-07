typedef struct Node_82FB6FE8 {
    int pad0;
    struct Node_82FB6FE8 *next;
    int pad8;
    int padC;
    unsigned char flag;
} Node_82FB6FE8;

typedef struct Obj_82FB6FE8 Obj_82FB6FE8;

typedef struct {
    unsigned int (*fn0)(Obj_82FB6FE8 *self, void *out);
} Vtbl_82FB6FE8;

struct Obj_82FB6FE8 {
    Vtbl_82FB6FE8 *vt;
    int pad4;
    int pad8;
    int padC;
    int pad10;
    Node_82FB6FE8 *cur;
};

void fn_82FB6FE8(Obj_82FB6FE8 *param_1, Node_82FB6FE8 **param_2, int param_3)
{
    Node_82FB6FE8 *node;
    unsigned int count;
    unsigned int limit;
    unsigned char buf[1];

    node = *param_2;
    count = 0;
    limit = (param_3 > 0) + 2;
    while (count < limit) {
        if (node == 0) {
            return;
        }
        if (node->flag != 0) {
            if (node == param_1->cur && param_1->vt->fn0(param_1, buf) == 0) {
                return;
            }
            count++;
        }
        node = node->next;
    }
}
