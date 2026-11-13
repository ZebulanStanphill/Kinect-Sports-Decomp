typedef struct Node_82FF37F0 Node_82FF37F0;
typedef struct List_82FF37F0 {
    Node_82FF37F0 *head;
    Node_82FF37F0 *tail;
    int count;
} List_82FF37F0;
extern List_82FF37F0 lbl_83264574;
extern char lbl_83264580[];
extern char lbl_831BC7B4[];
extern char lbl_831BC7D4[];
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82FED5B0(void);
extern void fn_82FF2F20(void);
extern void fn_82FF3D88(void *p);
extern void fn_82FB38A8(void *p);

int fn_82FF37F0(void)
{
    RtlEnterCriticalSection(lbl_83264580);
    fn_82FED5B0();
    fn_82FF2F20();
    lbl_83264574.head = 0;
    lbl_83264574.tail = 0;
    lbl_83264574.count = 0;
    fn_82FF3D88(lbl_831BC7B4);
    fn_82FB38A8(lbl_831BC7D4);
    RtlLeaveCriticalSection(lbl_83264580);
    return 1;
}
