typedef struct Ref_826E0638 {
    int pad;
    long refs;
} Ref_826E0638;

typedef struct Str_826E0638 {
    unsigned int tagged; /* 0x0 */
    int heap;            /* 0x4 */
} Str_826E0638;

typedef struct Handle_826E0638 {
    int owned;    /* 0x0 */
    void *object; /* 0x4 */
} Handle_826E0638;

typedef struct Library_826E0638 {
    char pad0[0x1c];
    int heap; /* 0x1c */
} Library_826E0638;

typedef struct Loader_826E0638 {
    char pad0[0x14];
    char log[0xc];             /* 0x14 */
    Library_826E0638 *library; /* 0x20 */
    char pad24[4];             /* 0x24 */
    char stream[0x2ec];        /* 0x28 */
    void *altStream;           /* 0x314 */
} Loader_826E0638;

extern long _InterlockedExchangeAdd(long volatile *value, long add);
extern void fn_8267BE38(void *block);
extern void fn_82687270(void *object);
extern unsigned short fn_826A6A38(Loader_826E0638 *self);
extern void fn_8268C3A8(Str_826E0638 *s, int heap);
extern void fn_826E9530(void *stream, Str_826E0638 *s);
extern void fn_826A9280(void *log, const char *format, ...);
extern void fn_826DFA28(void *log, const char *format, ...);
extern unsigned char fn_826DC448(Library_826E0638 *library, Handle_826E0638 *handle, unsigned int *id);
extern void fn_826DF328(Library_826E0638 *library, Str_826E0638 *name, unsigned int *id,
                        Handle_826E0638 *handle);
extern char lbl_8200CB88[];

void fn_826E0638(Loader_826E0638 *self)
{
    unsigned int count = fn_826A6A38(self);
    void *log = self->log;
    unsigned int i;

    fn_826A9280(log, "  export: count = %d\n", count);
    for (i = 0; i < count; i++) {
        unsigned short id = fn_826A6A38(self);
        Str_826E0638 name;
        void *stream;
        Handle_826E0638 handle;
        unsigned int key;
        Ref_826E0638 *data;
        Library_826E0638 *library;

        fn_8268C3A8(&name, self->library->heap);
        stream = self->altStream;
        if (stream == 0) {
            stream = self->stream;
        }
        fn_826E9530(stream, &name);
        fn_826A9280(log, "  export: id = %d, name = %s\n", id, (char *)(name.tagged & ~3u) + 8);
        key = id;
        handle.owned = 0;
        handle.object = 0;
        library = self->library;
        if (fn_826DC448(library, &handle, &key)) {
            key = id;
            fn_826DF328(self->library, &name, &key, &handle);
        } else {
            fn_826DFA28(log, lbl_8200CB88, (char *)(name.tagged & ~3u) + 8);
        }
        if (handle.owned == 0 && handle.object != 0) {
            fn_82687270(handle.object);
        }
        data = (Ref_826E0638 *)(name.tagged & ~3u);
        if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
            fn_8267BE38(data);
        }
    }
}
