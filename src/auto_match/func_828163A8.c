typedef struct Request_828163A8 {
    int pad0;
    unsigned int align;
    unsigned int offset;
    int flags;
    unsigned int mode;
    int error;
    void *file;
    int arg;
    int pad20;
    void *handle;
} Request_828163A8;

typedef struct Device_828163A8 Device_828163A8;
typedef int (*Callback_828163A8)(Device_828163A8 *dev, Request_828163A8 *req, int result);
struct Device_828163A8 {
    int pad0;
    void (*readAsync)(void *file, unsigned int offset, unsigned int size, int arg,
                      Callback_828163A8 done, Request_828163A8 *req);
};

extern int (*lbl_8320A5C8)(void *file, unsigned int offset, unsigned int size, int arg);
extern int fn_82815268(Device_828163A8 *dev, Request_828163A8 *req, int error);
extern int fn_828162C0(Device_828163A8 *dev, Request_828163A8 *req, int result);

int fn_828163A8(Device_828163A8 *dev, Request_828163A8 *req, int cancel)
{
    int result = 0;
    void *file;
    unsigned int offset;
    unsigned int size;

    if (cancel != 0) {
        req->flags |= 0x10;
    }
    if (req->flags != 0) {
        return fn_82815268(dev, req, req->error);
    }
    file = req->handle;
    if (file == 0) {
        file = req->file;
    }
    offset = req->offset;
    size = (req->align + 0x7f) & ~(req->align - 1);
    req->offset = size + offset;
    if ((req->mode & 2) != 0) {
        dev->readAsync(file, offset, size, req->arg, fn_828162C0, req);
    } else {
        result = fn_828162C0(dev, req, lbl_8320A5C8(file, offset, size, req->arg));
    }
    return result;
}
