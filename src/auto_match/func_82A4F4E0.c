extern unsigned char lbl_83219D50[];
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

typedef struct Page_82A4F4E0 {
    char *start;            /* 0x00 */
    unsigned int blockSize; /* 0x04 */
    unsigned int usedMask;  /* 0x08 */
} Page_82A4F4E0;

static __forceinline void ReleaseBlock_82A4F4E0(char *block)
{
    Page_82A4F4E0 *page = *(Page_82A4F4E0 **)block;

    page->usedMask ^= 1 << ((unsigned int)(block - page->start) / page->blockSize);
}

void fn_82A4F4E0(void *memory)
{
    unsigned int tag = ((unsigned int *)memory)[-2];
    char *base = (char *)memory - ((unsigned int *)memory)[-1];
    char *block = base - 8;
    unsigned int size = ((Page_82A4F4E0 **)base)[-2]->blockSize - 8;

    RtlEnterCriticalSection(lbl_83219D50 + 0x54);
    ReleaseBlock_82A4F4E0(block);
    RtlLeaveCriticalSection(lbl_83219D50 + 0x54);
    ((unsigned int *)lbl_83219D50)[4] -= size;
    ((unsigned int *)lbl_83219D50)[(tag & 0x1fff) + 5] -= size;
}
