typedef struct String_828B5A20 {
    union {
        char buffer[16]; /* 0x00 */
        char *pointer;   /* 0x00 */
    } text;

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
} String_828B5A20;

typedef struct Id_828B5A20 {
    unsigned short index;      /* 0x00 */
    unsigned short type;       /* 0x02 */
    unsigned short generation; /* 0x04 */
    unsigned char unused;      /* 0x06 */
    unsigned char valid;       /* 0x07 */
} Id_828B5A20;

extern void *fn_828A12E8(void *);
extern String_828B5A20 *fn_8288DD10(void *, unsigned short);
extern int fn_82F6DCE0(char *, unsigned int, const char *, ...);
extern void fn_82230360(String_828B5A20 *, const char *, unsigned int);
extern unsigned int strlen(const char *);

String_828B5A20 *fn_828B5A20(String_828B5A20 *out, Id_828B5A20 *id, unsigned char rich, void *context)
{
    char buffer[512];
    if (id->valid != 0) {
        const char *format = rich ? "<font color=blue>NETOBJID</font>{%i, <font color=green>%s</font>, %i}"
                                  : "NETOBJID{%i, %s, %i}";
        unsigned int generation = id->generation;
        unsigned int type = id->type;
        String_828B5A20 *name = fn_8288DD10(fn_828A12E8(context), type);
        const char *text = name->capacity >= 16 ? name->text.pointer : name->text.buffer;
        fn_82F6DCE0(buffer, 512, format, id->index, text, generation);
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
