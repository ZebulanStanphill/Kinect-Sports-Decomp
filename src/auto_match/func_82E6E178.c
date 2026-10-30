typedef struct Stream_82E6E178 Stream_82E6E178;
typedef struct {
    void *f[5];
    int (*seek)(Stream_82E6E178 *self, __int64 pos);
} StreamVt_82E6E178;
struct Stream_82E6E178 { StreamVt_82E6E178 *vt; };

typedef struct {
    int x0;
    int x4;
    Stream_82E6E178 *stream;
    int xc;
    __int64 base;
    __int64 x18;
    __int64 pos;
} Obj_82E6E178;

void fn_82E6E178(Obj_82E6E178 *o, __int64 pos)
{
    Stream_82E6E178 *s = o->stream;
    int hr = s ? s->vt->seek(s, o->base + pos) : 0xc00d36bb;
    if (hr >= 0) o->pos = pos;
}
