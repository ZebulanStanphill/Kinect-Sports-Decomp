/* Creates a 0x1c-byte object (constructor fn_826180E8), links it at the head of the owner's list
   in a new 8-byte node and returns it. */
typedef struct Node_825C5118 {
    void *item;
    struct Node_825C5118 *next;
} Node_825C5118;

typedef struct Owner_825C5118 {
    int f0;
    int f4;
    Node_825C5118 *head;
} Owner_825C5118;

extern Node_825C5118 *fn_82522D98(unsigned int size);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_826180E8(void *mem, int a, int b, float x, int c, int d);

void *fn_825C5118(Owner_825C5118 *o, int a, int b, float x, int c)
{
    Node_825C5118 *n = fn_82522D98(8);
    void *m = fn_8265C9E0(0x1c);
    n->item = m ? fn_826180E8(m, b, a, x, c, o->f4) : 0;
    n->next = o->head;
    o->head = n;
    return n->item;
}
