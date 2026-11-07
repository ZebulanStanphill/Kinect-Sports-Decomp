typedef struct Stream_826E9988 Stream_826E9988;

typedef struct StreamVtbl_826E9988 {
    void *slots0[4];
    int (*Tell)(Stream_826E9988 *self);
    void *slots5[9];
    int (*Seek)(Stream_826E9988 *self, int offset, int origin);
} StreamVtbl_826E9988;

struct Stream_826E9988 {
    StreamVtbl_826E9988 *vt;
};

int fn_826E9988(Stream_826E9988 *s)
{
    int pos;
    int len;

    pos = s->vt->Tell(s);
    if (pos >= 0) {
        s->vt->Seek(s, 0, 2);
        len = s->vt->Tell(s);
        s->vt->Seek(s, pos, 0);
        return len;
    }
    return -1;
}
