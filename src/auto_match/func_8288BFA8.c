typedef struct Deq_8288BFA8 {
    int pad0;
    unsigned short **map;
    unsigned int mapsize;
} Deq_8288BFA8;

typedef struct It_8288BFA8 {
    Deq_8288BFA8 *c;
    unsigned int idx;
} It_8288BFA8;

void fn_8288BFA8(It_8288BFA8 *out, It_8288BFA8 first, It_8288BFA8 last, const unsigned short *val)
{
    for (; first.idx != last.idx; first.idx++) {
        unsigned int blk = first.idx >> 3;
        unsigned int off = first.idx & 7;
        if (first.c->mapsize <= blk) {
            blk -= first.c->mapsize;
        }
        if (first.c->map[blk][off] == *val) {
            break;
        }
    }
    *out = first;
}
