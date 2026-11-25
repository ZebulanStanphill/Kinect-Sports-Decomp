typedef struct Node_8260DC90 Node_8260DC90;
typedef void (*Callback_8260DC90)(Node_8260DC90 *node);

struct Node_8260DC90 {
    int head;                       /* 0x000 */
    Node_8260DC90 *next;            /* 0x004 */
    int enabled;                    /* 0x008 */
    int state;                      /* 0x00C */
    unsigned char body[0x160];      /* 0x010 */
    int pending;                    /* 0x170 */
    int pad174;                     /* 0x174 */
    Callback_8260DC90 callbacks[9]; /* 0x178 */
};

extern void *fn_82522D98(unsigned int size);
extern void *XMemSet(void *dst, int value, unsigned int size);
extern void fn_8260B6C8(void *body);
extern void fn_8260DF78(Node_8260DC90 *node);
extern void fn_8260DDC8(Node_8260DC90 *node);
extern void fn_8260DDD0(Node_8260DC90 *node);
extern void fn_82D7E470(Node_8260DC90 *node);
extern void fn_82BA02A8(Node_8260DC90 *node);
extern void fn_82D7EA10(Node_8260DC90 *node);

static __forceinline void ClearLinks(Node_8260DC90 *node)
{
    node->head = 0;
    node->next = 0;
}

void fn_8260DC90(Node_8260DC90 **out)
{
    Node_8260DC90 *node;

    *out = (Node_8260DC90 *)fn_82522D98(0x19C);
    XMemSet(*out, 0, 0x19C);
    (*out)->state = 0;
    (*out)->enabled = 1;
    (*out)->pending = 0;
    ClearLinks(*out);
    fn_8260B6C8((*out)->body);
    (*out)->callbacks[0] = fn_8260DF78;
    (*out)->callbacks[1] = fn_8260DDC8;
    (*out)->callbacks[2] = fn_8260DDD0;
    (*out)->callbacks[3] = fn_82D7E470;
    (*out)->callbacks[4] = fn_82BA02A8;
    (*out)->callbacks[5] = fn_82BA02A8;
    (*out)->callbacks[6] = fn_82D7EA10;
    (*out)->callbacks[7] = fn_82D7E470;
    (*out)->callbacks[8] = fn_82D7E470;
    for (node = *out; node != 0; node = node->next) {
        node->callbacks[1](node);
    }
}
