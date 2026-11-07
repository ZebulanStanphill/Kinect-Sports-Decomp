typedef struct Fcb_82A2FF30 {
    char pad0[0x18];
    unsigned int size;        /* 0x18 */
    unsigned int allocSize;   /* 0x1c */
    char pad20[0x15];
    unsigned char flags;      /* 0x35 */
} Fcb_82A2FF30;

typedef struct FileObj_82A2FF30 {
    char pad0[2];
    unsigned char flags;      /* 0x02 */
    char pad3[5];
    Fcb_82A2FF30 *fcb;        /* 0x08 */
    char padC[8];
    int x14;                  /* 0x14 */
    unsigned int x18;         /* 0x18 */
} FileObj_82A2FF30;

typedef struct Loc_82A2FF30 {
    int x0;
    unsigned int length;      /* 0x04 */
    int x8;
    int xC;                   /* 0x0c */
    unsigned int offset;      /* 0x10 */
    void *x14;                /* 0x14 */
    FileObj_82A2FF30 *fo;     /* 0x18 */
} Loc_82A2FF30;

typedef struct Irp_82A2FF30 {
    char pad0[0x10];
    int status;               /* 0x10 */
    unsigned int info;        /* 0x14 */
    char pad18[4];
    void *buffer;             /* 0x1c */
    char pad20[0x30];
    Loc_82A2FF30 *loc;        /* 0x50 */
} Irp_82A2FF30;

typedef struct Dev_82A2FF30 {
    char pad0[0x88];
    int status;               /* 0x88 */
} Dev_82A2FF30;

extern int lbl_83219D04[];
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void IoCompleteRequest(void *irp, int boost);
extern void *memset(void *dst, int c, unsigned int n);
extern unsigned int fn_82A2C770(void *a, void *buf, unsigned int len, unsigned int off);
extern int fn_82A2FCF8(Dev_82A2FF30 *dev, Fcb_82A2FF30 *fcb, void *buf, unsigned int len, unsigned int off);
extern int fn_82A2FDE0(Dev_82A2FF30 *dev, Fcb_82A2FF30 *fcb, void *buf, unsigned int len, unsigned int off);

void fn_82A2FF30(Dev_82A2FF30 *dev, Irp_82A2FF30 *irp)
{
    Loc_82A2FF30 *loc;
    FileObj_82A2FF30 *fo;
    Fcb_82A2FF30 *fcb;
    unsigned int len;
    unsigned int off;
    unsigned int avail;
    unsigned int end;
    int status;

    loc = irp->loc;
    fo = loc->fo;
    len = loc->length;
    fcb = fo->fcb;
    lbl_83219D04[3]++;
    RtlEnterCriticalSection(dev);
    if (dev->status != 0) {
        status = dev->status;
    } else if (fo->flags & 0x10) {
        status = (int)0xC0000128;
    } else if (fcb->flags & 2) {
        status = (int)0xC0000010;
    } else if (len == 0) {
        status = 0;
        irp->info = 0;
    } else {
        off = loc->offset;
        if (loc->xC == 0 && off < fcb->size) {
            avail = fcb->size - off;
            if (len >= avail) {
                len = avail;
            }
            end = off + len;
            if (end > fcb->allocSize || fn_82A2C770(loc->x14, irp->buffer, len, off) != 0) {
                status = fn_82A2FCF8(dev, fcb, irp->buffer, len, off);
            } else {
                status = fn_82A2FDE0(dev, fcb, irp->buffer, len, off);
            }
            if (status >= 0) {
                if (fo->flags & 1) {
                    fo->x18 = end;
                    fo->x14 = 0;
                }
                irp->info = len;
            } else {
                memset(irp->buffer, 0, len);
            }
        } else {
            status = (int)0xC0000011;
        }
    }
    RtlLeaveCriticalSection(dev);
    irp->status = status;
    IoCompleteRequest(irp, 1);
}
