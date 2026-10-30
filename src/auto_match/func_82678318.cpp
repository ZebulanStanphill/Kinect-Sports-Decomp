struct Renderer_82675A98 {
    char pad[0x15c];
    char cs[0x1c];
};

class GRareTextureXbox360Impl {
public:
    GRareTextureXbox360Impl(Renderer_82675A98 *renderer);
    virtual void f0();
    char pad[0x34];
};

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" {
void RtlEnterCriticalSection(void *cs);
void RtlLeaveCriticalSection(void *cs);
void *fn_8267B890(void *heap, unsigned int size, int flags);
extern void *lbl_831E7E64;
}

extern "C" GRareTextureXbox360Impl *fn_82678318(Renderer_82675A98 *r)
{
    GRareTextureXbox360Impl *res;
    void *mem;

    RtlEnterCriticalSection(r->cs);
    mem = fn_8267B890(lbl_831E7E64, 0x38, 0);
    if (mem != 0) {
        res = new (mem) GRareTextureXbox360Impl(r);
    } else {
        res = 0;
    }
    RtlLeaveCriticalSection(r->cs);
    return res;
}
