typedef struct Record_829D4B80 {
    unsigned char data[0x7d4];
} Record_829D4B80;

typedef struct Set_829D4B80 {
    Record_829D4B80 records[20];
    unsigned int count;
} Set_829D4B80;

extern void *memcpy(void *dst, const void *src, unsigned int size);

void fn_829D4B80(Set_829D4B80 *dst, Record_829D4B80 *src, unsigned int count, unsigned int *indices)
{
    unsigned int i;

    dst->count = count;
    for (i = 0; i < count; i++) {
        memcpy(&dst->records[i], &src[indices[i]], sizeof(Record_829D4B80));
    }
}
