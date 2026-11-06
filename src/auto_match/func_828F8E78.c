typedef struct Node_828F8E78 Node_828F8E78;
struct Node_828F8E78 {
    int value;
    Node_828F8E78 *next;
};

typedef struct Event_828F8E78 {
    int type;
    int data[7];
} Event_828F8E78;

typedef struct Parser_828F8E78 {
    char pad0[0x74];
    Node_828F8E78 *stack;
    char pad78[0x2a0 - 0x78];
    int state;
} Parser_828F8E78;

extern int fn_828F8968(Parser_828F8E78 *p, Event_828F8E78 *ev);
extern void fn_828F5B70(Node_828F8E78 *n, int flags);

int fn_828F8E78(Parser_828F8E78 *p)
{
    Event_828F8E78 ev;
    Node_828F8E78 *top;
    int hr;

    if (p->stack == 0) {
        return 0x8876086c;
    }
    for (;;) {
        hr = fn_828F8968(p, &ev);
        if (hr < 0) {
            return hr;
        }
        if (ev.type == 0xd) {
            break;
        }
    }
    top = p->stack;
    p->stack = top->next;
    top->next = 0;
    fn_828F5B70(top, 1);
    p->state = p->stack != 0 ? p->stack->value : 1;
    return 0;
}
