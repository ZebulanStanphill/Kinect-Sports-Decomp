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
    char pad00[0x2c];
    void *event;
    unsigned char stopped;
    char pad31[3];
    char lock[0x38];
    /* The shared head is volatile because the worker reads it for both copying and removal. */
    Node_82FFD858 *volatile head;
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

extern unsigned int fn_82A1E650(void *event, unsigned int milliseconds);

unsigned int fn_82FFDA50(State_82FFD858 *self)
{
    fn_82A1E650(self->event, -1);
    if (self->stopped == 0) {
        void *lock = self->lock;

        do {
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
                    fn_82FFC9A0(self, &event);
                    break;
                case 1:
                    fn_82FFA798(self, event);
                    break;
                case 2:
                    fn_82FFD568(self, event);
                    break;
                case 3:
                    fn_82FFD708(self, event);
                    break;
                case 4:
                    fn_82FF92F8(self, event);
                    break;
                case 5:
                    fn_82FFD1F0(self, event);
                    break;
                case 8:
                    fn_82FFA898(self, event);
                    break;
                case 6:
                    fn_82FFD318(self, event);
                    break;
                case 7:
                    fn_82FFCB90(self, event);
                    break;
                }
                RtlEnterCriticalSection(lock);
            }
            RtlLeaveCriticalSection(lock);
            fn_82A1E650(self->event, -1);
        } while (self->stopped == 0);
    }
    return 0;
}
