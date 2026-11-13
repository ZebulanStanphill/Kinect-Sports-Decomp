class Sink_82F8EF78 {
public:
    virtual void Add(void *entry);
    virtual void Remove(void *entry);
};

struct Obj_82F8EF78 {
    char *vt;
    Sink_82F8EF78 *sink;
    unsigned char entry;
};

extern "C" char lbl_8216BAA8[];

extern "C" Obj_82F8EF78 *fn_82F8EF78(Obj_82F8EF78 *self, Sink_82F8EF78 *sink)
{
    self->vt = lbl_8216BAA8;
    self->sink = sink;
    self->entry = 0;
    if (self->sink != 0) {
        self->sink->Add(&self->entry);
    }
    return self;
}
