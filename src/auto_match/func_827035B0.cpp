extern "C" {
long _InterlockedExchangeAdd(volatile long *value, long amount);
void fn_8267BE38(void *data);
void *fn_8267B890(void *heap, unsigned int size, int flags);
int fn_8269F500(void *package);
void fn_82696BC8(void *list, void *item);
}

struct StringData_8268C510 {
    unsigned int size;
    long refs;
    char text[1];
};

struct String_8268C510 {
    unsigned int tagged;
    String_8268C510(const char *text);

    ~String_8268C510()
    {
        StringData_8268C510 *data = (StringData_8268C510 *)(tagged & ~3u);
        if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
            fn_8267BE38(data);
        }
    }
};

struct FileRequest_826FC2F0 {
    FileRequest_826FC2F0 *next;
    char padding[0x1c];
    char listeners[0x20]; /* 0x20 */
    unsigned int id;      /* 0x40 */
    char padding2[0x3c];

    static void *operator new(unsigned int size, void *heap)
    {
        return fn_8267B890(heap, size, 0);
    }
};

// A request for a file inside a package (constructor fn_826FC388).
struct PackageRequest_826FC388 : FileRequest_826FC2F0 {
    PackageRequest_826FC388(int package, const String_8268C510 &path, int flags, unsigned char enabled,
                            int mode);
};

// A request for a file by its index (constructor fn_826FC420).
struct IndexRequest_826FC420 : FileRequest_826FC2F0 {
    IndexRequest_826FC420(int index, const String_8268C510 &path, int flags, unsigned char enabled, int mode);
};

struct Entry_827035B0 {
    char padding[0x1a8];
    int index; /* 0x1a8 */
};

extern "C" Entry_827035B0 *fn_826BD928(void *table);

struct Package_827035B0 {
    char padding[0x68];
    char entries[0x18]; /* 0x68 */
    int id;             /* 0x80 */
};

struct Object_827035B0 {
    char padding[0x14];
    void *heap; /* 0x14 */
};

extern "C" void fn_826FFAD8(Object_827035B0 *self, FileRequest_826FC2F0 *request);

extern "C" void fn_827035B0(Object_827035B0 *self, Package_827035B0 *package, const char *path, int flags,
                            void *listener)
{
    FileRequest_826FC2F0 *request;
    int index;
    Entry_827035B0 *entry;

    if (package == 0) {
        return;
    }
    index = -1;
    entry = fn_826BD928(package->entries);
    if (entry != 0) {
        index = entry->index;
        package = index == -1 ? package : 0;
    }
    if (package != 0) {
        request = new (self->heap)
            PackageRequest_826FC388(package->id != 0 ? package->id : fn_8269F500(package), path, flags, 0, 0);
    } else {
        if (index == -1) {
            return;
        }
        request = new (self->heap) IndexRequest_826FC420(index, path, flags, 0, 0);
    }
    if (request != 0) {
        fn_82696BC8(request->listeners, listener);
        fn_826FFAD8(self, request);
    }
}
