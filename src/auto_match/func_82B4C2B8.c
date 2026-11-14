/* True when the cursor has no extra entry and its value equals the node's link (0 when the link is tagged with bit 0). */
typedef struct {
    int pad;
    unsigned int link;
} Node_82B4C2B8;

typedef struct {
    Node_82B4C2B8 *node;
    unsigned int value;
    void *extra;
} Cursor_82B4C2B8;

unsigned char fn_82B4C2B8(Cursor_82B4C2B8 *cursor)
{
    return cursor->extra == 0 &&
           cursor->value == ((cursor->node->link & 1) ? 0 : cursor->node->link);
}
