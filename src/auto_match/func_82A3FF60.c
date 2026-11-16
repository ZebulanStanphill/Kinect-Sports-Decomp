extern unsigned char lbl_83219D50[];
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void *fn_82A3FC78(void *, int, unsigned int);

void *fn_82A3FF60(unsigned int *self, unsigned int size, unsigned int tag, unsigned int alignment)
{
    unsigned int tagCopy = tag;
    unsigned int total;
    unsigned int result;
    unsigned int base;
    RtlEnterCriticalSection(lbl_83219D50 + 0x54);
    total = size + alignment + 8;
    base = (unsigned int)fn_82A3FC78(self, 0, total);
    result = 0;
    if (base != 0) {
        unsigned int aligned = base + 8;
        if (alignment != 0) {
            aligned = (aligned / alignment + 1) * alignment;
        }
        ((unsigned int *)aligned)[-2] = tagCopy;
        ((unsigned int *)aligned)[-1] = aligned - base;
        result = aligned;
        {
            unsigned int *pSelfElem = &self[(tagCopy & 0x1fff) + 5];
            *pSelfElem = self[(tagCopy & 0x1fff) + 5] + total;
        }
        self[4] = self[4] + total;
    }
    RtlLeaveCriticalSection(lbl_83219D50 + 0x54);
    return (void *)result;
}
