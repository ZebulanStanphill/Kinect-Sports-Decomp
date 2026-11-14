typedef struct Buffer_82820BC0 {
    char pad0[0x24];
    unsigned int capacity;
    unsigned int used;
    char pad2c[0xe];
    unsigned char active;
    char data[1];
} Buffer_82820BC0;

typedef struct Request_82820BC0 {
    int pad0;
    unsigned int align;
    unsigned int offset;
    int flags;
    unsigned int mode;
    int error;
    void *file;
    Buffer_82820BC0 *buffer;
} Request_82820BC0;

typedef struct Device_82820BC0 Device_82820BC0;
typedef int (*Callback_82820BC0)(Device_82820BC0 *dev, Request_82820BC0 *req, int result);
struct Device_82820BC0 {
    int pad0[3];
    void (*writeAsync)(void *file, char *src, unsigned int used, char *data, unsigned int capacity,
                       Callback_82820BC0 done, Request_82820BC0 *req);
};

extern int (*lbl_8320A5D0)(void *file, char *src, unsigned int used, char *data, unsigned int capacity);
extern int fn_82815268(Device_82820BC0 *dev, Request_82820BC0 *req, int error);
extern int fn_82820A80(Device_82820BC0 *dev, Request_82820BC0 *req, int result);

int fn_82820BC0(Device_82820BC0 *dev, Request_82820BC0 *req, int cancel)
{
    int result = 0;
    int status;
    unsigned int mode;
    Buffer_82820BC0 *buf;

    if (cancel != 0) {
        req->flags |= 0x8000;
    }
    if (req->flags != 0) {
        return fn_82815268(dev, req, req->error);
    }
    mode = req->mode | 0x10000;
    buf = req->buffer;
    req->mode = mode;
    if (buf->active != 0 && buf->used < buf->capacity) {
        unsigned int used = buf->used;
        unsigned int remaining = buf->capacity - used;
        char *data = buf->data;
        char *src = data + remaining + 0x40;
        if ((mode & 2) != 0) {
            if (dev->writeAsync != 0) {
                dev->writeAsync(req->file, src, used, data, buf->capacity, fn_82820A80, req);
                goto done;
            }
        } else if (lbl_8320A5D0 != 0) {
            status = lbl_8320A5D0(req->file, src, used, data, buf->capacity);
            goto finish;
        }
    }
    status = 0;
finish:
    result = fn_82820A80(dev, req, status);
done:
    return result;
}
