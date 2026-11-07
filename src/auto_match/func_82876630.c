typedef struct Overlapped_82876630 {
    unsigned int internal;
    unsigned int internalHigh;
    unsigned int offset;
    unsigned int offsetHigh;
    void *event;
} Overlapped_82876630;

typedef struct File_82876630 {
    int unk0[5];
    void *handle;
} File_82876630;

typedef struct Request_82876630 {
    unsigned __int64 offset;
    unsigned int size;
    unsigned int transferred;
} Request_82876630;

extern int fn_82A29FE0(void *handle, void *buffer, unsigned int size, unsigned int *transferred, Overlapped_82876630 *overlapped);

int fn_82876630(void *self, File_82876630 *file, int unused, void *buffer, Request_82876630 *req)
{
    Overlapped_82876630 overlapped;

    overlapped.event = 0;
    overlapped.offset = (unsigned int)req->offset;
    overlapped.offsetHigh = (unsigned int)(req->offset >> 32);
    return (fn_82A29FE0(file->handle, buffer, req->size, &req->transferred, &overlapped) == 0) + 1;
}
