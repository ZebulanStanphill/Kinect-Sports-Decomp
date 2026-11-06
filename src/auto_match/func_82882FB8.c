typedef struct Node_82882FB8 {
    int f0, f4, f8, fC;
    char *value;
} Node_82882FB8;
typedef struct {
    int f0;
    Node_82882FB8 *head;
    int size;
} Map_82882FB8;
typedef struct {
    char pad0[0x2c];
    char *f2c;
    struct Link_82882FB8 *f30;
} Link_82882FB8;
typedef struct {
    int key;
    Link_82882FB8 *cur;
} Iter_82882FB8;
extern Map_82882FB8 lbl_83212A00;
extern void fn_8289F160(Node_82882FB8 **out, Map_82882FB8 *map, int *key);

void fn_82882FB8(Iter_82882FB8 *it)
{
    int key = it->key;
    Node_82882FB8 *n;
    char *v;
    Link_82882FB8 *next;
    fn_8289F160(&n, &lbl_83212A00, &key);
    v = n != lbl_83212A00.head ? n->value : 0;
    next = (Link_82882FB8 *)it->cur->f30;
    if (next == 0 && it->cur->f2c == v + 0x70) {
        it->cur = *(Link_82882FB8 **)(v + 0x7c);
    } else {
        it->cur = next;
    }
}
