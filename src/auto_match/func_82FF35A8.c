typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);

typedef struct Value_82FF35A8 {
    int a;
    unsigned int key;
} Value_82FF35A8;

typedef struct Node_82FF35A8 {
    struct Node_82FF35A8 *next;
    Value_82FF35A8 value;
} Node_82FF35A8;

typedef struct List_82FF35A8 {
    Node_82FF35A8 *head;
} List_82FF35A8;

typedef struct Iter_82FF35A8 {
    Node_82FF35A8 *cur;
    Node_82FF35A8 *prev;
} Iter_82FF35A8;

extern RTL_CRITICAL_SECTION lbl_83264580;
extern List_82FF35A8 lbl_831BC7D4;
extern void fn_82FB36E8(List_82FF35A8 *list, Node_82FF35A8 *node, Node_82FF35A8 *prev);

void fn_82FF35A8(unsigned int key)
{
    Iter_82FF35A8 it;

    RtlEnterCriticalSection(&lbl_83264580);
    it.prev = 0;
    it.cur = lbl_831BC7D4.head;
    while (it.cur != 0) {
        Value_82FF35A8 v = it.cur->value;
        if (v.key == key) {
            Iter_82FF35A8 nx;
            nx.cur = it.cur->next;
            nx.prev = it.prev;
            fn_82FB36E8(&lbl_831BC7D4, it.cur, it.prev);
            it = nx;
        } else {
            it.prev = it.cur;
            it.cur = it.cur->next;
        }
    }
    RtlLeaveCriticalSection(&lbl_83264580);
}
