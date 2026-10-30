class Allocator_8267B5E0 {
public:
    virtual void v00();
    virtual void *alloc(int size);
    virtual void free(void *p, int size);
    virtual void v0c();
    virtual void *alloc2(int size);
    virtual void free2(void *p, int size);
};

struct Tracker_8267B5E0 {
    char pad[0xa4];
    Allocator_8267B5E0 *inner;
    char pad2[0xb0 - 0xa8];
    int used;
};

extern "C" void fn_8267B5E0(Tracker_8267B5E0 *t, void *p, int size)
{
    t->used -= size;
    t->inner->free2(p, size);
}
