// hkSimpleLocalFrame::getNearbyFrames(const hkVector4 &target, hkReal maxDistance, hkLocalFrameCollector &collector)
// const, under its fn_ name: reports the frame itself to the collector when the target lies within the distance
// of its position, with the distance, then transforms the target into the frame's space and asks every child.
#include "havok/hkSimpleLocalFrame.h"
extern "C" {
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltisw(int);
void __stvewx(__vector4, void *, int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}

extern "C" void fn_82CEFE90(const hkSimpleLocalFrame *self, const hkVector4 &target, hkReal maxDistance,
                            hkLocalFrameCollector *collector)
{
    hkVector4 d;
    d.setSub4(target, self->m_transform.m_translation);
    float distance = d.length3();
    if (distance <= maxDistance) {
        collector->addFrame(self, distance);
    }
    if (self->m_children.getSize() > 0) {
        hkVector4 local;
        local.setTransformedInversePos(self->m_transform, target);
        for (int i = 0; i < self->m_children.getSize(); i++) {
            self->m_children[i]->getNearbyFrames(local, maxDistance, *collector);
        }
    }
}
