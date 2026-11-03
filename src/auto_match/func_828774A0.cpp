#include <new>
extern "C" int fn_82FA52E8(int);
extern "C" int fn_82FA5538(int, int, int, int, int);

namespace R1 {
namespace Soundscape {
class CAkFilePackage {
public:
    CAkFilePackage(const unsigned int *id, unsigned int b, unsigned int c);
    virtual ~CAkFilePackage();
};
}
}

extern "C" R1::Soundscape::CAkFilePackage *fn_828774A0(const unsigned int *a, int b, int c, int d, int *out)
{
    int r;
    int n;
    R1::Soundscape::CAkFilePackage *p;
    r = fn_82FA5538(0, c + 0x2c, c + 0x2c, 9, d);
    if (r == -1) return 0;
    n = fn_82FA52E8(r);
    p = new ((void *)(n + c)) R1::Soundscape::CAkFilePackage(a, r, n);
    *out = n;
    return p;
}
