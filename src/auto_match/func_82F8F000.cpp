class Sink_82F8F000 {
public:
    virtual void f0();
    virtual void Remove(void *entry);
};

struct Obj_82F8F000 {
    char *vt;
    Sink_82F8F000 *sink;
    int entry;
};

extern "C" char lbl_8216BAA8[];

extern "C" void fn_82F8F000(Obj_82F8F000 *self)
{
    self->vt = lbl_8216BAA8;
    if (self->sink != 0) {
        self->sink->Remove(&self->entry);
    }
}
