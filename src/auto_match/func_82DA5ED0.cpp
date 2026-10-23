// hkpStiffSpringChainData's scalar deleting destructor ??_GhkpStiffSpringChainData@@UAAPAXI@Z
// (Physics/Dynamics/Constraint/Chain/StiffSpring/hkpStiffSpringChainData.h): calls the out-of-line
// destructor (fn_82DA5B50), then frees through the class allocator. The function at the end only makes the
// compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"

class hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkUlong m_userData;   // +0x8
};

class hkpConstraintChainData : public hkpConstraintData {
};

class hkpStiffSpringChainData : public hkpConstraintChainData {
public:
    virtual ~hkpStiffSpringChainData();

    struct ConstraintInfo {
        hkVector4 m_pivotInA;
        hkVector4 m_pivotInB;
        hkReal m_springLength;
        hkReal m_pad[3];
    };

    char m_atoms[0xC];               // +0xC  hkpBridgeAtoms
    hkArray<ConstraintInfo> m_infos; // +0x18
    hkReal m_tau;                    // +0x24
    hkReal m_damping;                // +0x28
    hkReal m_cfm;                    // +0x2C
};

void emitVtable_82DA5ED0(void *p) { new (p) hkpStiffSpringChainData; }
