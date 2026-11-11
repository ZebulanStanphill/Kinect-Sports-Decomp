extern void fn_826310E0(void *p, unsigned int start, void *src, unsigned int count, unsigned __int64 mask);
typedef struct Hdr_82858740 {
    void *data;
    unsigned short start;
    unsigned short count;
} Hdr_82858740;
typedef struct Desc_82858740 {
    int unk0;
    Hdr_82858740 hdr;
} Desc_82858740;
typedef struct Owner_82858740 {
    int unk0;
    void *target;
} Owner_82858740;
static __forceinline unsigned __int64 Mask_82858740(unsigned int start, unsigned int count)
{
    unsigned int first = start >> 2;
    unsigned int last = (start + count - 1) >> 2;
    return (unsigned __int64)((__int64)0x8000000000000000ULL >> (last - first)) >> first;
}
void fn_82858780(Owner_82858740 *self, Desc_82858740 *d) { Hdr_82858740 *h = &d->hdr; unsigned int c = h->count; unsigned int s = h->start; fn_826310E0(self->target, s, h + 1, c, Mask_82858740(s, c)); }
