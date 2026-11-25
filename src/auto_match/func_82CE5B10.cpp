#include "havok/hkVector4.h"

extern "C" {
double sqrt(double);
float fn_82CE55B8(float x);             // hkMath::acos
double sin(double x);           // sin
}

class hkQuaternion {
public:
    hkVector4 m_vec;
};

extern "C" void fn_82CE5B10(hkQuaternion *self, const hkQuaternion &q0, const hkQuaternion &q1, float t)
{
    float cosTheta = q0.m_vec.dot4(q1.m_vec);
    float signOfT1 = 1.0f;
    if (cosTheta < 0.0f) {
        cosTheta = -cosTheta;
        signOfT1 = -1.0f;
    }

    hkVector4 slerp;
    if (cosTheta < 0.999f) {
        float theta = fn_82CE55B8(cosTheta);
        float iSinTheta = 1.0f / (float)sqrt(1.0f - cosTheta * cosTheta);
        float tTheta = t * theta;
        float t0 = (float)sin(theta - tTheta) * iSinTheta;
        float t1 = (float)sin(tTheta) * iSinTheta * signOfT1;
        slerp.setMul4(t0, q0.m_vec);
        slerp.addMul4(t1, q1.m_vec);
    } else {
        float t0 = 1.0f - t;
        float t1 = t * signOfT1;
        slerp.setMul4(t0, q0.m_vec);
        slerp.addMul4(t1, q1.m_vec);
    }
    slerp.normalize4();
    self->m_vec = slerp;
}
