struct Array_82BBFFC8 {
    unsigned int capacity; /* 0x00 */
    unsigned int size;     /* 0x04 */
    unsigned int *items;   /* 0x08 */
    void Erase(unsigned int index);
};

extern "C" void *memcpy(void *dst, const void *src, unsigned int size);

void Array_82BBFFC8::Erase(unsigned int index)
{
    if (index < size) {
        unsigned int *item = &items[index];
        --size;
        memcpy(item, item + 1, (size - index) * sizeof(*item));
    }
}
