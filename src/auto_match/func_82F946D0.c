typedef struct Sink_82F946D0 Sink_82F946D0;
struct Sink_82F946D0 {
    struct {
        void *slots[9];
        void (*send)(Sink_82F946D0 *self, unsigned char kind, int a, int b, int c);
    } *vt;
};

typedef struct Obj_82F946D0 {
    char pad[0x18];
    void *sink;
} Obj_82F946D0;

extern Sink_82F946D0 *fn_82F93A00(void *ref);

void fn_82F946D0(Obj_82F946D0 *self, unsigned char kind, int a, int b, int c)
{
    if (fn_82F93A00(&self->sink) != 0) {
        Sink_82F946D0 *s = fn_82F93A00(&self->sink);
        s->vt->send(s, kind, a, b, c);
    }
}
