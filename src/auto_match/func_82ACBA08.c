typedef unsigned int size_t;
void *memcpy(void *dst, const void *src, size_t n);
void *memmove(void *dst, const void *src, size_t n);

typedef struct Block {
    unsigned int prev;
    unsigned int next;
    unsigned int count;
    unsigned int cap;
    int data[1];
} Block;

typedef struct Iter {
    int unk0;
    Block *blk;
    unsigned int idx;
} Iter;

extern Block *fn_82ABE940(Block *blk, unsigned int size);

void fn_82ACBA08(Iter *it, int value)
{
    Block *blk;
    Block *nb;
    Block *p;
    Block *old;
    unsigned int n;

    blk = it->blk;
    if (blk->count == blk->cap) {
        nb = fn_82ABE940(blk, (blk->cap + 4) * 4);
        p = (Block *)((unsigned int)nb & ~1);
        nb->cap = it->blk->cap;
        old = (Block *)((unsigned int)it->blk & ~1);
        p->next = old->next;
        *(unsigned int *)(old->next & ~1) = (unsigned int)&p->next;
        p->prev = (unsigned int)&old->next;
        old->next = (unsigned int)p;
        if (it->idx < it->blk->count) {
            n = it->blk->count - it->idx;
            nb->count = n;
            memcpy(nb->data, &it->blk->data[it->idx], n * sizeof(int));
            it->blk->count = it->idx;
        } else {
            it->blk = nb;
            it->idx = 0;
        }
    }
    blk = it->blk;
    memmove(&blk->data[it->idx + 1], &blk->data[it->idx], (blk->count - it->idx) * sizeof(int));
    it->blk->count++;
    it->blk->data[it->idx] = value;
}
