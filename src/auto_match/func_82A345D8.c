typedef struct File_82A345D8 {
    char pad00[0xc];
    unsigned int flags;    /* 0x0c */
    unsigned int sizes[1]; /* 0x10 */
} File_82A345D8;

/* Bit width of one packed block size, by the two-bit size class of the header. */
extern const unsigned int lbl_820893C4[4];

static __forceinline unsigned __int64 ReadBits_82A345D8(const unsigned int *data, unsigned int position,
                                                        unsigned int width)
{
    unsigned int offset = position & 31;
    const unsigned int *word = data + (position >> 5);
    unsigned int rest = 32 - offset;
    unsigned __int64 value;

    value = (((unsigned __int64)word[1] >> rest) & (unsigned int)((rest >> 5) - 1)) | (word[0] << offset);
    return value >> (32 - width);
}

/* Sums the packed sizes of all blocks. */
unsigned __int64 fn_82A345D8(File_82A345D8 *file)
{
    unsigned int count = (file->flags >> 6) & 0xffff;
    unsigned int sizeClass = (file->flags >> 22) & 3;
    const unsigned int *sizes = file->sizes;
    unsigned __int64 total = 0;
    unsigned int i;

    if (count != 0) {
        for (i = 0; i < count; i++) {
            unsigned int width = lbl_820893C4[sizeClass];

            total += ReadBits_82A345D8(sizes, width * i, width);
        }
    }
    return total;
}
