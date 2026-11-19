typedef struct Writer_82AA3310 Writer_82AA3310;

typedef struct Range_82AA31E8 {
    unsigned int value;
    unsigned int *end;
} Range_82AA31E8;

typedef struct Shader_82AA31E8 {
    unsigned int base; /* 0x00 */
    unsigned int size; /* 0x04 */
    void *source;      /* 0x08 */
    void *sourceSize;  /* 0x0c */
    char pad10[0x8];
    unsigned int count;    /* 0x18 */
    unsigned int value;    /* 0x1c */
    unsigned int header;   /* 0x20 */
    unsigned int words[1]; /* 0x24 */
} Shader_82AA31E8;

extern void fn_82AA1C90(Writer_82AA3310 *, const char *, ...);
extern void fn_82AA2720(Writer_82AA3310 *, const char *);
extern void *memset(void *dst, int value, unsigned int size);
extern void fn_82AA04E0(void);
extern void fn_82AA1EB0(void);
extern int fn_8265B510(void *source, void *sourceSize, unsigned int start, unsigned int size, void *unused4,
                       void *unused5, void *callback, Range_82AA31E8 *range, unsigned int flags,
                       void *writeFn, Writer_82AA3310 *writer, void *unused11, void *unused12);

int fn_82AA31E8(unsigned int flags, int kind, int unused, Shader_82AA31E8 *shader, Writer_82AA3310 *w,
                unsigned int offset, int unused2, unsigned int **out)
{
    unsigned int start = shader->base + offset;
    unsigned int size = shader->size;
    unsigned int mode;
    Range_82AA31E8 range;
    int hr;

    if (size != 0) {
        mode = kind != 0 ? flags | 2 : flags | 1;
        fn_82AA2720(w, "\\line");
        fn_82AA1C90(w, "\n");
        memset(&range, 0, sizeof(range));
        if (kind == 0) {
            range.value = shader->value;
            range.end = &shader->words[shader->count];
            *out = shader->words;
        } else {
            *out = &shader->header;
        }
        hr = fn_8265B510(shader->source, shader->sourceSize, start, size, 0, 0, (void *)fn_82AA04E0, &range,
                         mode, (void *)fn_82AA1EB0, w, 0, 0);
        fn_82AA2720(w, "\\line");
        fn_82AA1C90(w, "\n");
        if (hr < 0) {
            return hr;
        }
    }
    return 0;
}
