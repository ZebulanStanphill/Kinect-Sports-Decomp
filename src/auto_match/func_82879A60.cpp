// R1::Soundscape::WwiseEmitter_c constructor: registers the emitter with Wwise
// as a game object named after its AudioVariant_c, reporting a failure
// ("AK::SoundEngine::RegisterGameObj( ...)"-style message), and reserves room
// for 4 events.
//
// Needs link-time code generation (objects.json "ltcg_units": []): the
// original reaches the message's second literal at an offset from the pooled
// "...)" (addi r5, r28, 8), which only LTCG's string pooling reproduces.
// std::string temporaries are opaque buffers; the string functions keep their
// fn_ names (fn_8223B688 copy constructor, fn_82230300 _Tidy, fn_8286A3D8
// insert, fn_8223DFF0 append, fn_82240378 move constructor).
#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

extern "C" {
void fn_828648B8(void *out, const void *variant);
void *fn_8223B688(void *self, const void *src);
void fn_82230300(void *self, bool built, unsigned int newsize);
void fn_82879708(void *self);
void fn_82868758(void);
unsigned int fn_82874908(void);
int fn_82FE6850(unsigned int id, unsigned int name);
void *fn_8286A3D8(void *s, int pos, const char *p, int n);
void *fn_8223DFF0(void *s, const char *p, int n);
void fn_82240378(void *out, const void *s);
void *fn_82868378(void);
void fn_8286DA10(void *a, void *b, int hr);
void fn_82360F68(void *vec, unsigned int n);
void *fn_828691F0(void);
void *fn_828681F8(void);
void *fn_8286CD88(void *mgr);
}

// vector<T *>::reserve is folded (ICF) with other instantiations: keep fn_82360F68.
template <>
__forceinline void std::vector<void *, std::allocator<void *> >::reserve(size_type count)
{
    fn_82360F68(this, count);
}

namespace R1 {
namespace Soundscape {

WwiseEmitter_c::WwiseEmitter_c(const AudioVariant_c &v, unsigned int unk)
    : variant(v), unk3C(0xFFFFFFFF), context((WwiseEventState_c *)fn_828691F0()),
      unk50(fn_8286CD88(fn_828681F8())), unk54(0), unk78(0)
{
    char t90[0x20];
    char td0[0x20];
    char t70[0x20];
    char tb0[0x20];
    char t50[0x20];
    char tf0[0x20];
    unk3C = (unsigned int)this;
    fn_828648B8(t90, &variant);
    fn_8223B688(td0, t90);
    fn_82230300(t90, true, 0);
    fn_82879708(this);
    fn_82868758();
    context.unk08 = fn_82874908();
    int hr = fn_82FE6850(unk3C, context.unk08);
    if (hr != 1) {
        fn_828648B8(t70, &variant);
        const char *str = "...)";
        void *c = fn_8223B688(tb0, t70);
        void *r = fn_8286A3D8(c, 0, str + 8, 0x25);
        r = fn_8223DFF0(r, str, 4);
        fn_82240378(t50, r);
        fn_82230300(tb0, true, 0);
        fn_82230300(t70, true, 0);
        void *cp = fn_8223B688(tf0, t50);
        fn_8286DA10(fn_82868378(), cp, hr);
        fn_82230300(t50, true, 0);
    }
    unk7C.reserve(4);
    fn_82230300(td0, true, 0);
}

} // namespace Soundscape
} // namespace R1
