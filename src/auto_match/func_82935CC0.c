extern int memcmp(const void *a, const void *b, unsigned int n);
extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct Slot_82935CC0 {
    unsigned char b[8];
} Slot_82935CC0;

unsigned int fn_82935CC0(const Slot_82935CC0 *data, unsigned int count, Slot_82935CC0 *table, unsigned int *size)
{
    unsigned int total = *size;
    unsigned int bytes = count * sizeof(Slot_82935CC0);
    unsigned int i;

    for (i = 0; i < total; i++) {
        if (total - i < count)
            break;
        if (memcmp(data, &table[i], bytes) == 0)
            return i * sizeof(Slot_82935CC0);
    }
    memcpy(&table[total], data, bytes);
    *size = total + count;
    return total * sizeof(Slot_82935CC0);
}
