typedef struct Node_82FF2CC0 {
    char pad0[0x10];
    struct Node_82FF2CC0 *next;
} Node_82FF2CC0;
typedef struct List_82FF2CC0 {
    Node_82FF2CC0 *head;
    Node_82FF2CC0 *tail;
    int count;
} List_82FF2CC0;
extern List_82FF2CC0 lbl_83264574;
extern char lbl_83264580[];
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

void fn_82FF2CC0(Node_82FF2CC0 *n)
{
    RtlEnterCriticalSection(lbl_83264580);
    n->next = 0;
    if (lbl_83264574.tail == 0) {
        lbl_83264574.head = n;
    } else {
        lbl_83264574.tail->next = n;
    }
    lbl_83264574.tail = n;
    lbl_83264574.count++;
    RtlLeaveCriticalSection(lbl_83264580);
}
