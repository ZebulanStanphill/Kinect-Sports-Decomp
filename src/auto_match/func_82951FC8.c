typedef struct Array_82951FC8 {
    char pad00[0x18];
    unsigned int *data; /* 0x18 */
} Array_82951FC8;

int fn_82951FC8(Array_82951FC8 *self, unsigned int target, unsigned int source)
{
    unsigned int value = self->data[source];
    unsigned int index = source;
    if (target > source) {
        for (; index < target; index++) {
            self->data[index] = self->data[index + 1];
        }
    } else {
        for (; index > target; index--) {
            self->data[index] = self->data[index - 1];
        }
    }
    self->data[target] = value;
    return 0;
}
