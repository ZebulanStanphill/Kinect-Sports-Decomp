long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Request_82BE5A90 {
    char pad00[0x18];
    int status;             /* 0x18 */
    void *data;             /* 0x1c */
    char pad20[0x44 - 0x20];
    long dataAvailable;     /* 0x44 */
} Request_82BE5A90;

extern void fn_82BE5240(Request_82BE5A90 *self, int code, const char *format, ...);

int fn_82BE5A90(Request_82BE5A90 *self, void **out)
{
    if (self->status != 0x4000) {
        fn_82BE5240(self, 0x450, ": Request status is not REQUEST_STATUS_COMPLETE_PARSED, instead it is: %d", self->status);
        return 0;
    }
    if (_InterlockedCompareExchange(&self->dataAvailable, 0, 1) != 0) {
        *out = self->data;
        return 1;
    }
    fn_82BE5240(self, 0x450, " of RequestObject Data. Ownership not available");
    return 0;
}
