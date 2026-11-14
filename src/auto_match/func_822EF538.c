typedef struct StreamBuf_822EF538 StreamBuf_822EF538;

typedef struct StreamBufVtbl_822EF538 {
    void *slots[7];
    int (*uflow)(StreamBuf_822EF538 *self);    /* 0x1c */
} StreamBufVtbl_822EF538;

struct StreamBuf_822EF538 {
    StreamBufVtbl_822EF538 *vt;  /* 0x00 */
    char pad4[0x20 - 0x4];
    unsigned char **next;        /* 0x20 */
    char pad24[0x30 - 0x24];
    int *count;                  /* 0x30 */
};

static __forceinline int Gnavail(StreamBuf_822EF538 *self) { return *self->next != 0 ? *self->count : 0; }
static __forceinline unsigned char *Gninc(StreamBuf_822EF538 *self) { --*self->count; return (*self->next)++; }
int fn_822EF538(StreamBuf_822EF538 *self)
{
    return 0 < Gnavail(self) ? *Gninc(self) : self->vt->uflow(self);
}
