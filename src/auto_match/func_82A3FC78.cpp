struct Bucket_82A3FC78;

struct Entry_82A3FC78 {
    Bucket_82A3FC78 *bucket; /* 0x00 */
    unsigned int size;       /* 0x04 */
};

class Table_82A3FC78
{
  public:
    void *Allocate(void *owner, unsigned int size);

    Entry_82A3FC78 *entries; /* 0x00 */
    unsigned int capacity;   /* 0x04 */
    unsigned int count;      /* 0x08 */
};

extern "C" {
void *memmove(void *dst, const void *src, unsigned int size);
void *memcpy(void *dst, const void *src, unsigned int size);
void *fn_8265C940(unsigned int size, unsigned int tag);
void fn_8265C990(void *block, unsigned int tag);
int fn_82A3F8D0(Bucket_82A3FC78 *bucket, void *owner, unsigned int size);
void fn_82A3F9B8(Bucket_82A3FC78 *bucket, void *owner);
unsigned int *fn_82A3FA30(Bucket_82A3FC78 *bucket, void *owner, unsigned int size, unsigned int *header);
}

void *Table_82A3FC78::Allocate(void *owner, unsigned int size)
{
    unsigned int *block = 0;
    unsigned int header = 0;
    unsigned int total = size + 8;
    int low = 0;
    int high = count - 1;
    Bucket_82A3FC78 *bucket;
    Entry_82A3FC78 *grown;

    while (low <= high) {
        int mid = (high + low) >> 1;
        Entry_82A3FC78 *entry = &entries[mid];

        if (entry->size == total) {
            block = fn_82A3FA30(entry->bucket, owner, total, &header);
            break;
        }
        if (entry->size > total)
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (low > high) {
        bucket = (Bucket_82A3FC78 *)fn_8265C940(0xc, 0x24970000);
        if (bucket != 0) {
            if (fn_82A3F8D0(bucket, owner, total) >= 0) {
                if (count < capacity) {
                    memmove(&entries[low + 1], &entries[low], (count - low) * 8);
                    entries[low].bucket = bucket;
                    entries[low].size = total;
                    block = fn_82A3FA30(bucket, owner, total, &header);
                    count++;
                } else {
                    grown = (Entry_82A3FC78 *)fn_8265C940((capacity + 0x10) * 8, 0x24970000);
                    if (grown != 0) {
                        capacity += 0x10;
                        memcpy(grown, entries, low * 8);
                        memcpy(&grown[low + 1], &entries[low], (count - low) * 8);
                        fn_8265C990(entries, 0x24970000);
                        entries = grown;
                        grown[low].bucket = bucket;
                        grown[low].size = total;
                        block = fn_82A3FA30(bucket, owner, total, &header);
                        count++;
                    } else {
                        fn_82A3F9B8(bucket, owner);
                        fn_8265C990(bucket, 0x24970000);
                    }
                }
            } else {
                fn_8265C990(bucket, 0x24970000);
            }
        }
    }
    if (block != 0) {
        *block = header;
        block += 2;
    }
    return block;
}
