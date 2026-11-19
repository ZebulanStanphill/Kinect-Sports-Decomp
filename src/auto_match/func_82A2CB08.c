typedef struct Page_82A2CB08 {
    unsigned int flags; /* 0x0 */
    unsigned char refs; /* 0x4 */
    unsigned char pad5[3];
} Page_82A2CB08;

typedef struct Cache_82A2CB08 {
    char pad0[0x30];
    Page_82A2CB08 *pages; /* 0x30 */
    char *base;           /* 0x34 */
} Cache_82A2CB08;

typedef struct Digest_82A2CB08 {
    unsigned char hash[0x14];
    unsigned int tag;
} Digest_82A2CB08;

extern void XeCryptSha(const void *data1, unsigned int size1, const void *data2, unsigned int size2,
                       const void *data3, unsigned int size3, void *digest, unsigned int digestSize);

void fn_82A2CB08(Cache_82A2CB08 *self, unsigned int block, char *data, Digest_82A2CB08 *digests)
{
    Page_82A2CB08 *page;

    XeCryptSha(data, 0x1000, 0, 0, 0, 0, &digests[block % 170], 0x14);
    page = &self->pages[(data - self->base) / 0x1000];
    page->refs--;
    page = &self->pages[((char *)digests - self->base) / 0x1000];
    page->refs--;
}
