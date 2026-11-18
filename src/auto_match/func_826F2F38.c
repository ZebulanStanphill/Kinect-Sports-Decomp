typedef struct Slice_826F2F38 {
    const char *data;  /* 0x0 */
    unsigned int size; /* 0x4 */
} Slice_826F2F38;

typedef struct Parser_826F2F38 {
    char pad00[0x10];
    char table[0xc];     /* 0x10 */
    Slice_826F2F38 rest; /* 0x1c */
} Parser_826F2F38;

extern int isdigit(int c);
extern int fn_82F65B18(const char *text);
extern void fn_826F2ED8(void *table, int *key, Slice_826F2F38 *value);

static __forceinline Slice_826F2F38 MakeSlice(const char *data, unsigned int size)
{
    Slice_826F2F38 slice;

    slice.size = size;
    slice.data = data;
    return slice;
}

void fn_826F2F38(Parser_826F2F38 *self, Slice_826F2F38 *text)
{
    const char *cursor = text->data;
    unsigned int remaining = text->size;
    Slice_826F2F38 part;
    int key;
    int haveKey;
    unsigned int length;
    unsigned int step;
    const char *start;

    part.data = 0;
    part.size = 0;
    haveKey = 0;
    key = 0;
    do {
        for (length = 0; length < remaining; length++) {
            if (cursor[length] == 0 || cursor[length] == ':')
                break;
        }
        part = MakeSlice(cursor, length);
        step = length + 1;
        start = cursor;
        if (remaining < step)
            step = remaining;
        cursor += step;
        remaining -= step;
        if (!haveKey) {
            if (length == 0 || start == 0 || !isdigit(*start)) {
                self->rest = part;
                return;
            }
            key = fn_82F65B18(start);
            haveKey = 1;
        } else {
            fn_826F2ED8(self->table, &key, &part);
            haveKey = 0;
        }
    } while (remaining != 0);
}
