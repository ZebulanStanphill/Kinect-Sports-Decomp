typedef struct Queue_82E92160 {
    char *data;
    unsigned int capacity;
    char pad8[12];
    unsigned int read;
    unsigned int write;
} Queue_82E92160;

extern void fn_82E92098(Queue_82E92160 *, unsigned int);

int fn_82E92160(Queue_82E92160 *self, unsigned int value)
{
    if (!self->data) {
        return -100;
    }
    if (self->read == (self->write + 3) % self->capacity) {
        return -100;
    }
    fn_82E92098(self, self->write);
    *(unsigned int *)(self->data + self->write * 40) = value;
    self->write = (self->write + 1) % self->capacity;
    return 0;
}
