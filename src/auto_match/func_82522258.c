
typedef struct DeviceData_82522258 {
    unsigned int deviceId;       /* 0x00 */
    unsigned int deviceType;     /* 0x04 */
    unsigned __int64 totalBytes; /* 0x08 */
    unsigned __int64 freeBytes;  /* 0x10 */
    unsigned short name[27];     /* 0x18 */
} DeviceData_82522258;

typedef struct Content_82522258 {
    char pad00[0x98];
    unsigned int deviceId; /* 0x98 */
} Content_82522258;

typedef struct {
    Content_82522258 *px;
    int *rep;
} Sp_82522258;

typedef struct Manager_82522258 Manager_82522258;

typedef struct ManagerVtbl_82522258 {
    void *slots[4];
    unsigned int (*GetSaveSize)(Manager_82522258 *self); /* 0x10 */
} ManagerVtbl_82522258;

struct Manager_82522258 {
    ManagerVtbl_82522258 *vtbl; /* 0x00 */
    char pad04[0x84];
    unsigned char pending[0x18]; /* 0x88 */
    long busy;                   /* 0xa0 */
};

typedef struct Saver_82522258 {
    char pad000[0x110];
    int saving; /* 0x110 */
    char pad114[0xc];
    int slot; /* 0x120 */
} Saver_82522258;

typedef struct Request_82522258 {
    Saver_82522258 *saver; /* 0x00 */
    int a;                 /* 0x04 */
    int b;                 /* 0x08 */
    int c;                 /* 0x0c */
    int d;                 /* 0x10 */
} Request_82522258;

extern long _InterlockedDecrement(long *);
extern void fn_822315A0(int *rep);
extern Sp_82522258 *fn_827D6E18(Sp_82522258 *out, unsigned int profile, int slot);
extern void fn_82522588(Sp_82522258 *out, Sp_82522258 *in);
extern int fn_82A264E0(unsigned int deviceId, DeviceData_82522258 *data);
extern unsigned __int64 fn_82A264E8(unsigned __int64 dataSize, unsigned int count);
extern int fn_823AB478(Saver_82522258 *saver);
extern Request_82522258 *fn_82522D98(unsigned int size);
extern void fn_825224E8(Manager_82522258 *manager, Saver_82522258 *saver, int kind, void (*run)(void),
                        void (*done)(void), Request_82522258 *request);
extern void fn_82522050(void);
extern void fn_825220C8(void);
extern unsigned int lbl_83265A24;
extern Manager_82522258 *lbl_832767C8;

void fn_82522258(Saver_82522258 *self)
{
    Sp_82522258 content;
    Sp_82522258 handle;
    DeviceData_82522258 data;
    unsigned int size;
    Content_82522258 *item;
    int index;
    Request_82522258 *request;
    Manager_82522258 *manager;
    unsigned int needed;

    if (self->slot == -1) {
        return;
    }
    fn_82522588(&content, fn_827D6E18(&handle, lbl_83265A24, self->slot));
    if (handle.rep != 0) {
        fn_822315A0(handle.rep);
    }
    item = content.px;
    if (item != 0) {
        size = lbl_832767C8->vtbl->GetSaveSize(lbl_832767C8);
        fn_82A264E0(item->deviceId, &data);
        needed = fn_82A264E8(size, 0) * 2;
        if (needed <= data.freeBytes) {
            self->saving = 1;
            index = fn_823AB478(self);
            if (lbl_832767C8->pending[index] != 0) {
                lbl_832767C8->pending[index] = 0;
            } else {
                _InterlockedDecrement(&lbl_832767C8->busy);
            }
            goto done;
        }
    }
    request = fn_82522D98(0x14);
    manager = lbl_832767C8;
    request->saver = self;
    request->a = 1;
    request->b = 1;
    request->c = 0;
    fn_825224E8(manager, self, 5, fn_82522050, fn_825220C8, request);
done:
    if (content.rep != 0) {
        fn_822315A0(content.rep);
    }
}
