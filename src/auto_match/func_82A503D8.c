typedef struct Lock Lock;
typedef struct LockVtbl {
    void *f0;
    void *f4;
    void (*lock)(Lock *l);
    void *fc;
    void *f10;
    void (*unlock)(Lock *l);
} LockVtbl;
struct Lock {
    LockVtbl *vtbl;
};

typedef struct Inner {
    char pad[0x2c];
    Lock lock;
} Inner;

typedef struct Stream Stream;
typedef struct StreamVtbl {
    void *f0;
    void *f4;
    int (*call)(Stream *s, int a, int b, int c, int d);
} StreamVtbl;
struct Stream {
    StreamVtbl *vtbl;
};

typedef struct Obj {
    char pad[0x30];
    Inner *inner;
    char pad2[0x84 - 0x34];
    Stream *stream;
} Obj;

int fn_82A503D8(Obj *o, int a, int b)
{
    int r;

    o->inner->lock.vtbl->lock(&o->inner->lock);
    r = o->stream->vtbl->call(o->stream, 0, b, a, 0xc);
    o->inner->lock.vtbl->unlock(&o->inner->lock);
    return r;
}
