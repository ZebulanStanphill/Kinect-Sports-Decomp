typedef struct { int d[7]; } CritSec_82A1EA08;
typedef struct Node_82A1EA08 {
    struct Node_82A1EA08 *next;
    struct Node_82A1EA08 *prev;
} Node_82A1EA08;

extern CritSec_82A1EA08 lbl_8315D2A8;
extern Node_82A1EA08 lbl_8315D2C4;
extern void RtlEnterCriticalSection(CritSec_82A1EA08 *cs);
extern void RtlLeaveCriticalSection(CritSec_82A1EA08 *cs);

void fn_82A1EA08(Node_82A1EA08 *node, int add)
{
    RtlEnterCriticalSection(&lbl_8315D2A8);
    if (add != 0) {
        Node_82A1EA08 *prev = lbl_8315D2C4.prev;
        node->next = &lbl_8315D2C4;
        node->prev = prev;
        prev->next = node;
        lbl_8315D2C4.prev = node;
    } else {
        Node_82A1EA08 *next = node->next;
        Node_82A1EA08 *prev = node->prev;
        prev->next = next;
        next->prev = prev;
    }
    RtlLeaveCriticalSection(&lbl_8315D2A8);
}
