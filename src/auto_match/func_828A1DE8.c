typedef struct Deq_828A1DE8 {
    int pad0;
    unsigned int **map;
    unsigned int mapsize;
} Deq_828A1DE8;

typedef struct It_828A1DE8 {
    Deq_828A1DE8 *c;
    unsigned int idx;
} It_828A1DE8;

void fn_828A1DE8(It_828A1DE8 *out, It_828A1DE8 first, It_828A1DE8 last, const unsigned int *val)
{
    for (; first.idx != last.idx; first.idx++) {
        unsigned int blk = first.idx >> 2;
        unsigned int off = first.idx & 3;
        if (first.c->mapsize <= blk) {
            blk -= first.c->mapsize;
        }
        if (first.c->map[blk][off] == *val) {
            break;
        }
    }
    *out = first;
}
