typedef struct Settings_82478450 {
    unsigned char pad000[0xf4];
    int eventsEnabled; /* 0xf4 */
} Settings_82478450;

typedef struct Event_82478450 {
    float time;          /* 0x00 */
    unsigned char isCue; /* 0x04 */
    unsigned char pad05[3];
    float value; /* 0x08 */
    int target;  /* 0x0c */
} Event_82478450;

typedef struct Timeline_82478450 {
    unsigned char pad000[0x12c];
    unsigned char playing; /* 0x12c */
    unsigned char pad12d[3];
    float time;        /* 0x130 */
    unsigned int next; /* 0x134 */
    unsigned char pad138[0x48];
    Event_82478450 *events;  /* 0x180 */
    unsigned int eventCount; /* 0x184 */
} Timeline_82478450;

extern Settings_82478450 lbl_831D3AB0;

extern void fn_824779E0(Timeline_82478450 *self, int arg);
extern void fn_82478560(Timeline_82478450 *self, float value, int apply, int target);

void fn_82478450(Timeline_82478450 *self, float elapsed)
{
    Event_82478450 *event;

    if (self->events == 0 || !self->playing) {
        return;
    }
    self->time += elapsed;
    while (self->next < self->eventCount) {
        event = &self->events[self->next];
        if (self->time <= event->time) {
            break;
        }
        if (event->isCue) {
            if (lbl_831D3AB0.eventsEnabled != 0) {
                fn_824779E0(self, 0);
            }
        } else {
            fn_82478560(self, event->value, 1, event->target);
        }
        self->next++;
    }
    if (self->next == self->eventCount) {
        self->playing = 0;
        self->next = 0;
        self->time = 0.0f;
    }
}
