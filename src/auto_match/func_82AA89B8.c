unsigned short __loadshortbytereverse(int offset, const void *base);
unsigned int __loadwordbytereverse(int offset, const void *base);
void *memcpy(void *dest, const void *src, unsigned int size);

typedef struct Stream_82AA89B8 {
    const void *data; /* 0x0 */
    int size;         /* 0x4 */
    int position;     /* 0x8 */
} Stream_82AA89B8;

typedef struct Header_82AA89B8 {
    char tag[8];           /* 0x00 */
    unsigned short short8; /* 0x08 */
    unsigned short shortA; /* 0x0a */
    unsigned short shortC; /* 0x0c */
    unsigned short shortE; /* 0x0e */
    unsigned int word10;   /* 0x10 */
    unsigned int word14;   /* 0x14 */
    unsigned int word18;   /* 0x18 */
    unsigned int word1C;   /* 0x1c */
    unsigned int word20;   /* 0x20 */
    unsigned int word24;   /* 0x24 */
    char pad28[0xc0];
    Stream_82AA89B8 *stream; /* 0xe8 */
} Header_82AA89B8;

int fn_82AA89B8(Header_82AA89B8 *header)
{
    Stream_82AA89B8 *stream = header->stream;

    if (stream->size < 0) {
        return -11;
    }
    stream->position = 0;
    if (stream->size < 0x28) {
        return -12;
    }
    memcpy(header, stream->data, 0x28);
    stream->position += 0x28;
    header->short8 = __loadshortbytereverse(0, &header->short8);
    header->shortA = __loadshortbytereverse(0, &header->shortA);
    header->shortC = __loadshortbytereverse(0, &header->shortC);
    header->shortE = __loadshortbytereverse(0, &header->shortE);
    header->word10 = __loadwordbytereverse(0, &header->word10);
    header->word14 = __loadwordbytereverse(0, &header->word14);
    header->word18 = __loadwordbytereverse(0, &header->word18);
    header->word1C = __loadwordbytereverse(0, &header->word1C);
    header->word20 = __loadwordbytereverse(0, &header->word20);
    header->word24 = __loadwordbytereverse(0, &header->word24);
    return 0;
}
