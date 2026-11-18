typedef struct String_8273C948 {
    char *text;
} String_8273C948;

typedef struct Iterator_8273C948 {
    unsigned int position;
} Iterator_8273C948;

typedef struct Entry_8273C948 {
    char pad[0x30];
    String_8273C948 name;  /* 0x30 */
    String_8273C948 value; /* 0x34 */
} Entry_8273C948;

extern const unsigned short lbl_820094C8[];

extern unsigned int fn_8268ADD8(String_8273C948 *string, int start, Iterator_8273C948 *it);
extern unsigned int fn_8268AE48(String_8273C948 *string, Iterator_8273C948 *it);
extern int fn_826BCD88(const unsigned short *table, unsigned short c);
extern void fn_8268BA10(String_8273C948 *dst, String_8273C948 *src);

int fn_8273C948(Entry_8273C948 *self, String_8273C948 *name, String_8273C948 *value)
{
    Iterator_8273C948 it;
    unsigned int c;

    for (c = fn_8268ADD8(name, 0, &it); c != 0; c = fn_8268AE48(name, &it)) {
        switch (c) {
        case '"':
        case '#':
        case '%':
        case '&':
        case '\'':
        case ',':
        case ':':
        case ';':
        case '<':
        case '>':
        case '?':
        case '\\':
        case '~':
            return 0;
        }
        if (fn_826BCD88(lbl_820094C8, (unsigned short)c) != 0)
            return 0;
    }
    fn_8268BA10(&self->name, name);
    fn_8268BA10(&self->value, value);
    return 1;
}
