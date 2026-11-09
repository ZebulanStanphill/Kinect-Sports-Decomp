typedef struct Obj_82882218 {
    unsigned char b0, b1, b2, b3, b4, b5, b6, b7;
} Obj_82882218;

typedef struct Node_82882218 {
    struct Node_82882218 *left;
    struct Node_82882218 *parent;
    struct Node_82882218 *right;
    unsigned int key;
    Obj_82882218 *value;
} Node_82882218;

typedef struct Tree_82882218 {
    int pad;
    Node_82882218 *head;
} Tree_82882218;

extern Tree_82882218 lbl_83212A00;
extern void fn_8289F160(Node_82882218 **out, Tree_82882218 *t, unsigned int *key);

static Obj_82882218 *find_82882218(unsigned int id)
{
    unsigned int key;
    Node_82882218 *it;

    key = id;
    fn_8289F160(&it, &lbl_83212A00, &key);
    if (it != lbl_83212A00.head) {
        return it->value;
    }
    return 0;
}

unsigned char fn_82882218(unsigned int param_1)
{
    return find_82882218(param_1)->b5;
}
