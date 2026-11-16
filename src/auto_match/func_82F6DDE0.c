extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

static __forceinline int Validate_82F6DDE0(int valid)
{
    if (!valid) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0;
    }
    return 1;
}

void *fn_82F6DDE0(const void *key, char *base, unsigned int count, unsigned int size,
                  int (*compare)(const void *key, const void *element))
{
    unsigned int stride = size;
    int (*callback)(const void *, const void *) = compare;
    char *low = base;
    char *last = low + (count - 1) * stride;
    if (!Validate_82F6DDE0(base != 0 || count == 0)) {
        return 0;
    }
    if (!Validate_82F6DDE0(size != 0)) {
        return 0;
    }
    if (!Validate_82F6DDE0(compare != 0)) {
        return 0;
    }
    if (low <= last) {
        do {
            unsigned int half = count >> 1;
            unsigned int index;
            char *middle;
            int order;
            if (half != 0) {
                index = half;
                if ((count & 1) == 0) {
                    --index;
                }
                middle = low + index * stride;
                order = callback(key, middle);
                if (order == 0) {
                    return middle;
                }
                if (order < 0) {
                    last = middle - stride;
                    if ((count & 1) == 0) {
                        count = half - 1;
                    } else {
                        count = half;
                    }
                } else {
                    low = middle + stride;
                    count = half;
                }
            } else {
                if (count == 0) {
                    return 0;
                }
                return callback(key, low) == 0 ? low : 0;
            }
        } while (low <= last);
    }
    return 0;
}
