typedef struct {
    unsigned int *p;
    unsigned int off;
} BitIter_8288CA40;

static __forceinline unsigned char BitIterEq_8288CA40(const BitIter_8288CA40 *a, const BitIter_8288CA40 *b)
{
    return a->p == b->p && a->off == b->off;
}

static __forceinline void BitIterInc_8288CA40(BitIter_8288CA40 *it)
{
    if (it->off < 31) {
        it->off++;
    } else {
        it->off = 0;
        it->p++;
    }
}

BitIter_8288CA40 *fn_8288CA40(BitIter_8288CA40 *out, BitIter_8288CA40 first, BitIter_8288CA40 last, BitIter_8288CA40 dest)
{
    for (; !BitIterEq_8288CA40(&first, &last); BitIterInc_8288CA40(&first)) {
        if (*first.p & (1 << first.off))
            *dest.p |= 1 << dest.off;
        else
            *dest.p &= ~(1 << dest.off);
        BitIterInc_8288CA40(&dest);
    }
    *out = dest;
    return out;
}
