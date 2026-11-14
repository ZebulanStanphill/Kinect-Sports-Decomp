/* basic_streambuf<char>::sputc (sibling of Matching fn_822EF538, sbumpc). */
typedef struct StreamBuf_8223FFB8 StreamBuf_8223FFB8;

typedef struct StreamBufVtbl_8223FFB8 {
    void *slots[3];
    int (*overflow)(StreamBuf_8223FFB8 *self, int ch);    /* 0x0c */
} StreamBufVtbl_8223FFB8;

struct StreamBuf_8223FFB8 {
    StreamBufVtbl_8223FFB8 *vt;  /* 0x00 */
    char pad4[0x24 - 0x4];
    char **pnext;                /* 0x24 */
    char pad28[0x34 - 0x28];
    int *pcount;                 /* 0x34 */
};

static __forceinline int Pnavail(StreamBuf_8223FFB8 *self) { return *self->pnext != 0 ? *self->pcount : 0; }
static __forceinline char *Pninc(StreamBuf_8223FFB8 *self) { --*self->pcount; return (*self->pnext)++; }

int fn_8223FFB8(StreamBuf_8223FFB8 *self, char ch)
{
    return 0 < Pnavail(self) ? (unsigned char)(*Pninc(self) = ch) : self->vt->overflow(self, (unsigned char)ch);
}
