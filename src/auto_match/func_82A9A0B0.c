typedef struct TextWriter_82A9A0B0 {
    char padding0[0xc];
    int status;   /* 0xc */
    char *buffer; /* 0x10 */
    int capacity; /* 0x14 */
    int used;     /* 0x18 */
} TextWriter_82A9A0B0;

/* Appends text with <, > and & escaped as XML entities. */
void fn_82A9A0B0(TextWriter_82A9A0B0 *writer, const char *text, int length)
{
    int left = writer->capacity - writer->used;
    if (writer->status >= 0) {
        const char *end = text + length;
        char *out = writer->buffer + writer->used;
        for (; text < end; text++) {
            char c = *text;
            if (c == '<') {
                if (left < 4) {
                    goto fail;
                }
                *out++ = '&';
                *out++ = 'l';
                *out++ = 't';
                *out++ = ';';
                left -= 4;
            } else if (c == '>') {
                if (left < 4) {
                    goto fail;
                }
                *out++ = '&';
                *out++ = 'g';
                *out++ = 't';
                *out++ = ';';
                left -= 4;
            } else if (c == '&') {
                if (left < 5) {
                    goto fail;
                }
                *out++ = '&';
                *out++ = 'a';
                *out++ = 'm';
                *out++ = 'p';
                *out++ = ';';
                left -= 5;
            } else {
                if (left < 1) {
                    goto fail;
                }
                *out++ = c;
                left--;
            }
        }
    }
    writer->used = writer->capacity - left;
    return;
fail:
    writer->status = 0x80004005;
}
