typedef struct Packet_82A37888 {
    char reserved00[0x14];
    unsigned int id; /* 0x14 */
    char reserved18[0x48];
} Packet_82A37888;

typedef struct Queue_82A37888 {
    Packet_82A37888 *packets; /* 0x00 */
    int reserved04;
    Packet_82A37888 *head; /* 0x08 */
    char lock[0x20];       /* 0x0c */
    int capacity;          /* 0x2c */
    int pending;           /* 0x30 */
    int reserved34;
    unsigned int submitted; /* 0x38 */
    int reserved3c;
    unsigned int completed; /* 0x40 */
} Queue_82A37888;

extern void RtlEnterCriticalSection(void *lock);
extern void RtlLeaveCriticalSection(void *lock);
extern int KeDelayExecutionThread(int mode, int alertable, __int64 *interval);

void fn_82A37888(Queue_82A37888 *self, unsigned int id)
{
    Packet_82A37888 *packet;
    int count;
    int i;
    unsigned int sequence;
    __int64 interval;

    RtlEnterCriticalSection(self->lock);
    count = self->pending;
    packet = self->head;
    for (i = 0; i <= count; i++) {
        packet = &self->packets[(packet - self->packets + self->capacity - 1) % self->capacity];
        if (packet->id == id) {
            break;
        }
    }
    if (i <= count) {
        sequence = self->submitted - i;
    } else if (self->capacity == count) {
        sequence = self->submitted - count;
    } else {
        sequence = self->completed;
    }
    RtlLeaveCriticalSection(self->lock);
    while (sequence - self->completed - 1 <= (unsigned int)self->capacity) {
        interval = -100000;
        KeDelayExecutionThread(1, 0, &interval);
    }
}
