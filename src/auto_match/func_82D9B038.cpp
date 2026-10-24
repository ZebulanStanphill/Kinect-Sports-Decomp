// hkpBallSocketChainData::hkpBallSocketChainData(). The original used float literals; the
// game's 1.0f is lbl_82002AE0 (renaming it is blocked by Matching C units), so it is declared
// as a known constant (as in func_83096D00) to let the compiler schedule its load like a literal's.
#include "havok/hkBase.h"
extern "C" __declspec(selectany) const float lbl_82002AE0 = 1.0f;
class hkpConstraintData;
extern "C" void fn_82D9FE70(void *atom, hkpConstraintData *data);   // hkpBridgeAtom::init

class hkpConstraintData : public hkReferencedObject {
public:
	hkpConstraintData() : m_userData(0) {}
	hkUlong m_userData;
};
class hkpConstraintChainData : public hkpConstraintData {};

struct hkpConstraintAtom {
	hkpConstraintAtom(hkUint16 type) : m_type(type) {}
	hkUint16 m_type;
};
struct hkpBridgeAtom : public hkpConstraintAtom {
	hkpBridgeAtom() : hkpConstraintAtom(1) {}   // TYPE_BRIDGE
	void init(hkpConstraintData *data) { fn_82D9FE70(this, data); }
	void *m_buildJacobianFunc;
	hkpConstraintData *m_constraintData;
};

class hkpBallSocketChainData : public hkpConstraintChainData {
public:
	struct ConstraintInfo { int v[8]; };
	struct Atoms { hkpBridgeAtom m_bridgeAtom; };
	hkpBallSocketChainData();
	Atoms m_atoms;                     // +0xc
	hkArray<ConstraintInfo> m_infos;   // +0x18
	hkReal m_tau;                      // +0x24
	hkReal m_damping;                  // +0x28
	hkReal m_cfm;                      // +0x2c
	hkReal m_maxErrorDistance;         // +0x30
};

hkpBallSocketChainData::hkpBallSocketChainData()
	: m_tau(0.6f), m_damping(lbl_82002AE0), m_cfm(1.1920929e-08f), m_maxErrorDistance(0.1f)
{
	m_atoms.m_bridgeAtom.init(this);
}
