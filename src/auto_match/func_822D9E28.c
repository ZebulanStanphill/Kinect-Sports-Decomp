/* Sort predicate over 20-byte entries: orders them by a weighted sum whose two weights the
   predicate refers to.

   The original is an inline function (a functor's or lambda's operator()): its callers were compiled
   knowing that it does not write to the predicate object, but not which registers it leaves alone.
   `extern __inline` gives the same in C: an out-of-line copy in a COMDAT section. */
typedef struct Entry_822D9E28 {
    int id;      /* 0x00 */
    float first; /* 0x04 */
    float base;  /* 0x08 */
    int unknown0C;
    float second; /* 0x10 */
} Entry_822D9E28;

typedef struct Predicate_822D9E28 {
    const float *firstWeight;
    const float *secondWeight;
} Predicate_822D9E28;

extern __inline unsigned char fn_822D9E28(Predicate_822D9E28 *self, const Entry_822D9E28 *a,
                                          const Entry_822D9E28 *b)
{
    return a->first * *self->firstWeight + a->second * *self->secondWeight + a->base <
           b->first * *self->firstWeight + b->second * *self->secondWeight + b->base;
}
