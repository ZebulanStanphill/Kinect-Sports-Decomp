/* std::basic_streambuf<char>::snextc (VC10 <streambuf>). */
typedef struct StreamBuf_822EF598 StreamBuf_822EF598;

typedef struct StreamBufVtbl_822EF598 {
    void *slots[6];
    int (*underflow)(StreamBuf_822EF598 *self);  /* 0x18 */
} StreamBufVtbl_822EF598;

struct StreamBuf_822EF598 {
    StreamBufVtbl_822EF598 *vt;  /* 0x00 */
    char pad4[0x20 - 0x4];
    unsigned char **next;        /* 0x20 */
    char pad24[0x30 - 0x24];
    int *count;                  /* 0x30 */
};

extern int fn_822EF538(StreamBuf_822EF598 *self);

static __forceinline int Gnavail(StreamBuf_822EF598 *self) { return *self->next != 0 ? *self->count : 0; }
static __forceinline unsigned char *Gnpreinc(StreamBuf_822EF598 *self) { --*self->count; return ++(*self->next); }
static __forceinline unsigned char *Gptr(StreamBuf_822EF598 *self) { return *self->next; }
static __forceinline int Sgetc(StreamBuf_822EF598 *self)
{
    return 0 < Gnavail(self) ? *Gptr(self) : self->vt->underflow(self);
}

int fn_822EF598(StreamBuf_822EF598 *self)
{
    return 1 < Gnavail(self) ? *Gnpreinc(self)
        : -1 == fn_822EF538(self) ? -1 : Sgetc(self);
}
