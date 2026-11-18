typedef struct State_82C40BA0 {
    char pad0[0x58];
    int stride; /* 0x58 */
    char pad5c[0x12];
    unsigned short bits; /* 0x6e */
    char pad70[0x198];
    void (*write)(int value, void *destination, struct State_82C40BA0 *self, int flags); /* 0x208 */
} State_82C40BA0;

/* Clamps each input sample to the output bit depth and writes it, counting the samples written. */
void fn_82C40BA0(State_82C40BA0 *self, int *position, int end, short **counter, char **output, int **input,
                 int scale)
{
    int index = *position;
    short *count = *counter;
    char *destination = *output;
    int *data = *input;
    int value;
    int maximum;
    int minimum;

    for (; index < end; index++) {
        value = data[index];
        maximum = (1 << (self->bits - 1)) - 1;
        minimum = ~maximum;
        if (value < minimum) {
            value = minimum;
        } else if (value > maximum) {
            value = maximum;
        }
        self->write(value, destination, self, 0);
        destination += self->stride * scale;
        (*count)++;
    }
    *position = index;
    *counter = count;
    *output = destination;
}
