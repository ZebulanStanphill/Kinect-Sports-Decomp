extern void *fn_8265C940(unsigned int, unsigned int);
extern void fn_8265C990(void *, unsigned int);
extern void fn_82BA02A8(void *);
extern void fn_829639F0(void *);
extern void *memcpy(void *, const void *, unsigned int);
extern void *memset(void *, int, unsigned int);

typedef struct Array_829644B8 {
    char pad[12];
    unsigned int count;
    char gap[8];
    void **data;
    char gap2[8];
    unsigned int capacity;
} Array_829644B8;

int fn_829644B8(Array_829644B8 *self, void *value)
{
    unsigned int index;
    if (self->count == self->capacity) {
        unsigned int capacity = self->capacity ? self->capacity * 2 : 256;
        void **data = fn_8265C940(capacity * 4, 0x24810000);
        if (!data) {
            if (value) {
                fn_82BA02A8(value);
                fn_829639F0(value);
            }
            return -1;
        }
        memcpy(data, self->data, self->count * 4);
        memset(data + self->count, 0, (capacity - self->count) * 4);
        fn_8265C990(self->data, 0x24810000);
        self->data = data;
        self->capacity = capacity;
    }
    self->data[self->count] = value;
    index = self->count;
    self->count = index + 1;
    return index;
}
