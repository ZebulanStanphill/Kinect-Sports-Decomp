#define __lwsync() __emit(0x7C2004AC)

typedef void (*Callback_8225B430)(int arg, int context, int extra);

typedef struct Task_8225B430 {
    int state;                  /* 0x00 */
    int arg;                    /* 0x04 */
    void *buffer;               /* 0x08 */
    int size;                   /* 0x0c */
    int kind;                   /* 0x10 */
    Callback_8225B430 callback; /* 0x14 */
    int context;                /* 0x18 */
    int extra;                  /* 0x1c */
} Task_8225B430;

typedef struct Node_8225B430 Node_8225B430;

struct Node_8225B430 {
    Node_8225B430 *next;  /* 0x00 */
    Node_8225B430 *prev;  /* 0x04 */
    Task_8225B430 *value; /* 0x08 */
};

typedef struct List_8225B430 {
    Node_8225B430 *head; /* 0x00 */
    unsigned int size;   /* 0x04 */
} List_8225B430;

extern List_8225B430 lbl_83283E30;
extern unsigned char fn_8225B9B0(int arg, void *buffer, int size);
extern int fn_8225BBF0(int arg, int kind, Callback_8225B430 callback, int context);
extern void fn_8251FA58(void *buffer);
extern void fn_82522ED8(Task_8225B430 *task);
extern void fn_8265CA20(void *p);

static __forceinline unsigned char LoadBuffer(int arg, Task_8225B430 *task)
{
    unsigned char done = 0;

    if (task->buffer != 0) {
        done = fn_8225B9B0(arg, task->buffer, task->size);
    }
    return done;
}

void fn_8225B430(void)
{
    Node_8225B430 *node;
    Node_8225B430 *next;
    Task_8225B430 *task;
    unsigned char done;

    node = lbl_83283E30.head->next;
    while (node != lbl_83283E30.head) {
        task = node->value;
        if (task->state == 1) {
            __lwsync();
            next = node->next;
            if (node != lbl_83283E30.head) {
                node->prev->next = next;
                node->next->prev = node->prev;
                fn_8265CA20(node);
                lbl_83283E30.size--;
            }
            node = next;
            done = LoadBuffer(task->arg, task);
            if (done == 0) {
                if (task->kind == 0) {
                    fn_8225BBF0(task->arg, 1, task->callback, task->context);
                } else {
                    task->callback(task->arg, task->context, task->extra);
                }
            } else {
                task->callback(task->arg, task->context, 0);
            }
            if (task->buffer != 0) {
                fn_8251FA58(task->buffer);
            }
            fn_82522ED8(task);
        } else {
            node = node->next;
        }
    }
}
