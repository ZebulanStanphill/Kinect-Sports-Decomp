#include "havok/hkTransform.h"
// Havok sphere query on a node: reports the node itself to the collector (slot 3) when the point
// lies within the radius of its centre (+0x40), with the distance, then transforms the point into the node's local
// space (with the transform at +0x10) and passes the query on to every child (slot 6).
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

class Node_82CEFE90;

class Collector_82CEFE90 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void addNode(Node_82CEFE90 *node, float distance);
};

class Child_82CEFE90 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void querySphere(const hkVector4 &center, float radius, Collector_82CEFE90 *collector);
};

class Node_82CEFE90 {
public:
    char pad0[0x10];
    hkTransform m_transform;            // 0x10
    Child_82CEFE90 **m_children;        // 0x50
    int m_numChildren;                  // 0x54
};

extern "C" void fn_82CEFE90(Node_82CEFE90 *self, const hkVector4 &center, float radius, Collector_82CEFE90 *collector)
{
    hkVector4 d;
    d.setSub4(center, self->m_transform.m_translation);
    float distance = d.length3();
    if (distance <= radius) {
        collector->addNode(self, distance);
    }
    if (self->m_numChildren > 0) {
        hkVector4 local;
        local.setTransformedInversePos(self->m_transform, center);
        for (int i = 0; i < self->m_numChildren; i++) {
            self->m_children[i]->querySphere(local, radius, collector);
        }
    }
}
