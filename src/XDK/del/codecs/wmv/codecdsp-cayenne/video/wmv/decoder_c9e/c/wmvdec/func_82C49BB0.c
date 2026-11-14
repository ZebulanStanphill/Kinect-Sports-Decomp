typedef struct Decoder_82C49BB0 {
    void *owner;
    char pad4[0xc];
    int busy;
    char pad14[0x6070 - 0x14];
    unsigned __int64 *frame;
} Decoder_82C49BB0;

typedef struct Handle_82C49BB0 {
    int f0;
    int f4;
    char heap[0x2e0 - 8];
    Decoder_82C49BB0 *decoder;
} Handle_82C49BB0;

extern void fn_82C486C8(Decoder_82C49BB0 *dec);
extern int fn_82C4EDE8(Decoder_82C49BB0 *dec);
extern void fn_82C44C58(unsigned __int64 *frame);
extern void fn_82C563B0(char *heap, void *block);
extern void fn_82C56178(char *heap);
extern void fn_82C53970(Handle_82C49BB0 *handle);
extern void *memset(void *dst, int value, unsigned int size);

int fn_82C49BB0(Handle_82C49BB0 *handle)
{
    Decoder_82C49BB0 *dec;
    unsigned __int64 *frame;
    int result;
    char *heap;

    if (handle == 0)
        return -3;
    dec = handle->decoder;
    heap = handle->heap;
    if (dec->busy != 0)
        return -4;
    fn_82C486C8(dec);
    result = fn_82C4EDE8(dec);
    frame = dec->frame;
    fn_82C44C58(frame);
    *frame = 0;
    memset(dec, 0, 0xb330);
    if (dec->owner == 0)
        fn_82C563B0(heap, dec);
    fn_82C56178(heap);
    fn_82C53970(handle);
    return result;
}
