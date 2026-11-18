typedef struct IVec_82824738 {
    unsigned int *first;
    unsigned int *last;
} IVec_82824738;

typedef struct Node_82824738 {
    char pad[0x10];
    struct Obj_82824738 *owner; /* 0x10 */
    unsigned int index;         /* 0x14 */
} Node_82824738;

typedef struct Obj_82824738 {
    char pad[0x3a4];
    char table[0x18];      /* 0x3a4 */
    IVec_82824738 *values; /* 0x3bc */
} Obj_82824738;

extern void fn_828244E8(void);
extern void fn_828245E8(void);
extern void fn_828233A8(void *table, Node_82824738 **out, void (*compare)(void), unsigned int key);
extern void fn_8257A9F0(IVec_82824738 *values, unsigned int *value);
extern Node_82824738 *fn_828252E8(Obj_82824738 *self, int size);
extern void fn_82822F60(void *table, Node_82824738 *node, void (*hash)(void), Node_82824738 *item);

int fn_82824738(Obj_82824738 *self, unsigned int value, unsigned int *index)
{
    Node_82824738 *found;
    Node_82824738 *node;

    fn_828233A8(self->table, &found, fn_828245E8, value);
    if (found != 0) {
        *index = found->index;
        return 0;
    }
    fn_8257A9F0(self->values, &value);
    *index = self->values->last - self->values->first - 1;
    node = fn_828252E8(self, 0x18);
    node->owner = self;
    node->index = *index;
    fn_82822F60(self->table, node, fn_828244E8, node);
    return 1;
}
