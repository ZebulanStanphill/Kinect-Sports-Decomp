typedef struct Desc_826367A8 {
    unsigned int extra : 4; /* bits 28-31 */
    unsigned int mask : 12; /* bits 16-27 */
    unsigned int pad0 : 1;
    unsigned int count : 3;  /* bits 12-14 */
    unsigned int first : 12; /* bits 0-11 */
    unsigned int pad4 : 16;
    unsigned int type : 4;   /* bits 12-15 */
    unsigned int shared : 1; /* bit 11 */
    unsigned int pad4b : 9;
    unsigned int extraLow : 2; /* bits 0-1 */
} Desc_826367A8;

typedef int (*Callback_826367A8)(unsigned int flags, unsigned int index, unsigned char *data, void *context);

int fn_826367A8(Desc_826367A8 *desc, unsigned int *size, unsigned char *data, unsigned int limit,
                unsigned char *sharedData, unsigned int sharedLimit, unsigned int mode,
                Callback_826367A8 callback, void *context)
{
    int hr = 0;
    unsigned int start;
    unsigned int count;
    unsigned int offset;
    unsigned int mask;
    unsigned int extra;
    unsigned int i;
    unsigned int flags;
    unsigned char *element;
    unsigned char *base;

    if (*size == limit && !desc->shared)
        *size = desc->first * 12;
    if ((mode & 6) != 0) {
        if (desc->shared) {
            start = 0;
            base = sharedData;
            limit = sharedLimit;
        } else {
            start = *size;
            base = data;
        }
        count = desc->count;
        if (count != 0) {
            offset = desc->first * 12;
            if (offset < start || count * 12 + offset > limit) {
                hr = 0x80004005;
            } else {
                element = base + offset;
                mask = desc->mask;
                extra = desc->extraLow << 4 | desc->extra;
                for (i = 0; i < count; i++, element += 12) {
                    unsigned char high = (mask & (2 << (i * 2))) != 0;
                    unsigned char hasExtra = (extra & (1 << i)) != 0;

                    if (mask & (1 << (i * 2)))
                        flags = 2;
                    else
                        flags = 4;
                    if (high)
                        flags |= 0x20;
                    if (hasExtra)
                        flags |= 0x10;
                    if (desc->shared)
                        flags |= 0x40;
                    if (desc->type == 5)
                        flags |= 0x80;
                    if ((flags & mode & 6) != 0) {
                        hr = callback(flags, desc->first + i, element, context);
                        if (hr < 0)
                            break;
                    }
                }
            }
        }
    }
    return hr;
}
