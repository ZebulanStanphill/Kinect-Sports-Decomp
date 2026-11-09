typedef struct Obj_828821A0 {
    unsigned char b0, b1, b2, b3, b4, b5, b6, b7;
} Obj_828821A0;

typedef struct Node_828821A0 {
    struct Node_828821A0 *left;
    struct Node_828821A0 *parent;
    struct Node_828821A0 *right;
    unsigned int key;
    Obj_828821A0 *value;
} Node_828821A0;

typedef struct Tree_828821A0 {
    int pad;
    Node_828821A0 *head;
} Tree_828821A0;

extern Tree_828821A0 lbl_83212A00;
extern void fn_8289F160(Node_828821A0 **out, Tree_828821A0 *t, unsigned int *key);

static Obj_828821A0 *find_828821A0(unsigned int id)
{
    unsigned int key;
    Node_828821A0 *it;

    key = id;
    fn_8289F160(&it, &lbl_83212A00, &key);
    if (it != lbl_83212A00.head) {
        return it->value;
    }
    return 0;
}

unsigned char fn_828821A0(unsigned int param_1)
{
    return find_828821A0(param_1)->b6;
}
