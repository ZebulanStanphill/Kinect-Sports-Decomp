typedef struct Queue_825F4F10 {
    void *current;
    void *pending[4];
    int count; /* 0x14 */
    float elapsed;
    float progress;
    int active;
    int state;
    char padding[0x14];
    int unused;
    int option; /* 0x40 */
    float start;
    float finish;
} Queue_825F4F10;

extern void fn_825F4FE8(void *self);

unsigned int fn_825F4F10(char *self, int option)
{
    Queue_825F4F10 *queue = (Queue_825F4F10 *)(self + 0x8dc);
    if (queue->count > 0) {
        int index;
        if (queue->current != 0) {
            fn_825F4FE8(self);
        }
        queue->option = option;
        queue->state = 0;
        --queue->count;
        queue->progress = 0.0f;
        queue->active = 1;
        queue->elapsed = 0.0f;
        queue->unused = 0;
        queue->start = 0.0f;
        queue->current = queue->pending[0];
        queue->finish = 0.0f;
        for (index = 0; index < queue->count; ++index) {
            queue->pending[index] = queue->pending[index + 1];
        }
        queue->pending[queue->count] = 0;
        return 1;
    }
    return 0;
}
