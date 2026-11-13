typedef struct Node_825BE108 Node_825BE108;
typedef struct Hash_825BE108 {
    int pad0;
    Node_825BE108 *end;            /* 0x04 */
} Hash_825BE108;

typedef struct Self_825BE108 {
    char pad0[0x5c];
    Hash_825BE108 table;           /* 0x5c */
    char pad64[0x178];
    long pending;                  /* 0x1dc */
    char pad1e0[0x18];
    char id[4];                    /* 0x1f8 */
} Self_825BE108;

extern long _InterlockedDecrement(long volatile *p);
extern unsigned int fn_827D96A0(void *p);
extern Node_825BE108 **fn_8259BB38(Node_825BE108 **out, Hash_825BE108 *h, unsigned int *key);

int fn_825BE108(Self_825BE108 *self, void *owner, void *item)
{
    unsigned int key;
    Node_825BE108 *it;

    if (fn_827D96A0(owner) == fn_827D96A0(self->id)) {
        key = fn_827D96A0(item);
        fn_8259BB38(&it, &self->table, &key);
        if (it != self->table.end) {
            _InterlockedDecrement(&self->pending);
            return 1;
        }
    }
    return 0;
}
