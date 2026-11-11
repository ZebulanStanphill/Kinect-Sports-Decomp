/* boost::circular_buffer<T>::clear() for a 0xa0-byte trivially destructible T: destroy_content() walks
   m_first over size() elements (increment wraps at m_end), then m_size = 0. */
typedef struct { char b[0xa0]; } Item_824A6FB0;
typedef struct {
    Item_824A6FB0 *buff;
    Item_824A6FB0 *end;
    Item_824A6FB0 *first;
    Item_824A6FB0 *last;
    unsigned size;
} Ring_824A6FB0;
typedef struct {
    int pad0;
    Ring_824A6FB0 ring;
    char pad18[12];
    float a,b;
} Queue_824A6FB0;
typedef struct {
    char pad[0x3c];
    Queue_824A6FB0 *queue;
} Obj_824A6FB0;

static __forceinline void increment(Ring_824A6FB0 *r, Item_824A6FB0 **p)
{
    if (++*p == r->end) {
        *p = r->buff;
    }
}

static __forceinline void clear(Ring_824A6FB0 *r)
{
    unsigned ii;
    for (ii = 0; ii < r->size; ++ii, increment(r, &r->first)) {
    }
    r->size = 0;
}

int fn_824A6FB0(Obj_824A6FB0 *o)
{
    clear(&o->queue->ring);
    o->queue->a = 0.0f;
    o->queue->b = 0.0f;
    return 0;
}
