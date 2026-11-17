typedef struct String_8257CF90 {
    char data[28];
} String_8257CF90;

extern void *fn_8251F720(void *, int);
extern unsigned int fn_8251FBA8(void *);
extern void *fn_8265CA60(unsigned int);
extern void *fn_82A1DD38(void *, const void *, unsigned int);
extern void fn_8265CAA0(void *);
extern void fn_8251FA58(void *);
extern char *fn_82520C40(void);
extern String_8257CF90 *fn_82230110(String_8257CF90 *, const char *);
extern void *fn_8258E3A8(char **, void *, String_8257CF90 *);
extern void fn_82230300(String_8257CF90 *, int, unsigned int);

static __forceinline int Missing_8257CF90(void *handle, void *buffer)
{
    if (handle == 0 || buffer == 0) {
        return 1;
    }
    return 0;
}

void *fn_8257CF90(void *resource, unsigned int flags)
{
    void *handle;
    char *buffer = 0;
    unsigned int size;
    char *registry;
    char *node;
    void *result;
    String_8257CF90 name;
    handle = fn_8251F720(resource, 0);
    if (handle != 0) {
        size = fn_8251FBA8(handle);
        buffer = fn_8265CA60(size);
        fn_82A1DD38(buffer, handle, size);
    }
    if (Missing_8257CF90(handle, buffer)) {
        fn_8265CAA0(0);
        if (handle != 0) {
            fn_8251FA58(handle);
        }
        return 0;
    } else {
        *(unsigned int *)(buffer + 0x44) = flags;
        registry = fn_82520C40();
        fn_8258E3A8(&node, registry + 8, fn_82230110(&name, buffer));
        fn_82230300(&name, 1, 0);
        if (node != *(char **)(registry + 0xc) &&
            *(unsigned int *)(node + 0x2c) == *(unsigned int *)(buffer + 0x40)) {
            result = (*(void *(**)(void *))(node + 0x28))(buffer);
        } else {
            result = 0;
        }
        fn_8265CAA0(buffer);
        fn_8251FA58(handle);
    }
    return result;
}
