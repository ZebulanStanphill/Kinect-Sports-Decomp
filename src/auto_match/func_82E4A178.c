typedef struct List_82E49E20 List_82E49E20;

typedef struct Stream_82E4A178 {
    char pad00[0x9c];
    int file;
    char padA0[0x18];
    List_82E49E20 *buffers;
    char padBC[4];
    unsigned int alignment;
    unsigned __int64 offset;
} Stream_82E4A178;

typedef struct Request_82E4A178 {
    char pad00[0xc];
    unsigned int offsetLow;
    unsigned int offsetHigh;
    char pad14[0x24];
    int mode;
    unsigned int buffer;
    unsigned int length;
    char pad44[4];

    struct Aligned_82E4A178 {
        unsigned int buffer;
        unsigned int length;
    } aligned;

    char pad50[4];
    unsigned int leading;
    unsigned int endRemainder;
    unsigned int trailing;
    int file;
} Request_82E4A178;

extern int fn_82E498A0(int self, unsigned __int64 *size);
extern int fn_82E49E20(List_82E49E20 *list, unsigned int size, unsigned int *out);

static __forceinline void Rewind(unsigned int *offset, unsigned int leading)
{
    *offset -= leading;
}

int fn_82E4A178(Stream_82E4A178 *self, unsigned int buffer, unsigned int length, int flags,
                Request_82E4A178 *request)
{
    unsigned __int64 initialOffset = self->offset;
    int mode = request->mode;
    unsigned int low = (unsigned int)initialOffset;
    int file = self->file;
    int result = 0;
    unsigned __int64 size;

    request->offsetLow = low;
    request->offsetHigh = (unsigned int)(initialOffset >> 32);
    request->file = file;
    if (mode == 1) {
        unsigned __int64 offset;
        unsigned int end;
        unsigned int trailing;
        unsigned int leading;

        result = fn_82E498A0((int)self, &size);
        if (result < 0)
            return result;
        offset = self->offset;
        if (offset + length > size) {
            if (offset < size)
                length = (unsigned int)size - (unsigned int)offset;
            else
                length = 0;
        }
        request->buffer = buffer;
        end = low + length;
        request->length = length;
        request->leading = low % self->alignment;
        request->endRemainder = end % self->alignment;
        trailing = request->endRemainder != 0 ? self->alignment - request->endRemainder : 0;
        leading = request->leading;
        request->trailing = trailing;
        if (leading != 0 || request->endRemainder != 0) {
            request->aligned.length = leading + trailing + length;
            Rewind(&request->offsetLow, leading);
            if (self->buffers == 0)
                return (int)0xc00d36bb;
            return fn_82E49E20(self->buffers, request->aligned.length, &request->aligned.buffer);
        }
    } else if (mode == 2) {
        request->buffer = buffer;
        request->length = length;
    } else {
        goto done;
    }
    request->aligned.length = length;
    request->aligned.buffer = buffer;
done:
    return result;
}
