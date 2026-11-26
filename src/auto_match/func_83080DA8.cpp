#include "havok/hkTransform.h"
#include "havok/hkSweptTransform.h"

static __forceinline void _lerp2(const hkSweptTransform &sweptTrans, float t, hkQuaternion &quatOut)
{
    hkVector4 rot0;
    rot0 = sweptTrans.m_rotation0.m_vec;
    hkVector4 rot1;
    rot1 = sweptTrans.m_rotation1.m_vec;
    hkVector4 qHalf;
    qHalf.setAdd4(rot0, rot1);
    {
        float len2 = qHalf.lengthSquared4();
        float r = 0.75f - 0.125f * len2;
        r = r * (1.5f - len2 * r * r * 0.5f);
        qHalf.mul4(r);
    }
    if (t < 0.5f) {
        quatOut.m_vec.setInterpolate4(rot0, qHalf, t * 2.0f);
    } else {
        quatOut.m_vec.setInterpolate4(qHalf, rot1, t * 2.0f - 1.0f);
    }
    quatOut.m_vec.normalize4();
}

static __forceinline void _lerp2(const hkSweptTransform &sweptTrans, float t, hkTransform &transformOut)
{
    hkQuaternion qt;
    _lerp2(sweptTrans, t, qt);
    transformOut.setRotation(qt);
    transformOut.getTranslation().setInterpolate4(sweptTrans.m_centerOfMass0, sweptTrans.m_centerOfMass1, t);
    hkVector4 centerShift;
    centerShift._setRotatedDir(transformOut.getRotation(), sweptTrans.m_centerOfMassLocal);
    transformOut.getTranslation().sub4(centerShift);
}

extern "C" void fn_83080DA8(const hkSweptTransform &sweptTrans, float t, float deltaTimeAddOn, hkTransform &transformOut)
{
    float ri = (t - sweptTrans.getBaseTime() + deltaTimeAddOn) * sweptTrans.getInvDeltaTime();
    _lerp2(sweptTrans, ri, transformOut);
}
