// Destructor of GRareRendererXbox360Impl (derived from GRenderer).
extern "C" {
void fn_82679460(void *p);
void fn_826EA050(void *p);
void fn_8267BE38(void *p);
void fn_82676C88(void *a, void *b);
void fn_8267AC38(void *p);
void fn_8262FEC8(void *p);
void fn_8267C488(void *p);
}

class __declspec(novtable) GRefCountImplCore {
public:
    virtual __forceinline ~GRefCountImplCore() { fn_8267C488(this); }
};

class GRenderer : public GRefCountImplCore {
public:
    virtual ~GRenderer() {}
};

struct Ptr_82679E80 {
    void *p;
    ~Ptr_82679E80() { if (p) fn_8262FEC8(p); }
};

class GRareRendererXbox360Impl : public GRenderer {
public:
    virtual ~GRareRendererXbox360Impl();
    int pad4[9];
    Ptr_82679E80 a[19];
    Ptr_82679E80 b[19];
    Ptr_82679E80 c[5];
    char pad[0x15c - 0xd4];
    char cs[0x1d4 - 0x15c];
    void *p1d4;
    char pad2[0x21e4 - 0x1d8];
    char sub[8];
    void *p21ec;
    void *p21f0;
    void *p21f4;
    void *p21f8;
    char pad3[0x2204 - 0x21fc];
    char cs2[8];
};

GRareRendererXbox360Impl::~GRareRendererXbox360Impl()
{
    fn_82679460(this);
    fn_826EA050(cs2);
    fn_8267BE38(p21f8);
    fn_82676C88(p21ec, p21f0);
    fn_8267BE38(p21ec);
    fn_8267AC38(sub);
    fn_8267BE38(p1d4);
    fn_826EA050(cs);
}
