typedef struct Sink_82E09C88 { struct SinkVt_82E09C88 *vt; } Sink_82E09C88;
typedef struct SinkVt_82E09C88 {
    void *s[3];
    void (*fc)(Sink_82E09C88 *self, unsigned int v);
} SinkVt_82E09C88;

typedef struct Obj_82E09C88 {
    int f0;
    Sink_82E09C88 *sink;
} Obj_82E09C88;

extern unsigned int fn_82CFC288(unsigned int v);

void fn_82E09C88(Obj_82E09C88 *o, unsigned int *p, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        if (p[i] & 1) {
            p[i] = fn_82CFC288(p[i]);
            o->sink->vt->fc(o->sink, p[i]);
        }
    }
}
