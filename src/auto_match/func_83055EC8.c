typedef struct Waiter_83055EC8 {
    char pad0[0x38];
    void *event;
    int pad3c;
    int count;
    unsigned char signaled;
} Waiter_83055EC8;

extern int fn_82A1E7D8(void *event);

void fn_83055EC8(Waiter_83055EC8 *self)
{
    self->signaled = 1;
    if (self->count > 0) {
        fn_82A1E7D8(self->event);
    }
}
