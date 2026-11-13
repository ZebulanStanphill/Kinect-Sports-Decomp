class Sink_82F91548 {
public:
    virtual void Add(void *entry);
    virtual void Remove(void *entry);
};

struct Obj_82F91548 {
    char *vt;
    Sink_82F91548 *sink;
    unsigned char entry;
};

extern "C" void fn_82F91548(Obj_82F91548 *self, Sink_82F91548 *sink)
{
    Sink_82F91548 *old = self->sink;
    self->sink = sink;
    if (self->sink != 0) {
        self->sink->Add(&self->entry);
    }
    if (old != 0) {
        old->Remove(&self->entry);
    }
}
