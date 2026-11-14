typedef struct Node_8285FFC8 Node_8285FFC8;
typedef struct Obj_8285FFC8 {
    char pad0[0x34];
    Node_8285FFC8 *root; /* 0x34 */
} Obj_8285FFC8;

extern void fn_8285FF30(Node_8285FFC8 *node, int *leaves, int *branches);

void fn_8285FFC8(Obj_8285FFC8 *self, int *leaves, int *branches)
{
    *leaves = 0;
    *branches = 0;
    fn_8285FF30(self->root, leaves, branches);
}
