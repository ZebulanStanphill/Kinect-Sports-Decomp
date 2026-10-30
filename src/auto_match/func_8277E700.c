typedef struct Elem { unsigned char b[0x38]; } Elem;
typedef struct Deq {
    unsigned int count;
    unsigned int mapsize;
    int x8;
    Elem **map;
} Deq;
extern void fn_8277CD08(Deq *d, unsigned int blk);
extern void *memcpy(void *d, const void *s, unsigned int n);

void fn_8277E700(Deq *d, const Elem *src)
{
    unsigned int blk = d->count >> 6;
    if (blk >= d->mapsize) {
        fn_8277CD08(d, blk);
    }
    memcpy(&d->map[blk][d->count & 63], src, sizeof(Elem));
    d->count++;
}
