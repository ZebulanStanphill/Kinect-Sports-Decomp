typedef struct Ops {
    int (*f0)(void);
    int (*f4)(void);
    int (*f8)(void);
    int (*ioctl)(int h, int code, void *buf);
} Ops;

typedef struct { char b[0x24]; } Blk;

typedef struct Dev {
    char pad0[0x14];
    char sub[0x240 - 0x14];
    Blk entries[(0x298 - 0x240) / 0x24];
    char pad[0x298 - 0x240 - 2 * 0x24];
    Ops *ops;
} Dev;

typedef struct Req {
    char pad0[0x18];
    void *file;
    Blk data;
    char pad40[0x48 - 0x40];
    int handle;
} Req;

typedef struct { unsigned int status; unsigned int info; } IO_STATUS_BLOCK;

extern void KeEnterCriticalRegion(void);
extern void KeLeaveCriticalRegion(void);
extern int NtFlushBuffersFile(void *file, IO_STATUS_BLOCK *iosb);
extern void *memcpy(void *d, const void *s, unsigned int n);
extern void fn_82A1C5E0(void *p);

void fn_82A1CA50(int index, Dev *dev, Req *req)
{
    IO_STATUS_BLOCK iosb;
    void *data;

    KeEnterCriticalRegion();
    dev->ops->ioctl(req->handle, 0, 0);
    if (dev->ops->ioctl(req->handle, 2, 0) >= 0) {
        data = &req->data;
        if (dev->ops->ioctl(req->handle, 3, data) >= 0) {
            dev->ops->ioctl(req->handle, 4, data);
            dev->entries[index] = req->data;
            fn_82A1C5E0(dev->sub);
            NtFlushBuffersFile(req->file, &iosb);
        }
    }
    dev->ops->ioctl(req->handle, 1, 0);
    KeLeaveCriticalRegion();
}
