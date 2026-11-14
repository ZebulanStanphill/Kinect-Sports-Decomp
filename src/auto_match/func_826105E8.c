typedef struct Event_826105E8 {
    char pad0[0x10];
    float value;                /* 0x10 */
} Event_826105E8;

typedef struct Self_826105E8 {
    char pad0[0x60];
    void **handle;              /* 0x60 */
} Self_826105E8;

extern void fn_8257E880(void *h, float v);

void fn_826105E8(Self_826105E8 *self, void *sender, Event_826105E8 *event, void *context, int cancelled)
{
    if (cancelled != 0)
        return;
    if (event == 0)
        return;
    fn_8257E880(*self->handle, event->value);
}
