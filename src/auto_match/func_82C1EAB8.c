typedef struct Source_82C1EAB8 Source_82C1EAB8;

struct Source_82C1EAB8 {
    void *functions[4]; /* 0x00 */
    int (*Read)(Source_82C1EAB8 *source, int size, unsigned char **data, unsigned int *count,
                void *scratch); /* 0x10 */
};

typedef struct Stream_82C1EAB8 {
    Source_82C1EAB8 *source;   /* 0x00 */
    int pad4;                  /* 0x04 */
    unsigned __int64 position; /* 0x08 */
} Stream_82C1EAB8;

typedef struct Reader_82C1EAB8 {
    char pad0[0x1c];
    Stream_82C1EAB8 *stream; /* 0x1c */
} Reader_82C1EAB8;

int fn_82C1EAB8(Reader_82C1EAB8 *self, unsigned int *out, unsigned char **data, unsigned int *count,
                int *remaining)
{
    Stream_82C1EAB8 *stream = self->stream;
    int hr = 0;
    char shift = 0;
    char index = 0;
    char i;
    unsigned char scratch[16];
    int invalidArgument;

    invalidArgument = stream == 0 || out == 0 || count == 0 || remaining == 0 || data == 0;
    if (invalidArgument) {
        return 0x80070057;
    }
    *out = 0;
    if (*count >= 4) {
        *out = ((((((*data)[3] << 8) + (*data)[2]) << 8) + (*data)[1]) << 8) + (*data)[0];
        *data += 4;
        *count -= 4;
    } else {
        for (i = 0; (unsigned char)i < 4; i++) {
            if (*count == 0) {
                hr = stream->source->Read(stream->source, *remaining, data, count, scratch);
                if (hr < 0) {
                    return hr;
                }
                index = 0;
                stream->position += *count;
                *remaining -= *count;
            }
            *out |= (*data)[index] << shift;
            shift += 8;
            index++;
            (*count)--;
        }
        *data += index;
    }
    return hr;
}
