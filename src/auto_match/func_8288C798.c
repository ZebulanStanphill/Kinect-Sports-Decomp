typedef struct {
    unsigned int *p;
    unsigned int off;
} BitIter_8288C798;

static __forceinline unsigned char BitIterEq_8288C798(const BitIter_8288C798 *a, const BitIter_8288C798 *b)
{
    return a->p == b->p && a->off == b->off;
}

static __forceinline void BitIterInc_8288C798(BitIter_8288C798 *it)
{
    if (it->off < 31) {
        it->off++;
    } else {
        it->off = 0;
        it->p++;
    }
}

void fn_8288C798(BitIter_8288C798 first, BitIter_8288C798 last, const unsigned char *value)
{
    for (; !BitIterEq_8288C798(&first, &last); BitIterInc_8288C798(&first)) {
        if (*value)
            *first.p |= 1 << first.off;
        else
            *first.p &= ~(1 << first.off);
    }
}
