unsigned short _byteswap_ushort(unsigned short value);
extern void *memset(void *destination, int value, unsigned int size);
extern int fn_82E41878(void *mux, unsigned short id, unsigned int size, unsigned char kind, int *found,
                       unsigned short *value);
extern unsigned char lbl_8214C2B0[16];

typedef struct Format_82E73268 {
    int unused;              /* 0x00 */
    unsigned int start;      /* 0x04 */
    unsigned short duration; /* 0x08 */
    unsigned short count;    /* 0x0a */
    unsigned int reserved;   /* 0x0c */
} Format_82E73268;

typedef struct Stream_82E73268 Stream_82E73268;

typedef struct StreamVtable_82E73268 {
    void *slots0[7];
    int (*setAttribute)(Stream_82E73268 *self, unsigned short index, const void *name, void *value,
                        int size); /* 0x1c */
    void *slots1[2];
    int (*getFormat)(Stream_82E73268 *self, Format_82E73268 *format);                   /* 0x28 */
    int (*getEntry)(Stream_82E73268 *self, unsigned short index, unsigned char *entry); /* 0x2c */
} StreamVtable_82E73268;

struct Stream_82E73268 {
    StreamVtable_82E73268 *vtable;
};

typedef struct Context_82E73268 {
    char pad0[0xc];
    void *mux; /* 0x0c */
    char pad10[0x1c8];
    Stream_82E73268 *stream; /* 0x1d8 */
} Context_82E73268;

int fn_82E73268(Context_82E73268 *self)
{
    int found = 0;
    unsigned short value = 0;
    Format_82E73268 format;
    unsigned char entry[0x125];
    unsigned short i;
    int hr;

    memset(&format, 0, sizeof(format));
    hr = self->stream->vtable->getFormat(self->stream, &format);
    if (hr >= 0) {
        for (i = 0; i < format.count; i++) {
            memset(entry, 0, sizeof(entry));
            hr = self->stream->vtable->getEntry(self->stream, i, entry);
            if (hr < 0) {
                break;
            }
            hr = fn_82E41878(self->mux, *(unsigned short *)entry, *(unsigned int *)(entry + 0xf), entry[6],
                             &found, &value);
            if (hr < 0) {
                break;
            }
            value = _byteswap_ushort(value);
            if (found != 0) {
                self->stream->vtable->setAttribute(self->stream, i, lbl_8214C2B0, &value, 2);
            }
        }
    }
    return hr;
}
