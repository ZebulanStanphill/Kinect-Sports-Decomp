extern "C" void fn_8267BE38(void *);
extern "C" void *lbl_82005618[];

class GRefCountImplCore {
public:
    virtual __forceinline ~GRefCountImplCore() {}
};

struct RC { int count; int p4; };
class Obj_8267C540 : public GRefCountImplCore {
public:
    int pad;
    RC *rc;
};

extern "C" void fn_8267C540(Obj_8267C540 *self)
{
    *(void **)self = lbl_82005618;
    if (self->rc != 0) {
        self->rc->p4 = 0;
        RC *b = self->rc;
        if (--b->count == 0) fn_8267BE38(b);
    }
    self->GRefCountImplCore::~GRefCountImplCore();
}
