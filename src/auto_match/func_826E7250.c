extern int fn_826E6F60(void *stream, void *buffer, int size);

typedef struct Reader_826E7250 {
    int pad[2];
    void *stream; /* +0x8 */
} Reader_826E7250;

int fn_826E7250(Reader_826E7250 *self, void *buffer, int size)
{
    if (self->stream == 0) {
        return -1;
    }
    return fn_826E6F60(self->stream, buffer, size);
}
