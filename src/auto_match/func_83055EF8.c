typedef struct Waiter_83055EF8 {
    int unk0;
    void *event;          /* 0x4 */
    unsigned char waiting; /* 0x8 */
} Waiter_83055EF8;

extern int fn_82A1E810(void *event);

int fn_83055EF8(void *self, Waiter_83055EF8 *waiter)
{
    waiter->waiting = 0;
    return fn_82A1E810(waiter->event);
}
