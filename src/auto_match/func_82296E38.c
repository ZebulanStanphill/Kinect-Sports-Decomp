/* basic_streambuf<wchar_t>::sputc (sibling of Matching fn_822EF538, sbumpc). */
typedef struct StreamBuf_82296E38 StreamBuf_82296E38;

typedef struct StreamBufVtbl_82296E38 {
    void *slots[3];
    unsigned short (*overflow)(StreamBuf_82296E38 *self, unsigned short ch);    /* 0x0c */
} StreamBufVtbl_82296E38;

struct StreamBuf_82296E38 {
    StreamBufVtbl_82296E38 *vt;  /* 0x00 */
    char pad4[0x24 - 0x4];
    unsigned short **pnext;      /* 0x24 */
    char pad28[0x34 - 0x28];
    int *pcount;                 /* 0x34 */
};

static __forceinline int Pnavail(StreamBuf_82296E38 *self) { return *self->pnext != 0 ? *self->pcount : 0; }
static __forceinline unsigned short *Pninc(StreamBuf_82296E38 *self) { --*self->pcount; return (*self->pnext)++; }

unsigned short fn_82296E38(StreamBuf_82296E38 *self, unsigned short ch)
{
    if (0 < Pnavail(self))
        return *Pninc(self) = ch;
    return self->vt->overflow(self, ch);
}
