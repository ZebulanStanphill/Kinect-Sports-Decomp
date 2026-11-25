typedef struct Entry_82FAEA58 {
    unsigned int id; /* 0x0 */
    double value;    /* 0x8 */
} Entry_82FAEA58;

/* The stream stores doubles without alignment. */
#pragma pack(push, 1)

typedef struct PackedDouble_82FAEA58 {
    double value;
} PackedDouble_82FAEA58;

#pragma pack(pop)

typedef struct Object_82FAEA58 {
    char pad0[0xAC];
    int rate; /* 0xAC */
} Object_82FAEA58;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_82FA5190(void *heap, void *block);
extern int fn_82FAE840(Object_82FAEA58 *self, const Entry_82FAEA58 *entries, unsigned int count);
extern int fn_82FAFE40(Object_82FAEA58 *self, const unsigned char **data, unsigned int *size, int flags);

static __forceinline unsigned int ReadU32(const unsigned char **cursor)
{
    unsigned int value = *(const unsigned int *)*cursor;
    *cursor += 4;
    return value;
}

static __forceinline double ReadF64(const unsigned char **cursor)
{
    double value = ((const PackedDouble_82FAEA58 *)*cursor)->value;
    *cursor += 8;
    return value;
}

int fn_82FAEA58(Object_82FAEA58 *self, const unsigned char *data, unsigned int size)
{
    int result;
    unsigned int count;
    unsigned int i;
    Entry_82FAEA58 *entries;

    result = fn_82FAFE40(self, &data, &size, 0);
    if (result == 1) {
        self->rate = (int)(ReadF64(&data) * 48.0);
        count = ReadU32(&data);
        if (count != 0) {
            entries = (Entry_82FAEA58 *)fn_82FA5060(lbl_831BC768, count * sizeof(Entry_82FAEA58));
            if (entries == 0) {
                return 2;
            }
            for (i = 0; i < count; i++) {
                entries[i].id = ReadU32(&data);
                entries[i].value = ReadF64(&data);
            }
            result = fn_82FAE840(self, entries, count);
            fn_82FA5190(lbl_831BC768, entries);
        }
    }
    return result;
}
