typedef struct Node_826C98F8 Node_826C98F8;
extern unsigned char fn_826C88F0(Node_826C98F8 *node);
typedef struct Owner_826C98F8 {
    char pad0[0x6c];
    Node_826C98F8 *defaultNode;   /* 0x6c */
    char pad70[0x1c];
    unsigned int pad8c_hi : 27;
    unsigned int enabled : 1;     /* 0x8c bit 4 */
    unsigned int pad8c_lo : 4;
    char pad90[0x118];
    int index;                    /* 0x1a8 */
    int pad1ac;
    Node_826C98F8 *node;          /* 0x1b0 */
} Owner_826C98F8;
static __forceinline Node_826C98F8 *GetPtr(Node_826C98F8 **p) { return *p; }
static __forceinline Node_826C98F8 *GetProto(Owner_826C98F8 *self) { return self->defaultNode; }
unsigned char fn_826C98F8(Owner_826C98F8 *self)
{
    Node_826C98F8 *node;

    if (self->index < 0 && (unsigned char)self->enabled) {
        node = GetPtr(&self->node) ? GetPtr(&self->node) : GetProto(self);
        if (node != 0)
            return fn_826C88F0(node);
    }
    return 0;
}
