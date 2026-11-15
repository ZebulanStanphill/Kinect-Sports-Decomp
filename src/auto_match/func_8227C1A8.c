typedef struct Entry_8227C1A8 {
    int active;         /* 0x00 */
    int rank;           /* 0x04 */
    int reserved;       /* 0x08 */
    float score;        /* 0x0c */
    char padding[0xcc]; /* 0x10 */
} Entry_8227C1A8;

extern void fn_8227CBB0(void *, void *, int, void *);

void fn_8227C1A8(char *self)
{
    Entry_8227C1A8 *begin = (Entry_8227C1A8 *)(self + 0xa88);
    Entry_8227C1A8 *end = (Entry_8227C1A8 *)(self + 0x1168);
    Entry_8227C1A8 *entry;
    unsigned int count;
    entry = begin;
    count = 0;
    for (; entry != end; entry++) {
        if (entry->active != 0) {
            count++;
        }
    }
    end = (Entry_8227C1A8 *)(self + count * 0xdc + 0xa88);
    fn_8227CBB0(begin, end, ((char *)end - (char *)begin) / 0xdc, self);
    {
        int rank = 0;
        *(int *)(self + 0xa8c) = 0;
        if (count > 1) {
            unsigned int remaining = count - 1;
            float *score = (float *)(self + 0xa94);
            do {
                if (score[0x37] != *score) {
                    rank++;
                }
                *(int *)(score + 0x35) = rank;
                score += 0x37;
            } while (--remaining != 0);
        }
    }
}
