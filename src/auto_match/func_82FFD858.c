typedef struct State_82FFD858 State_82FFD858;

typedef struct Event_82FFD858 {
    unsigned int type;
    int id;
    int argument;
    int reserved0c;
    unsigned int count;
    unsigned int value;
    unsigned int reserved18[3];
} Event_82FFD858;

typedef struct Node_82FFD858 {
    struct Node_82FFD858 *next;
    Event_82FFD858 event;
} Node_82FFD858;

struct State_82FFD858 {
    char pad00[0x34];
    char lock[0x38];
    Node_82FFD858 *head;
    char pad70[0x10];
    unsigned int pending;
};

extern void RtlEnterCriticalSection(void *lock);
extern void RtlLeaveCriticalSection(void *lock);
extern void fn_82FFE268(void *pool, int *node, int *previous);
extern int fn_82FFC9A0(State_82FFD858 *self, Event_82FFD858 *event);
extern int fn_82FFA798(State_82FFD858 *self, Event_82FFD858 event);
extern int fn_82FFD568(State_82FFD858 *self, Event_82FFD858 event);
extern int fn_82FFD708(State_82FFD858 *self, Event_82FFD858 event);
extern int fn_82FF92F8(State_82FFD858 *self, Event_82FFD858 event);
extern int fn_82FFD1F0(State_82FFD858 *self, Event_82FFD858 event);
extern int fn_82FFA898(State_82FFD858 *self, Event_82FFD858 event);
extern int fn_82FFD318(State_82FFD858 *self, Event_82FFD858 event);
extern int fn_82FFCB90(State_82FFD858 *self, Event_82FFD858 event);

int fn_82FFD858(State_82FFD858 *self)
{
    void *lock = self->lock;
    int result = 1;

    RtlEnterCriticalSection(lock);
    while (self->pending != 0) {
        Node_82FFD858 *node = self->head;
        Event_82FFD858 event = node->event;
        Node_82FFD858 *head = self->head;

        if (head != 0)
            fn_82FFE268(&self->head, (int *)head, 0);
        RtlLeaveCriticalSection(lock);
        switch (event.type) {
        case 0:
            result = fn_82FFC9A0(self, &event);
            break;
        case 1:
            result = fn_82FFA798(self, event);
            break;
        case 2:
            result = fn_82FFD568(self, event);
            break;
        case 3:
            result = fn_82FFD708(self, event);
            break;
        case 4:
            result = fn_82FF92F8(self, event);
            break;
        case 5:
            result = fn_82FFD1F0(self, event);
            break;
        case 8:
            result = fn_82FFA898(self, event);
            break;
        case 6:
            result = fn_82FFD318(self, event);
            break;
        case 7:
            result = fn_82FFCB90(self, event);
            break;
        }
        RtlEnterCriticalSection(lock);
    }
    RtlLeaveCriticalSection(lock);
    return result;
}
