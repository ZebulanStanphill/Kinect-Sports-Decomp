typedef struct Blob_82E7E900 {
    unsigned int size;
    void *data;
} Blob_82E7E900;

typedef struct Variant_82E7E900 {
    unsigned short type;
    unsigned char pad2[6];
    unsigned int count;
    Blob_82E7E900 *blobs;
} Variant_82E7E900;

extern int fn_82E50338(Variant_82E7E900 *out, Variant_82E7E900 *source);
extern void *fn_82E4FE08(unsigned int size);
extern void *memcpy(void *out, const void *source, unsigned int size);

int fn_82E7E900(Variant_82E7E900 *out, Variant_82E7E900 *source)
{
    int result;
    Blob_82E7E900 *dest;
    Blob_82E7E900 *input;
    unsigned int i;

    if (source == 0) {
        result = 0x80004003;
        goto done;
    }
    if (out == source) {
        result = 0x80004003;
    } else {
        result = fn_82E50338(out, source);
        if (result < 0) {
            result = 0;
            if (source->type != 0x1041) {
                result = 0xc00d36e8;
            } else {
                out->type = source->type;
                out->count = source->count;
                out->blobs = (Blob_82E7E900 *)fn_82E4FE08(source->count * 8);
                if (out->blobs == 0) {
                    goto failed;
                }
                dest = out->blobs;
                input = source->blobs;
                for (i = 0; source->count > i; i++, dest++, input++) {
                    dest->size = input->size;
                    dest->data = fn_82E4FE08(input->size);
                    if (dest->data == 0) {
                        goto failed;
                    }
                    memcpy(dest->data, input->data, input->size);
                }
            }
        }
    }
done:
    return result;
failed:
    result = 0x8007000e;
    goto done;
}
