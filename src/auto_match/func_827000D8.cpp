extern "C" {
long _InterlockedExchangeAdd(volatile long *value, long amount);
void fn_8267BE38(void *data);
void *fn_8267B890(void *heap, unsigned int size, int flags);
void fn_82696BC8(void *destination, void *source);
void fn_8267C4F0(void *object);
void fn_8267C4C8(void *object);
void fn_826FF580(void *self, void *request);
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
    unsigned int kind; /* 0x04 */
    char padding[0x38];
    unsigned int id; /* 0x40 */
    char padding2[0x1c];
    char source[0x10]; /* 0x60 */
    void *context;     /* 0x70 */
    char padding3[0x0c];
    FileRequest_826FC2F0(const String_8268C510 &path, int flags, unsigned char enabled, int mode);

    static void *operator new(unsigned int size, void *heap)
    {
        return fn_8267B890(heap, size, 0);
    }
};

struct Interface_827000D8 {
    virtual void vf0();
    virtual void vf4();
    virtual void vf8();
    virtual void *allocate(int size);
};

struct Object_827000D8 {
    char padding[8];
    Interface_827000D8 allocator;
    char padding2[8];
    void *heap; /* 0x14 */
    char padding3[0xb08];
    FileRequest_826FC2F0 *head; /* 0xb20 */
    unsigned int nextId;
};

extern "C" void fn_827000D8(Object_827000D8 *self, void *source, void *context, const char *path, int flags)
{
    FileRequest_826FC2F0 *request = new (self->heap) FileRequest_826FC2F0(path, flags, 0, 0);
    if (request != 0) {
        request->kind = 0x10;
        fn_82696BC8(request->source, source);
        if (context != 0) {
            fn_8267C4C8(context);
        }
        if (request->context != 0) {
            fn_8267C4F0(request->context);
        }
        request->context = context;
        void *allocation = self->allocator.allocate(0x17);
        if (allocation != 0) {
            fn_8267C4F0(allocation);
            fn_826FF580(self, request);
        } else {
            request->id = ++self->nextId;
            FileRequest_826FC2F0 *last = self->head;
            if (last == 0) {
                self->head = request;
            } else {
                while (last->next != 0) {
                    last = last->next;
                }
                last->next = request;
            }
        }
    }
}
