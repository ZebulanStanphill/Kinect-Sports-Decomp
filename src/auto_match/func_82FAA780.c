typedef struct Entry_82FAA780 { int time; int a; int b; } Entry_82FAA780;
typedef struct Queue_82FAA780 {
    int f0;
    int f4;
    int next;
    unsigned int period;
    int f10;
    char heap[0x2c];
    int running;
} Queue_82FAA780;
extern Entry_82FAA780 *fn_8301B248(void *heap);
extern void fn_82FA9DC8(Queue_82FAA780 *self, int delta);

int fn_82FAA780(Queue_82FAA780 *self, Entry_82FAA780 *item)
{
    Entry_82FAA780 *e = fn_8301B248(self->heap);
    if (e != 0) {
        *e = *item;
        if (self->running != 0) {
            if (item->time < self->next) {
                self->next = item->time;
                return 1;
            }
        } else {
            fn_82FA9DC8(self, -self->period);
        }
        return 1;
    }
    return 2;
}
