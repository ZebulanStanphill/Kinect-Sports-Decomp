/* Destroys the objects held by a range of tree nodes: deletes each node's value through
   its deleting destructor (vtable slot 0, flag 1); fn_828EA790 advances the iterator. */
typedef struct Value_828E3870 Value_828E3870;
typedef struct ValueVt_828E3870 {
    void (*destroy)(Value_828E3870 *self, int flags);
} ValueVt_828E3870;
struct Value_828E3870 {
    ValueVt_828E3870 *vt;
};

typedef struct Node_828E3870 {
    struct Node_828E3870 *left;
    struct Node_828E3870 *parent;
    struct Node_828E3870 *right;
    int key;
    Value_828E3870 *value;      /* 0x10 */
} Node_828E3870;

extern void fn_828EA790(Node_828E3870 **it);

void fn_828E3870(void *self, Node_828E3870 *first, Node_828E3870 *last)
{
    for (; first != last; fn_828EA790(&first)) {
        Value_828E3870 *v = first->value;
        if (v != 0) {
            v->vt->destroy(v, 1);
        }
    }
}
