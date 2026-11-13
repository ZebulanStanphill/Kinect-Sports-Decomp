typedef struct Stream_82CFB158 Stream_82CFB158;

typedef struct StreamVtbl_82CFB158 {
    void *slots[8];
    int (*tell)(Stream_82CFB158 *self);
} StreamVtbl_82CFB158;

struct Stream_82CFB158 {
    StreamVtbl_82CFB158 *vt;
};

typedef struct Obj_82CFB158 {
    int a, b;
    Stream_82CFB158 *stream;
    int c;
    int base;
} Obj_82CFB158;

int fn_82CFB158(Obj_82CFB158 *o)
{
    int n;
    if (o->stream != 0)
        n = o->stream->vt->tell(o->stream);
    else
        n = 0;
    if (n >= 0)
        return o->base + n;
    return -1;
}
