typedef struct Queue_827F2328 {
    char pad[0x30];
    void *entries[4];           /* 0x30 */
    char pad40[0x53 - 0x40];
    unsigned char head;         /* 0x53 */
    unsigned char tail;         /* 0x54 */
} Queue_827F2328;

extern float fn_827F4970(void *entry);

float fn_827F2328(Queue_827F2328 *self)
{
    if (self->tail == self->head)
        return 0.0f;
    return fn_827F4970(self->entries[(self->head - 1) & 3]);
}
