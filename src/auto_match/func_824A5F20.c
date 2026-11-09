/* boost::circular_buffer<T>::clear() for a 0x50-byte trivially destructible T: destroy_content() walks
   m_first over size() elements (increment wraps at m_end), then m_size = 0. */
typedef struct { char b[0x60]; } Item_824A5F20;
typedef struct {
    Item_824A5F20 *buff;
    Item_824A5F20 *end;
    Item_824A5F20 *first;
    Item_824A5F20 *last;
    unsigned size;
} Ring_824A5F20;
typedef struct {
    int pad0;
    Ring_824A5F20 ring;
} Queue_824A5F20;
typedef struct {
    char pad[0x3c];
    Queue_824A5F20 *queue;
} Obj_824A5F20;

static __forceinline void increment(Ring_824A5F20 *r, Item_824A5F20 **p)
{
    if (++*p == r->end) {
        *p = r->buff;
    }
}

static __forceinline void clear(Ring_824A5F20 *r)
{
    unsigned ii;
    for (ii = 0; ii < r->size; ++ii, increment(r, &r->first)) {
    }
    r->size = 0;
}

int fn_824A5F20(Obj_824A5F20 *o)
{
    clear(&o->queue->ring);
    return 0;
}
