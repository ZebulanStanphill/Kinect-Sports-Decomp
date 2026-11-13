/* Takes the pool of the current slot (fn_825CD068 resets or creates it and returns its
   holder), allocates a 0x80-byte node from it and clears the node. */
typedef struct Slot_825797A0 {
    int words[3];
} Slot_825797A0;

typedef struct Obj_825797A0 {
    int pad0;
    int current;                /* 0x4 */
    Slot_825797A0 slots[1];     /* 0x8 */
} Obj_825797A0;

typedef struct Node_825797A0 {
    char pad00[0x22];
    unsigned char flag;         /* 0x22 */
    char pad23[5];
    int f28;                    /* 0x28 */
    int f2c;                    /* 0x2c */
    char pad30[0x40];
    int f70;                    /* 0x70 */
    int f74;                    /* 0x74 */
    char pad78[8];
} Node_825797A0;

extern void **fn_825CD068(Slot_825797A0 *slot);
extern Node_825797A0 *fn_825A2410(void **pool);
extern void fn_82A1EFC0(void *dst, int value, int size);

Node_825797A0 *fn_825797A0(Obj_825797A0 *self)
{
    Node_825797A0 *node = fn_825A2410(fn_825CD068(&self->slots[self->current]));

    fn_82A1EFC0(node, 0, 0x80);
    node->flag = 0;
    node->f28 = 0;
    node->f70 = 0;
    node->f74 = 0;
    node->f2c = 0;
    return node;
}
