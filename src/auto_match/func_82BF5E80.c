long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Request_82BF5E80 {
    char pad00[0x18];
    int status;             /* 0x18 */
    char pad1c[0x50 - 0x1c];
    long dataAvailable;     /* 0x50 */
    void *mao;              /* 0x54 */
    void *order;            /* 0x58 */
    int pad5c;
    void *assets;           /* 0x60 */
    int pad64;
    void *orderInfo;        /* 0x68 */
} Request_82BF5E80;

extern void fn_82BE5240(Request_82BF5E80 *self, int code, const char *format, ...);

int fn_82BF5E80(Request_82BF5E80 *self, void **mao, void **order, void **orderInfo, void **assets)
{
    if (self->status != 0x4000) {
        fn_82BE5240(self, 0x450, ": Request status is not REQUEST_STATUS_COMPLETE_PARSED, instead it is: %d", self->status);
        return 0;
    }
    if (_InterlockedCompareExchange(&self->dataAvailable, 0, 1) != 0) {
        *mao = self->mao;
        *order = self->order;
        *orderInfo = self->orderInfo;
        *assets = self->assets;
        return 1;
    }
    fn_82BE5240(self, 0x450, " of MAO, Order, and Asset lists. Ownership not available");
    return 0;
}
