typedef struct Event_8262A9D0 {
    int type;               /* 0x0 */
    int pad;
    void *target;           /* 0x8 */
} Event_8262A9D0;

typedef struct Self_8262A9D0 {
    char pad[0x960];
    void *focus;            /* 0x960 */
    void *hover;            /* 0x964 */
    char pad968[0xc];
    unsigned char pressed;  /* 0x974 */
} Self_8262A9D0;

void fn_8262A9D0(Self_8262A9D0 *self, Event_8262A9D0 *event)
{
    void *target;

    switch (event->type) {
    case 0x44:
        target = event->target;
        if (target == self->focus)
            self->focus = 0;
        if (event->target == self->hover)
            self->hover = 0;
        break;
    case 0x5d:
        if (event->target == self->focus)
            self->pressed = 1;
        break;
    }
}
