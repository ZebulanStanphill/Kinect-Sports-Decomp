typedef struct Reader_82E6F308 Reader_82E6F308;
typedef struct ReaderVtbl_82E6F308 {
    void *slots0[5];
    int (*flush)(Reader_82E6F308 *self);                            /* 0x14 */
    void *slots1[5];
    int (*process)(Reader_82E6F308 *self, unsigned __int64 index);  /* 0x2c */
} ReaderVtbl_82E6F308;

struct Reader_82E6F308 {
    ReaderVtbl_82E6F308 *vt;
    char pad4[0x34];
    int autoFlush;             /* 0x38 */
    char pad3c[0xc];
    unsigned __int64 position; /* 0x48 */
};

int fn_82E6F308(Reader_82E6F308 *self, unsigned __int64 target)
{
    unsigned __int64 i;
    int hr;

    if (target < self->position)
        return 0x80070057;
    hr = 0;
    for (i = self->position; i < target; i++) {
        hr = self->vt->process(self, i);
        if (hr < 0)
            break;
        if (self->autoFlush != 0) {
            hr = self->vt->flush(self);
            if (hr < 0)
                break;
        }
    }
    return hr;
}
