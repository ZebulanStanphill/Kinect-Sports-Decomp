typedef struct Array_82964228 {
    unsigned int unknown; /* 0x00 */
    unsigned int count;   /* 0x04 */
    char pad08[8];
    void **data; /* 0x10 */
    char pad14[8];
    unsigned int capacity; /* 0x1c */
} Array_82964228;

extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_8265C990(void *data, unsigned int tag);
extern void fn_82BA02A8(void *value);
void *memcpy(void *, const void *, unsigned int);
void *memset(void *, int, unsigned int);

unsigned int fn_82964228(Array_82964228 *self, void *value)
{
    unsigned int index;
    if (self->count == self->capacity) {
        unsigned int capacity = self->capacity ? self->capacity * 2 : 16;
        void **data;
        data = fn_8265C940(capacity * 4, 0x24810000);
        if (data == 0) {
            if (value != 0) {
                fn_82BA02A8(value);
                fn_8265C990(value, 0x24810000);
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
