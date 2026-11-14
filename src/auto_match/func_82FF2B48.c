typedef struct Node_82FF2B48 {
    char pad0[0x10];
    struct Node_82FF2B48 *next;
} Node_82FF2B48;
typedef struct List_82FF2B48 {
    Node_82FF2B48 *head;
    Node_82FF2B48 *tail;
    int count;
} List_82FF2B48;
extern List_82FF2B48 lbl_83264574;
extern char lbl_83264580[];
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82FEFF00(Node_82FF2B48 *n);
extern void fn_82FF0A80(Node_82FF2B48 *n, int arg, int flag, int extra);

void fn_82FF2B48(Node_82FF2B48 *n, int arg, int mode)
{
    int flag;

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
    fn_82FEFF00(n);
    flag = 0;
    if (mode == 1)
        flag = 1;
    fn_82FF0A80(n, arg, flag, 0);
}
