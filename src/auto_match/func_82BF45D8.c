typedef struct Ring_82BF45D8 {
    char pad0[0x1c];
    void **items;
    char pad20[2];
    unsigned short count;
    unsigned int pos;
} Ring_82BF45D8;

void *fn_82BF45D8(Ring_82BF45D8 *ring)
{
    if (ring->items != 0 && ring->count != 0) {
        void *item = ring->items[ring->pos];
        ring->pos = (ring->pos + 1) % ring->count;
        return item;
    }
    return 0;
}
