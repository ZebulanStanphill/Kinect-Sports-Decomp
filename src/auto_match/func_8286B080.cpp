// Singleton-style lazy getter for R1::Soundscape::ReverbFactory_c (class names from RTTI;
// member names are placeholders). Callers in C units reference fn_8286B080 and lbl_8321170C.
#include <new>
namespace R1 {
namespace Soundscape {
class ReverbFactory_i { public: virtual ~ReverbFactory_i() {} };
struct List_8286B080 { void *a, *b, *c; List_8286B080() : a(0), b(0), c(0) {} };
class ReverbFactory_c : public ReverbFactory_i { public: List_8286B080 m_list; void *m_d; };
}
}
extern "C" unsigned int fn_82811400(void *buf, int n);
extern "C" void *fn_82811080(void *pool, int size, unsigned int arg);
extern "C" char lbl_832116F8[];
extern "C" R1::Soundscape::ReverbFactory_c *lbl_8321170C;
extern "C" R1::Soundscape::ReverbFactory_c *fn_8286B080(void)
{
    if (lbl_8321170C == 0) {
        unsigned char buf[32];
        unsigned int a = fn_82811400(buf, 4);
        void *mem = fn_82811080(lbl_832116F8, sizeof(R1::Soundscape::ReverbFactory_c), a);
        lbl_8321170C = new (mem) R1::Soundscape::ReverbFactory_c;
    }
    return lbl_8321170C;
}
