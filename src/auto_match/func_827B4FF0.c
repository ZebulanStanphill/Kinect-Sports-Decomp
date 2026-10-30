typedef struct Elem { unsigned char b[0x1c]; } Elem;
typedef struct Deq {
    unsigned int count;
    unsigned int mapsize;
    int x8;
    Elem **map;
} Deq;
extern void fn_827B4B30(Deq *d, unsigned int blk);
extern void *memcpy(void *d, const void *s, unsigned int n);

void fn_827B4FF0(Deq *d, const Elem *src)
{
    unsigned int blk = d->count >> 8;
    if (blk >= d->mapsize) {
        fn_827B4B30(d, blk);
    }
    memcpy(&d->map[blk][d->count & 255], src, sizeof(Elem));
    d->count++;
}
