/* boost::circular_buffer<T>::clear() for a 0x50-byte trivially destructible T: destroy_content() walks
   m_first over size() elements (increment wraps at m_end), then m_size = 0. */
typedef struct { char b[0x50]; } Item_824B25B8;
typedef struct {
    Item_824B25B8 *buff;
    Item_824B25B8 *end;
    Item_824B25B8 *first;
    Item_824B25B8 *last;
    unsigned size;
} Ring_824B25B8;
typedef struct {
    int pad0;
    Ring_824B25B8 ring;
} Queue_824B25B8;
typedef struct {
    char pad[0x3c];
    Queue_824B25B8 *queue;
} Obj_824B25B8;

static __forceinline void increment(Ring_824B25B8 *r, Item_824B25B8 **p)
{
    if (++*p == r->end) {
        *p = r->buff;
    }
}

static __forceinline void clear(Ring_824B25B8 *r)
{
    unsigned ii;
    for (ii = 0; ii < r->size; ++ii, increment(r, &r->first)) {
    }
    r->size = 0;
}

int fn_824B25B8(Obj_824B25B8 *o)
{
    clear(&o->queue->ring);
    return 0;
}
