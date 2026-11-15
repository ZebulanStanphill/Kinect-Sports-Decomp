typedef struct Entry_82FAE840 {
    unsigned int key; /* 0x00 */
    int value;        /* 0x04 */
} Entry_82FAE840;

typedef struct Input_82FAE840 {
    unsigned int key;      /* 0x00 */
    unsigned int reserved; /* 0x04 */
    double value;          /* 0x08 */
} Input_82FAE840;

typedef struct Vector_82FAE840 {
    Entry_82FAE840 *begin; /* 0x00 */
    Entry_82FAE840 *end;   /* 0x04 */
    unsigned int capacity; /* 0x08 */
} Vector_82FAE840;

typedef struct Object_82FAE840 {
    char padding[0xa0];      /* 0x00 */
    Vector_82FAE840 entries; /* 0xa0 */
} Object_82FAE840;

extern const double lbl_82160788;
extern unsigned char fn_83037EB8(Vector_82FAE840 *, int);

int fn_82FAE840(Object_82FAE840 *self, const Input_82FAE840 *source, unsigned int count)
{
    Vector_82FAE840 *entries = &self->entries;
    unsigned int index = 0;
    entries->end = entries->begin;
    if (count != 0) {
        double scale = lbl_82160788;
        const Input_82FAE840 *input = source;
        do {
            Entry_82FAE840 value;
            unsigned int size;
            Entry_82FAE840 *slot;
            value.key = input->key;
            value.value = (int)(input->value * scale);
            size = entries->end - entries->begin;
            if ((size >= entries->capacity && fn_83037EB8(entries, 8) == 0) || size >= entries->capacity) {
                return 2;
            }
            slot = entries->end++;
            if (slot == 0) {
                return 2;
            }
            index++;
            input++;
            *slot = value;
        } while (index < count);
    }
    return 1;
}
