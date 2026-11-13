void *memcpy(void *dst, const void *src, unsigned int size);

int fn_82F41C68(const void *src, unsigned int size, void *dst, unsigned int *capacity)
{
    int hr = 0;
    unsigned int available;

    if (capacity != 0)
        available = *capacity;
    else
        available = 0;
    if (dst != 0) {
        if (available >= size)
            memcpy(dst, src, size);
        else
            hr = 0xC00D36B1;
    }
    if (capacity != 0)
        *capacity = size;
    return hr;
}
