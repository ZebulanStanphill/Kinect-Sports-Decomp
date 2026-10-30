typedef struct Sink Sink;
typedef struct {
    void *slot0;
    void *slot1;
    void *slot2;
    void (*write)(Sink *s, int a, int start, int end);
} SinkVtbl;
struct Sink {
    SinkVtbl *vt;
};

typedef struct {
    char pad0[0xa4];
    Sink *sink;
    char pada8[0xb0 - 0xa8];
    int total;
} Obj;

void fn_8267B598(Obj *o, int a, int start, int end)
{
    o->total += end - start;
    o->sink->vt->write(o->sink, a, start, end);
}
