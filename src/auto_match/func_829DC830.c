typedef struct Record_829DC830 {
    unsigned char data[0x7d4];
} Record_829DC830;

typedef struct Set_829DC830 {
    Record_829DC830 records[500];
    unsigned int count;
} Set_829DC830;

extern void *memcpy(void *dst, const void *src, unsigned int size);

void fn_829DC830(Set_829DC830 *dst, Record_829DC830 *src, unsigned int count, unsigned int *indices)
{
    unsigned int i;

    dst->count = count;
    for (i = 0; i < count; i++) {
        memcpy(&dst->records[i], &src[indices[i]], sizeof(Record_829DC830));
    }
}
