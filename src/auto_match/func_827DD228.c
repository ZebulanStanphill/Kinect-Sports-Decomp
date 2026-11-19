typedef struct Overlapped_827DD228 {
    unsigned int internal;     /* 0x00 */
    unsigned int internalHigh; /* 0x04 */
    unsigned int offset;       /* 0x08 */
    unsigned int offsetHigh;   /* 0x0c */
    void *event;               /* 0x10 */
} Overlapped_827DD228;

typedef struct WriteRequest_827DD228 {
    int file; /* 0x00 */
    int pad04[2];
    unsigned int position; /* 0x0c */
    unsigned int size;     /* 0x10 */
    const void *buffer;    /* 0x14 */
    int pad18;
    Overlapped_827DD228 *overlapped; /* 0x1c */
} WriteRequest_827DD228;

extern unsigned int fn_827D9ED8(int file);
extern void *fn_827D9ED0(int file);
extern unsigned int fn_827E4210(void *device);
extern unsigned int fn_82A29D80(void *handle, unsigned int *sizeHigh);
extern unsigned int fn_82A29B68(void *handle, unsigned int distance, int *distanceHigh, unsigned int method);
extern unsigned int fn_82A29CD8(void *handle);
extern void *fn_82A1E6A0(void *attributes, int manualReset, int initialState, const char *name);
extern int fn_82A29FE0(void *handle, const void *buffer, unsigned int length, unsigned int *written,
                       Overlapped_827DD228 *overlapped);
extern int fn_82A1F470(void);
extern void fn_8281C448(const char *format, ...);

int fn_827DD228(void *device, WriteRequest_827DD228 *request)
{
    int file = request->file;
    Overlapped_827DD228 *overlapped = request->overlapped;
    unsigned int alignedSize;
    unsigned int end;
    unsigned int fileSize;
    unsigned int written;

    overlapped->offset = fn_827D9ED8(file) + request->position;
    alignedSize = (fn_827E4210(device) + request->size - 1) & ~(fn_827E4210(device) - 1);
    fn_82A29D80(fn_827D9ED0(file), &fileSize);
    end = overlapped->offset + alignedSize;
    if (fileSize < end) {
        if (fn_82A29B68(fn_827D9ED0(file), end, 0, 0) == 0xffffffff) {
            return fn_82A1F470();
        }
        if (fn_82A29CD8(fn_827D9ED0(file)) == 0) {
            return fn_82A1F470();
        }
    }
    overlapped->event = fn_82A1E6A0(0, 1, 0, 0);
    overlapped->offsetHigh = 0;
    overlapped->internalHigh = 0;
    overlapped->internal = 0;
    if (fn_82A29B68(fn_827D9ED0(file), overlapped->offset, 0, 0) == 0xffffffff) {
        return fn_82A1F470();
    }
    if (fn_82A29FE0(fn_827D9ED0(file), request->buffer, alignedSize, &written, overlapped) == 0) {
        return fn_82A1F470();
    }
    fn_8281C448("Synchronous Write!");
    return 0;
}
