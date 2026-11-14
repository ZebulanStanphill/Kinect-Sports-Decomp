typedef struct Node_83000608 Node_83000608;
typedef struct {
    void *slot[0x3f];
    int (*getValue)(Node_83000608 *self);      /* 0xfc */
} NodeVtbl_83000608;
struct Node_83000608 {
    NodeVtbl_83000608 *vt;
    char pad4[0xc];
    int parent;                 /* 0x10 */
    char pad14[0x14];
    int value;                  /* 0x28 */
    char pad2c[0x12];
    unsigned char flags;        /* 0x3e */
};

int fn_83000608(Node_83000608 *self)
{
    int parent;

    if ((self->flags & 0x80) == 0 && (parent = self->parent) != 0)
        return ((Node_83000608 *)parent)->vt->getValue((Node_83000608 *)parent);
    return self->value;
}
