typedef struct Node_83008D30 {
    char pad0[0xc];
    int id;                 /* 0x0c */
    char pad10[4];
    int parent;             /* 0x14 */
    char pad18[0x3d - 0x18];
    unsigned char flags;    /* 0x3d */
} Node_83008D30;

unsigned char fn_83008D30(Node_83008D30 *node, int id)
{
    unsigned char r = id == node->id;
    if (!r && node->parent != 0 && !(node->flags & 0x20))
        r = fn_83008D30((Node_83008D30 *)node->parent, id);
    return r;
}
