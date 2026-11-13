extern "C" void *memcpy(void *, const void *, unsigned int);
struct Writer_82631E78 {
    char *buffer;
    unsigned int pos;
    unsigned int capacity;
    unsigned int high;
    int error;
    void Write(const void *src, unsigned int size);
};
void Writer_82631E78::Write(const void *src, unsigned int size)
{
    unsigned int end = pos + size;
    if (end <= capacity) {
        if (src != 0)
            memcpy(buffer + pos, src, size);
    } else if (capacity != 0) {
        error = 0x80004005;
    }
    pos = end;
    if (end > high)
        high = end;
}
