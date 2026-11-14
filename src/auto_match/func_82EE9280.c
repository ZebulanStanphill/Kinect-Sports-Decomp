typedef struct Request_82EE9280 Request_82EE9280;
typedef struct {
    void *f0;
    void *f4;
    void (*release)(Request_82EE9280 *);
} RequestVt_82EE9280;

typedef struct {
    unsigned int internal;
    unsigned int internalHigh;
    unsigned int offset;
    unsigned int offsetHigh;
    void *event;
} Overlapped_82EE9280;

struct Request_82EE9280 {
    RequestVt_82EE9280 *vt;
    Overlapped_82EE9280 ov;
    int pad18;
    int error;
    unsigned int bytes;
};

typedef struct {
    char pad0[0x70];
    void *port;
    char pad74[0x10a8 - 0x74];
    unsigned int timeout;
    int hasTimeout;
} Queue_82EE9280;

extern int fn_8306C6E8(void *port, unsigned int *bytes, unsigned int *key,
                       Overlapped_82EE9280 **ov, unsigned int timeout);
extern int fn_82A1F470(void);

int fn_82EE9280(Queue_82EE9280 *self, Request_82EE9280 **out)
{
    Overlapped_82EE9280 *ov = 0;
    unsigned int key = 0;
    unsigned int bytes;
    unsigned int timeout;
    int ok;
    Request_82EE9280 *req;
    int err;

    if (self->hasTimeout != 0)
        timeout = self->timeout;
    else
        timeout = 0xffffffff;
    *out = 0;
    ok = fn_8306C6E8(self->port, &bytes, &key, &ov, timeout);
    if (key == 0) {
        if (ov != 0) {
            req = (Request_82EE9280 *)((char *)ov - 4);
            req->bytes = bytes;
            if (ok == 0) {
                err = fn_82A1F470();
                req->error = err <= 0 ? err : ((err & 0xffff) | 0x80070000);
            }
            *out = req;
            return 0;
        }
    } else if (key == 1) {
        if (ov != 0) {
            req = (Request_82EE9280 *)((char *)ov - 4);
            req->vt->release(req);
            return 0;
        }
    } else {
        return 0;
    }
    fn_82A1F470();
    return 0;
}
