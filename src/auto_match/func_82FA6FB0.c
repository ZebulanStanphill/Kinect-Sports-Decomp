typedef struct Node Node;
typedef struct NodeVt {
    char pad[0x20];
    unsigned int (*getType)(Node *n);
} NodeVt;
typedef struct Info {
    char pad[0x28];
    unsigned int id;
} Info;
struct Node {
    NodeVt *vt;
    char pad[0x38 - 4];
    Info *info;
    Node *next;
};

extern Node *lbl_83264234;
extern int fn_82FA8BA8(Node *n, int arg);

int fn_82FA6FB0(int unused, unsigned int type, unsigned int id, int arg)
{
    Node *n;
    int r = 1;
    for (n = lbl_83264234; n != 0; n = n->next) {
        if (n->vt->getType(n) == type &&
            (id == 0 || n->info->id == id) &&
            fn_82FA8BA8(n, arg) != 1) {
            r = 2;
        }
    }
    return r;
}
