typedef struct Overlapped_828765C8 {
    unsigned int internal;
    unsigned int internalHigh;
    unsigned int offset;
    unsigned int offsetHigh;
    void *event;
} Overlapped_828765C8;

typedef struct File_828765C8 {
    int unk0[5];
    void *handle;
} File_828765C8;

typedef struct Request_828765C8 {
    unsigned __int64 offset;
    unsigned int size;
    unsigned int transferred;
} Request_828765C8;

extern int fn_82A2A108(void *handle, void *buffer, unsigned int size, unsigned int *transferred, Overlapped_828765C8 *overlapped);

int fn_828765C8(void *self, File_828765C8 *file, int unused, void *buffer, Request_828765C8 *req)
{
    Overlapped_828765C8 overlapped;

    overlapped.event = 0;
    overlapped.offset = (unsigned int)req->offset;
    overlapped.offsetHigh = (unsigned int)(req->offset >> 32);
    return (fn_82A2A108(file->handle, buffer, req->size, &req->transferred, &overlapped) == 0) + 1;
}
