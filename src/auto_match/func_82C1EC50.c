typedef struct Source_82C1EC50 Source_82C1EC50;

struct Source_82C1EC50 {
    void *functions[4]; /* 0x00 */
    int (*Read)(Source_82C1EC50 *source, int size, unsigned char **data, unsigned int *count,
                void *scratch); /* 0x10 */
};

typedef struct Stream_82C1EC50 {
    Source_82C1EC50 *source;   /* 0x00 */
    int pad4;                  /* 0x04 */
    unsigned __int64 position; /* 0x08 */
} Stream_82C1EC50;

typedef struct Reader_82C1EC50 {
    char pad0[0x1c];
    Stream_82C1EC50 *stream; /* 0x1c */
} Reader_82C1EC50;

int fn_82C1EC50(Reader_82C1EC50 *self, unsigned __int64 *out, unsigned char **data, unsigned int *count,
                int *remaining)
{
    Stream_82C1EC50 *stream = self->stream;
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
    if (*count >= 8) {
        *out = ((((((((unsigned __int64)(*data)[7] << 8) + (*data)[6]) << 8) + (*data)[5]) << 8) + (*data)[4])
                << 32) +
               ((unsigned int)(*data)[3] << 24) + ((unsigned int)(*data)[2] << 16) + ((*data)[1] << 8) +
               (*data)[0];
        *data += 8;
        *count -= 8;
    } else {
        for (i = 0; (unsigned char)i < 8; i++) {
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
