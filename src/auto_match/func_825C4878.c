/* Creates a 0x44-byte object (constructor fn_826156A8), links it at the head of the owner's list
   in a new 8-byte node and returns it. */
typedef struct Node_825C4878 {
    void *item;
    struct Node_825C4878 *next;
} Node_825C4878;

typedef struct Owner_825C4878 {
    int f0;
    int f4;
    Node_825C4878 *head;
} Owner_825C4878;

extern Node_825C4878 *fn_82522D98(unsigned int size);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_826156A8(void *mem, int a, int b, float x, int c);

void *fn_825C4878(Owner_825C4878 *o, int a, int b, float x, int d, int c)
{
    Node_825C4878 *n = fn_82522D98(8);
    void *m = fn_8265C9E0(0x44);
    n->item = m ? fn_826156A8(m, b, a, x, c) : 0;
    n->next = o->head;
    o->head = n;
    return n->item;
}
