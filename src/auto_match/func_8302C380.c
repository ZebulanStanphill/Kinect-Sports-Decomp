typedef struct Node_8302C380 {
    char pad[0x14];
    struct Node_8302C380 *next;
    char pad2[0x70 - 0x18];
    unsigned int id;
} Node_8302C380;

typedef struct Owner_8302C380 {
    char pad[0x7c];
    Node_8302C380 *head;
} Owner_8302C380;

extern void fn_82FEF4E0(Node_8302C380 *n, int value);

void fn_8302C380(Owner_8302C380 *o, unsigned int id, int value)
{
    Node_8302C380 *n;
    int v = value < 0 ? 0 : value;
    for (n = o->head; n != 0; n = n->next) {
        if (id == 0 || n->id == id) {
            fn_82FEF4E0(n, v);
        }
    }
}
