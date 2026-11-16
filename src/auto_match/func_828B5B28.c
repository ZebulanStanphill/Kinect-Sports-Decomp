typedef struct String_828B5B28 {
    union {
        char buffer[16]; /* 0x00 */
        char *pointer;   /* 0x00 */
    } text;

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
} String_828B5B28;

typedef struct Id_828B5B28 {
    unsigned short index;      /* 0x00 */
    unsigned short type;       /* 0x02 */
    unsigned short generation; /* 0x04 */
    unsigned char unused;      /* 0x06 */
    unsigned char valid;       /* 0x07 */
} Id_828B5B28;

extern int fn_82F6DCE0(char *, unsigned int, const char *, ...);
extern void fn_82230360(String_828B5B28 *, const char *, unsigned int);
extern unsigned int strlen(const char *);

String_828B5B28 *fn_828B5B28(String_828B5B28 *out, Id_828B5B28 *id, unsigned char rich)
{
    char buffer[512];
    if (id->valid != 0) {
        const char *format = rich ? "<font color=blue>NETOBJID</font>{%i, <font color=green>%i</font>, %i}"
                                  : "NETOBJID{%i, %i, %i}";
        fn_82F6DCE0(buffer, 512, format, id->index, id->type, id->generation);
    } else {
        const char *format = rich ? "<font color=blue>NETOBJID</font>{INVALID}" : "NETOBJID{INVALID}";
        fn_82F6DCE0(buffer, 512, format);
    }
    {
        unsigned int *size = &out->size;
        size[0] = 0;
        size[1] = 15;
        ((char *)out)[0] = 0;
    }
    fn_82230360(out, buffer, strlen(buffer));
    return out;
}
