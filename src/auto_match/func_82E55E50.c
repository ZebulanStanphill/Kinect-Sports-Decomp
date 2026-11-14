extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern void *memset(void *dst, int value, unsigned int size);

typedef struct Text_82E55E50 {
    char pad0[8];
    char lock[0x5c - 8];
    unsigned int length;
    int f60;
    unsigned short *data;
} Text_82E55E50;

int fn_82E55E50(Text_82E55E50 *self, unsigned short *buffer, unsigned int *size)
{
    int hr = 0;
    unsigned int capacity;
    if (size == 0) {
        return 0x80070057;
    }
    fn_82E50CB8(self->lock);
    capacity = *size;
    *size = self->length;
    if (buffer != 0) {
        if (capacity >= self->length) {
            memcpy(buffer, self->data, self->length * 2);
            if (capacity > self->length) {
                memset(buffer + self->length, 0, (capacity - self->length) * 2);
            }
        } else {
            memcpy(buffer, self->data, capacity * 2);
            hr = 0xc00d36b1;
        }
    }
    fn_82E50F10(self->lock);
    return hr;
}
