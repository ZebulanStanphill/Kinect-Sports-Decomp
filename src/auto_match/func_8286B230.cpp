extern "C" {
void *fn_82811400(void *out, int n);
void fn_82811238(void *heap, void *p, void *r);
void fn_8286A6F8(void *p);
extern char lbl_832116F8[];
}
namespace R1 { namespace Soundscape {
struct Vec_8286B230 { int a,b,c; __forceinline ~Vec_8286B230() { fn_8286A6F8(this); } };
class ReverbFactory_i { public: virtual __forceinline ~ReverbFactory_i() {} };
class __declspec(novtable) Derived_8286B230 : public ReverbFactory_i { public: Vec_8286B230 v; virtual __forceinline ~Derived_8286B230() {} };
} }
extern "C" R1::Soundscape::Derived_8286B230 *fn_8286B230(R1::Soundscape::Derived_8286B230 *self, unsigned int flags)
{
    self->R1::Soundscape::Derived_8286B230::~Derived_8286B230();
    if (flags & 1) {
        char buf[24];
        fn_82811238(lbl_832116F8, self, fn_82811400(buf, 4));
    }
    return self;
}
