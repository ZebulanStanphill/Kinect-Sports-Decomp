typedef struct Stream_82E6E5A0 Stream_82E6E5A0;
typedef struct {
    void *slots[7];
    long (*SetPosition)(Stream_82E6E5A0 *self, __int64 pos);
} StreamVtbl_82E6E5A0;
struct Stream_82E6E5A0 {
    StreamVtbl_82E6E5A0 *vt;
    int pad[5];
    __int64 position;
};

long fn_82E6E5A0(Stream_82E6E5A0 *self, int origin, __int64 offset, int reserved, void *out)
{
    __int64 pos;
    if (out == 0)
        return 0x80004003;
    if (origin != 0 && origin != 1)
        return 0x80070057;
    pos = 0;
    if (origin == 0)
        pos = offset;
    else if (origin == 1)
        pos = self->position + offset;
    return self->vt->SetPosition(self, pos);
}
