typedef struct Source_82C1E828 Source_82C1E828;

struct Source_82C1E828 {
    void *functions[4]; /* 0x00 */
    int (*Read)(Source_82C1E828 *source, int size, unsigned char **data, unsigned int *count,
                void *scratch); /* 0x10 */
};

typedef struct Stream_82C1E828 {
    Source_82C1E828 *source;   /* 0x00 */
    int pad4;                  /* 0x04 */
    unsigned __int64 position; /* 0x08 */
} Stream_82C1E828;

typedef struct Reader_82C1E828 {
    char pad0[0x1c];
    Stream_82C1E828 *stream; /* 0x1c */
} Reader_82C1E828;

int fn_82C1E828(Reader_82C1E828 *self, unsigned char *out, unsigned char **data, unsigned int *count,
                int *remaining)
{
    Stream_82C1E828 *stream;
    int hr;
    unsigned char scratch[16];
    int invalidArgument;

    stream = self->stream;
    hr = 0;
    invalidArgument = stream == 0 || out == 0 || count == 0 || remaining == 0 || data == 0;
    if (invalidArgument) {
        hr = 0x80070057;
    } else {
        *out = 0;
        if (*count >= 1) {
            *out = **data;
            (*data)++;
            (*count)--;
        } else {
            hr = stream->source->Read(stream->source, *remaining, data, count, scratch);
            if (hr >= 0) {
                stream->position += *count;
                *remaining -= *count;
                *out = **data;
                (*data)++;
                (*count)--;
            }
        }
    }
    return hr;
}
