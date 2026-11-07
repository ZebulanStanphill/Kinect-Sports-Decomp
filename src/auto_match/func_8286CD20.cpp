typedef unsigned int size_t;

extern "C" void *fn_8286D250(void *dst, void *src);

namespace R1 {
namespace Soundscape {

struct Member18_8286CD20 {
    int w[4];
};

class OcclusionScheduler_c {
public:
    virtual void Update();

    unsigned char m_04;
    int m_08;
    int m_0C;
    int m_10;
    float m_14;
    Member18_8286CD20 m_18;

    __forceinline OcclusionScheduler_c(int n, float r)
    {
        char tmp[16];
        m_08 = n;
        m_14 = r * r;
        m_04 = 0;
        m_0C = n;
        m_10 = 0;
        fn_8286D250(&m_18, tmp);
    }
};

}
}

extern "C" R1::Soundscape::OcclusionScheduler_c *
fn_8286CD20(R1::Soundscape::OcclusionScheduler_c *self, int n, float r)
{
    self->R1::Soundscape::OcclusionScheduler_c::OcclusionScheduler_c(n, r);
    return self;
}
