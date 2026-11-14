void *malloc(unsigned int);
void *memset(void *, int, unsigned int);
void *memcpy(void *, const void *, unsigned int);
void free(void *);
extern void fn_82A29A38(void);

typedef struct Array_82C54E88 {
    unsigned int *data;
    unsigned int capacity, count;
} Array_82C54E88;

unsigned int fn_82C54E88(Array_82C54E88 *self, unsigned int value)
{
    unsigned int index;
    if (self->count == self->capacity) {
        unsigned int capacity = (self->capacity + 4) * 2;
        unsigned int bytes = capacity * 4;
        unsigned int *data = malloc(bytes);
        if (!data)
            return -1;
        memset(data, 0, bytes);
        memcpy(data, self->data, self->count * 4);
        free(self->data);
        self->data = data;
        self->capacity = capacity;
    }
    if (self->count >= self->capacity)
        fn_82A29A38();
    self->data[self->count] = value;
    index = self->count;
    self->count = index + 1;
    return index;
}
