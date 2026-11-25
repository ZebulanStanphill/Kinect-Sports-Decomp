typedef struct Decoder_82C080A0 {
    int *scratch;
    void *state;
    void *buffer;
    char pad0c[0x200];
    void *input; /* 0x20c */
    int pending; /* 0x210 */
    int active;  /* 0x214 */
    char pad218[0x20];
    void *control; /* 0x238 */
    void *query;   /* 0x23c */
    char pad240[0x20];
    void *allocator; /* 0x260 */
} Decoder_82C080A0;

extern void *memset(void *, int, unsigned int);
extern int fn_82C10AD0(void *, int, unsigned int, void *);
extern void fn_82C10B28(void *, int, void *);
typedef long (*DecoderCallback_82C080A0)(void *, void **, int, void *);

extern long fn_82C08028(void *, void **, int, void *);
extern long fn_82C08058(void *, void **, int, void *);
extern int fn_82C10DA0(void *, DecoderCallback_82C080A0, void *, unsigned int, void **);

int fn_82C080A0(Decoder_82C080A0 **out, void *input, void *allocator)
{
    int *scratch = 0;
    void *state = 0;
    void *buffer = 0;
    Decoder_82C080A0 *decoder;
    int status;
    int *entry;
    int i;

    status = fn_82C10AD0(allocator, 8, 0x290, out);
    if (status < 0)
        goto fail;
    memset(*out, 0, 0x290);
    decoder = *out;
    decoder->input = input;
    decoder->pending = 0;
    status = fn_82C10AD0(allocator, 8, 0x20, &scratch);
    if (status < 0)
        goto fail;
    entry = scratch;
    for (i = 0; i < 8; i++)
        *entry++ = 0;
    status = fn_82C10AD0(allocator, 8, 0x284, &state);
    if (status < 0)
        goto fail;
    memset(state, 0, 0x284);
    status = fn_82C10AD0(allocator, 8, 0x30, &buffer);
    if (status < 0)
        goto fail;
    memset(buffer, 0, 0x30);
    decoder->scratch = scratch;
    decoder->state = state;
    decoder->buffer = buffer;
    decoder->active = 1;
    decoder->allocator = allocator;
    status = fn_82C10DA0(allocator, fn_82C08028, decoder, 4, &decoder->query);
    if (status < 0)
        goto fail;
    status = fn_82C10DA0(allocator, fn_82C08058, decoder, 0x54, &decoder->control);
    if (status >= 0)
        return status;
fail:
    if (*out != 0)
        fn_82C10B28(allocator, 8, out);
    if (scratch != 0)
        fn_82C10B28(allocator, 8, &scratch);
    if (state != 0)
        fn_82C10B28(allocator, 8, &state);
    if (buffer != 0)
        fn_82C10B28(allocator, 8, &buffer);
    return status;
}
