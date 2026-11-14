typedef struct Span_82791DF0 {
    unsigned int start;
    unsigned int length;
    int pad8;
} Span_82791DF0;

typedef struct SpanArray_82791DF0 {
    Span_82791DF0 *data;
    unsigned int count;
} SpanArray_82791DF0;

typedef struct SpanIter_82791DF0 {
    SpanArray_82791DF0 *array;
    int index;
} SpanIter_82791DF0;

typedef struct Range_82791DF0 {
    int pad0;
    unsigned int end;
} Range_82791DF0;

typedef struct Cursor_82791DF0 {
    char pad0[0x14];
    SpanIter_82791DF0 it;
    Range_82791DF0 *range;
    unsigned int pos;
} Cursor_82791DF0;

static __forceinline unsigned char AtEnd(SpanIter_82791DF0 *it)
{
    return it->index < 0 || (unsigned int)it->index >= it->array->count;
}

static __forceinline Span_82791DF0 *Current(SpanIter_82791DF0 *it)
{
    return &it->array->data[it->index];
}

static __forceinline void Next(SpanIter_82791DF0 *it)
{
    if (it->index < (int)it->array->count)
        it->index++;
}

void fn_82791DF0(Cursor_82791DF0 *self)
{
    SpanIter_82791DF0 *it = &self->it;
    Span_82791DF0 *span;

    if (!AtEnd(it)) {
        span = Current(it);
        if (self->pos < span->start) {
            self->pos = span->start;
        } else {
            self->pos += span->length;
            Next(it);
        }
    } else {
        self->pos = self->range->end;
    }
}
