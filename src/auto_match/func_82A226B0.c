typedef struct Node_82A226B0 {
    struct Node_82A226B0 *next;
    struct Node_82A226B0 *prev;
    char pad8[0x1c - 0x8];
    unsigned int flags;
} Node_82A226B0;

typedef struct Lock_82A226B0 {
    char pad0[0x2c];
    Node_82A226B0 list;
} Lock_82A226B0;

typedef struct Glob_82A226B0 {
    int pad0;
    Lock_82A226B0 *lock;
    char pad8[0x128 - 0x8];
    unsigned int pending;
} Glob_82A226B0;

extern Glob_82A226B0 lbl_83219B90;
extern void RtlEnterCriticalSection(Lock_82A226B0 *cs);
extern void RtlLeaveCriticalSection(Lock_82A226B0 *cs);
extern void fn_82A21458(Lock_82A226B0 *lock, Node_82A226B0 *node);

Node_82A226B0 *fn_82A226B0(void)
{
    Node_82A226B0 *found = 0;
    Node_82A226B0 *node;
    Node_82A226B0 *head;

    RtlEnterCriticalSection(lbl_83219B90.lock);
    if (lbl_83219B90.pending != 0) {
        head = &lbl_83219B90.lock->list;
        node = head->next;
        while (1) {
            if (node == head) {
                lbl_83219B90.pending = 0;
                break;
            }
            if (node->flags & 1) {
                node->flags &= ~1;
                found = node;
                lbl_83219B90.pending--;
                fn_82A21458(lbl_83219B90.lock, node);
                break;
            }
            node = node->next;
        }
    }
    RtlLeaveCriticalSection(lbl_83219B90.lock);
    return found;
}
