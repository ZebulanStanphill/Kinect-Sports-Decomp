typedef struct Owner_8260E140 {
    char pad[0x60];
    void **target;
} Owner_8260E140;

typedef struct Event_8260E140 {
    char pad[0x10];
    int data;
} Event_8260E140;

extern void fn_8260E0D0(void *target, int *data);

void fn_8260E140(Owner_8260E140 *self, int unused1, Event_8260E140 *event, int unused2, int handled)
{
    if (handled == 0)
        fn_8260E0D0(*self->target, &event->data);
}
