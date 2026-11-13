typedef struct Node_827B8DB0 {
    char pad0[0x18];
    struct Node_827B8DB0 *next;
} Node_827B8DB0;

typedef struct Owner_827B8DB0 {
    char pad0[0x3c];
    Node_827B8DB0 list;
} Owner_827B8DB0;

extern unsigned int fn_827B8C60(Owner_827B8DB0 *o, int a, int b, Node_827B8DB0 *n);

unsigned int fn_827B8DB0(Owner_827B8DB0 *o, int a, int b)
{
    Node_827B8DB0 *n = o->list.next;
    while (n != &o->list) {
        Node_827B8DB0 *next = n->next;
        unsigned int r = fn_827B8C60(o, a, b, n);
        if (r != 0) {
            return r;
        }
        n = next;
    }
    return 0;
}
