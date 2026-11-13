typedef struct Node_8282E3B0 {
    struct Node_8282E3B0 *left;     /* 0x00 */
    struct Node_8282E3B0 *parent;   /* 0x04 */
    struct Node_8282E3B0 *right;    /* 0x08 */
    const void *data;               /* 0x0c */
    unsigned int size;              /* 0x10 */
    int pad14;
    int offset;                     /* 0x18 */
} Node_8282E3B0;

typedef struct Map_8282E3B0 {
    int pad0;
    Node_8282E3B0 *head;            /* 0x04 */
    unsigned int count;
} Map_8282E3B0;

typedef struct Obj_8282E3B0 {
    char pad0[0x14];
    unsigned int size;              /* 0x14 */
    char pad18[0x24];
    Map_8282E3B0 *map;              /* 0x3c */
} Obj_8282E3B0;

extern void *memset(void *dst, int c, unsigned int n);
extern void *memcpy(void *dst, const void *src, unsigned int n);
extern void fn_82518FF0(Node_8282E3B0 **it);

void fn_8282E3B0(Obj_8282E3B0 *self, char *buffer)
{
    Node_8282E3B0 *it;
    Node_8282E3B0 *head;
    memset(buffer, 0, self->size);
    head = self->map->head;
    it = head->left;
    while (it != head) {
        memcpy(buffer + it->offset, it->data, it->size);
        fn_82518FF0(&it);
        head = self->map->head;
    }
}
