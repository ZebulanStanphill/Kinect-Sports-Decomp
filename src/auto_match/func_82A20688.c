typedef struct { int d[6]; } CritSec_82A20688;
typedef struct Node_82A20688 {
    struct Node_82A20688 *next;
    struct Node_82A20688 *prev;
} Node_82A20688;
typedef struct {
    char pad0[0x10];
    CritSec_82A20688 cs;
    char pad28[0x34 - 0x28];
    int handle;
    char pad38[0x74 - 0x38];
    Node_82A20688 list;
    char pad7c[0xd0 - 0x7c];
    unsigned int flags;
} Glob_82A20688;

extern Glob_82A20688 lbl_83219B90;
extern void RtlEnterCriticalSection(CritSec_82A20688 *cs);
extern void RtlLeaveCriticalSection(CritSec_82A20688 *cs);
extern void fn_82A1E810(int h);

void fn_82A20688(Node_82A20688 *node)
{
    Node_82A20688 *prev;
    RtlEnterCriticalSection(&lbl_83219B90.cs);
    prev = lbl_83219B90.list.prev;
    node->next = &lbl_83219B90.list;
    node->prev = prev;
    prev->next = node;
    lbl_83219B90.list.prev = node;
    lbl_83219B90.flags |= 1;
    RtlLeaveCriticalSection(&lbl_83219B90.cs);
    fn_82A1E810(lbl_83219B90.handle);
}
