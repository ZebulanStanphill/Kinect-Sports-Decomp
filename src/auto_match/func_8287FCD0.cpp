// Initialize the object's containers, default settings, and clock values,
// then register the object with its initial mode enabled.
struct System_8287FCD0 {
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual unsigned __int64 vf0C();
};
extern "C" {
System_8287FCD0 *fn_825089A0();
void fn_825ACAC8(void *, const void *);
void fn_8287CFB8(void *, const void *, const void *);
void fn_8287DB98(void *, void *, int, int);
}
struct State_8287FCD0 {
    int prefix[4]; int v10, v14, v18; char gap1C[0xc];
    struct Containers { int pad; char first[0x1c]; char second[0x1c]; } containers;
    int v64, v68, v6C, gap70, v74, v78, v7C;
    char gap80[0x4c]; int vCC, vD0, vD4; char gapD8[0x10];
    unsigned __int64 timeE8; char tree[0x10];
    unsigned __int64 time100, interval; unsigned char flag;
    int mode, limit;
};
static void initContainers(State_8287FCD0::Containers *self, const void *tag) {
    fn_825ACAC8(self->first, tag);
    fn_825ACAC8(self->second, tag);
}
extern "C" State_8287FCD0 *fn_8287FCD0(State_8287FCD0 *self) {
    char tag;
    self->v10 = 0; self->v14 = 0; self->v18 = 0;
    initContainers(&self->containers, &tag);
    self->v64 = 0; self->v68 = 0; self->v6C = 0;
    self->v74 = 0; self->v78 = 0; self->v7C = 0;
    self->vCC = 0; self->vD0 = 0; self->vD4 = 0;
    fn_8287CFB8(self->tree, &tag, &tag);
    unsigned __int64 now = fn_825089A0()->vf0C();
    self->timeE8 = now; self->time100 = now; self->flag = 0;
    self->interval = 33; self->mode = 5; self->limit = 15;
    fn_8287DB98(self, self, 1, 0);
    return self;
}
