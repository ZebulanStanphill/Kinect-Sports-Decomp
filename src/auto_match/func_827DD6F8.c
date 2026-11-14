typedef struct Overlapped_827DD6F8 {
    char pad0[0x10];
    void *event;           /* 0x10, OVERLAPPED.hEvent */
} Overlapped_827DD6F8;

typedef struct Request_827DD6F8 {
    void *file;            /* 0x00 */
    void *op;              /* 0x04 */
    char pad8[0x18 - 0x8];
    unsigned int transferred;        /* 0x18 */
    Overlapped_827DD6F8 *overlapped; /* 0x1c */
} Request_827DD6F8;

extern void *fn_827D9ED0(void *file);
extern int fn_827D50B8(void *op);
extern int fn_82A29AC0(void *handle, Overlapped_827DD6F8 *overlapped, unsigned int *transferred, int wait);
extern unsigned int fn_82A1F470(void);
extern int fn_82A1E810(void *handle);

unsigned int fn_827DD6F8(void *self, Request_827DD6F8 *req)
{
    void *file = req->file;
    Overlapped_827DD6F8 *overlapped = req->overlapped;
    unsigned int err;

    if (fn_827D9ED0(file) != (void *)-1 &&
        (fn_827D50B8(req->op) == 0x3e5 || fn_827D50B8(req->op) == 0x3e4)) {
        if (fn_82A29AC0(fn_827D9ED0(file), overlapped, &req->transferred, 0) == 0) {
            err = fn_82A1F470();
            return err == 0x26 ? 0 : err;
        }
        return 0;
    }
    if (overlapped->event != 0)
        fn_82A1E810(overlapped->event);
    return 6;
}
