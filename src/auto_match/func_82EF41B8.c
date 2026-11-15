typedef struct State_82EF41B8 {
    char pad0[0xc];
    void *object; /* 0xc */
} State_82EF41B8;

extern int fn_82936290(char *, unsigned int, const char *);

static __forceinline int GetLength(const char *text, unsigned int *length)
{
    unsigned int remaining = 0x7fffffff;
    const char *cursor = text;
    int result = 0;
    do {
        if (*cursor != 0) {
        } else {
            break;
        }
        remaining--;
        cursor++;
    } while (remaining != 0);
    if (remaining == 0) {
        result = 0x80070057;
    } else {
        *length = 0x7fffffff - remaining;
    }
    return result;
}

int fn_82EF41B8(State_82EF41B8 *self, unsigned int capacity, char *out, unsigned int *required,
                const char *text)
{
    unsigned int length = 0;
    char empty = 0;
    int result;
    if (self->object == 0) {
        result = 0xc00d36b6;
    } else if (required == 0) {
        return 0x80070057;
    } else if ((out == 0 && capacity != 0) || (out != 0 && capacity == 0)) {
        result = 0x80070057;
    } else {
        if (text == 0) {
            text = &empty;
        }
        result = GetLength(text, &length);
        if (result >= 0) {
            *required = length + 1;
            if (capacity <= length) {
                result = 0xc00d36b1;
            } else if (length + 1 > 0x7fffffff) {
                result = 0x80070057;
            } else {
                result = fn_82936290(out, length + 1, text);
            }
        }
    }
    return result;
}
