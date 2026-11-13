typedef struct Message_82F3ACA8 {
    void *vt;
    void *chain;             /* 0x04 */
    char pad08[0xc0 - 8];
} Message_82F3ACA8;

typedef struct Packet_82F3ACA8 {
    int header[5];
    Message_82F3ACA8 message;   /* 0x14 */
    int extra[2];          /* 0xd4 */
} Packet_82F3ACA8;

typedef struct Queue_82F3ACA8 {
    char pad0[0x1220];
    int count;             /* 0x1220 */
} Queue_82F3ACA8;

extern Packet_82F3ACA8 *fn_82F3A1D0(Packet_82F3ACA8 *dst, Packet_82F3ACA8 *src);
extern int fn_82F3A818(Queue_82F3ACA8 *self, int index, Packet_82F3ACA8 *packet);
extern int fn_82EE3128(Message_82F3ACA8 *message, int keep);
extern char lbl_82162C1C[];

static __forceinline void Message_destroy(Message_82F3ACA8 *message)
{
    message->vt = lbl_82162C1C;
    if (message->chain == 0)
        fn_82EE3128(message, 0);
}

int fn_82F3ACA8(Queue_82F3ACA8 *self, Packet_82F3ACA8 *packet, int *index)
{
    Packet_82F3ACA8 copy;
    int hr;
    int ok;

    if (index != 0)
        *index = self->count;
    hr = fn_82F3A818(self, self->count, fn_82F3A1D0(&copy, packet));
    if (hr >= 0)
        self->count++;
    ok = hr >= 0;
    Message_destroy(&packet->message);
    return ok;
}
