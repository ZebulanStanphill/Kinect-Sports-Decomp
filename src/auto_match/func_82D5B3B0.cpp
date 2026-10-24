// hkpConvexListAgent3::process (agent3 process function for hkpConvexListShape).
// Needs /O2 /QVMXReserve (flag file) and lbl_82005344=__real@40000000 (2.0f literal, kept in f31).
// The goto into the loop makes the CFG irreducible: the placement new then needs an explicit
// pointer test (else addic.), and the "check failed" exits must be the fall-through breaks
// (if (n < 0) { ...; if (!ok) break; ... } else break;) for the original block layout.
#include "havok/hkBase.h"

extern "C" unsigned __int64 __mftb();
struct hkMonitorStream { void *a; unsigned *next; void *b; unsigned *end; };
extern "C" hkMonitorStream *KeTlsGetValue(unsigned);
extern "C" unsigned lbl_8323B4A0;
static HK_FORCE_INLINE void timer(const char *s, const char *next = 0)
{
	hkMonitorStream *t = KeTlsGetValue(lbl_8323B4A0);
	unsigned *p = t->next;
	if (p < t->end) {
		p[0] = (unsigned)s;
		if (next) p[3] = (unsigned)next;
		p[1] = (unsigned)__mftb();
		t->next = p + (next ? 4 : 3);
	}
}

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" double __fsel(double, double, double);
struct hkMath {
	static HK_FORCE_INLINE hkReal min2(hkReal x, hkReal y) { return (hkReal)__fsel(x - y, y, x); }
};
class hkVector4 {
public:
	HK_FORCE_INLINE hkVector4() {}
	HK_FORCE_INLINE hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
	HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
	__vector4 m_quad;
};
class hkTransform {
public:
	hkVector4 m_rotation[3];
	hkVector4 m_translation;
};

class hkpShape;
class hkpCollidable;
class hkpCdBody {
public:
	HK_FORCE_INLINE const hkpCollidable *getRootCollidable() const
	{
		const hkpCdBody *body = this;
		while (body->m_parent) body = body->m_parent;
		return (const hkpCollidable *)body;
	}
	const hkpShape *m_shape;        // +0x0
	hkUint32 m_shapeKey;            // +0x4
	const hkTransform *m_motion;    // +0x8
	const hkpCdBody *m_parent;      // +0xc
};
class hkpCollidable : public hkpCdBody {
public:
	char m_pad10[0x3c];
	hkReal m_allowedPenetrationDepth;   // +0x4c
};

struct hkpCollisionDispatcher;
struct hkpProcessCollisionInput {
	hkpCollisionDispatcher *m_dispatcher;   // +0x0
	char m_pad4[4];
	hkReal m_tolerance;                     // +0x8
};
struct hkpConstraintOwner;
struct hkpProcessCollisionOutput {
	char m_pad0[4];
	hkpConstraintOwner *m_constraintOwner;  // +0x4
};

class hkpContactMgr : public hkReferencedObject {
public:
	enum Type { TYPE_SIMPLE_CONSTRAINT_CONTACT_MGR, TYPE_REPORT_CONTACT_MGR, TYPE_CONVEX_LIST_CONTACT_MGR };
	HK_FORCE_INLINE hkpContactMgr(Type type) : m_type(type) {}
	virtual void addContactPoint();
	virtual void reserveContactPoints();
	virtual void removeContactPoint();
	virtual void processContact();
	virtual void addToiEvent();
	virtual void removeToiEvent();
	virtual void cleanup();
	Type m_type;   // +0x8
};
class hkpMapPointsToSubShapeContactMgr : public hkpContactMgr {
public:
	HK_FORCE_INLINE hkpMapPointsToSubShapeContactMgr(hkpContactMgr *mgr) : hkpContactMgr(TYPE_CONVEX_LIST_CONTACT_MGR)
	{
		m_contactMgr = mgr;
		m_invalidPointHit = false;
	}
	virtual void addContactPoint();
	virtual void reserveContactPoints();
	virtual void removeContactPoint();
	virtual void processContact();
	virtual void addToiEvent();
	virtual void removeToiEvent();
	virtual void cleanup();
	hkpContactMgr *m_contactMgr;   // +0xc
	hkBool m_invalidPointHit;      // +0x10
};

struct hkpAgent3ProcessInput {
	const hkpCdBody *m_bodyA;
	const hkpCdBody *m_bodyB;
	const hkpCdBody *m_overrideBodyA;
	const hkpProcessCollisionInput *m_input;
	hkpContactMgr *m_contactMgr;
	hkTransform m_aTb;               // +0x20
	hkUint32 m_extra;                // +0x60
	hkVector4 m_linearTimInfo;       // +0x70
};

struct hkpGskCache {
	hkUint16 m_vertices[4];
	hkUint8 m_dimA;
	hkUint8 m_dimB;
	hkUint8 m_maxDim;
	hkUint8 m_gskFlags;   // +0xb
};
struct hkpGskManifold {
	hkUint8 m_numVertsA;
	hkUint8 m_numVertsB;
	hkUint8 m_numContactPoints;   // +0xe in the agent data
	hkUint8 m_marker;
	HK_FORCE_INLINE void init() { *(hkUint32 *)this = 0; }
};
struct hkpAgent1nSector;
struct hkpAgent1nTrack {
	hkArray<hkpAgent1nSector *> m_sectors;
};
inline void *operator new(unsigned int, void *p) throw() { return p; }
struct StreamData {
	HK_FORCE_INLINE StreamData() {}
	hkInt16 m_numTimesToCheck;
	hkpAgent1nTrack m_agentTrack;
};
// The agent data is an hkpGskCache followed by either an hkpGskManifold (gsk mode) or the
// StreamData (stream mode).
static HK_FORCE_INLINE StreamData *getStreamData(hkpGskCache *cache) { return reinterpret_cast<StreamData *>(cache + 1); }
static HK_FORCE_INLINE hkpGskManifold *getManifold(hkpGskCache *cache) { return reinterpret_cast<hkpGskManifold *>(cache + 1); }
typedef void hkpAgentData;
struct hkpAgentEntry;
class hkpShapeContainer;
class hkpConvexListShape {
public:
	char m_pad0[0x14];
	char m_container[0x30];                   // +0x14 hkpShapeContainer
	hkArray<const hkpShape *> m_childShapes;  // +0x44
};

struct __declspec(align(16)) hkpProcessCollisionOutputBackup {
	char m_data[0x1080];
};
struct GetClosestPointInput {
	const hkTransform *m_aTb;
	const hkTransform *m_transformA;
	const hkpShape *m_shapeA;
	const hkpShape *m_shapeB;
	hkReal m_collisionTolerance;
};

extern "C" {
void fn_82D5BDC0(hkpProcessCollisionOutputBackup *self, const hkpProcessCollisionOutput &output);
void fn_82D5BCE0(hkpProcessCollisionOutputBackup *self, const hkpCdBody *bodyA, const hkpCdBody *bodyB, hkpProcessCollisionOutput &output, hkpContactMgr *mgr);
void fn_82CE6820(hkTransform *self, const hkTransform &a, const hkTransform &b);
int fn_82DD6E28(const GetClosestPointInput &input, hkpGskCache *cache, hkVector4 *separatingNormal, hkVector4 &pointOnB);
void fn_82D70D40(hkpAgent1nTrack *track, hkpCollisionDispatcher *dispatcher, hkpContactMgr *mgr, hkpConstraintOwner *owner);
hkpAgentData *fn_82D69C40(const hkpAgent3ProcessInput &input, hkpAgentEntry *entry, hkpAgentData *agentData, hkVector4 *separatingNormal, hkpProcessCollisionOutput &output);
void fn_82D699A8(hkpAgentEntry *entry, hkpAgentData *agentData, hkpContactMgr *mgr, hkpConstraintOwner *owner);
void fn_82D70F30(hkpAgent1nTrack *track);
void fn_82D71B20(hkpAgent1nTrack *track, const hkpAgent3ProcessInput &input, const void *container, const hkUint32 *hitList, hkpProcessCollisionOutput &output);
extern const float lbl_82005344;   // 2.0f
extern const float lbl_82138F84;   // -HK_REAL_MAX
}

extern "C" hkpAgentData *fn_82D5B3B0(const hkpAgent3ProcessInput &input, hkpAgentEntry *entry, hkpAgentData *agentData, hkVector4 *separatingNormal, hkpProcessCollisionOutput &output)
{
	timer("LtCvxLst", "StTim");
	hkpGskCache *gskCache = (hkpGskCache *)agentData;
	const hkpConvexListShape *cls = (const hkpConvexListShape *)input.m_bodyB->m_shape;
	hkpProcessCollisionOutputBackup backup;
	fn_82D5BDC0(&backup, output);
	hkpAgentData *result;

	if (gskCache->m_gskFlags & 0x20) goto gskMode;
	while (1) {
		timer("StStream");
		int numTimesToCheck = getStreamData(gskCache)->m_numTimesToCheck;
		getStreamData(gskCache)->m_numTimesToCheck = numTimesToCheck - 1;
		if (numTimesToCheck < 0) {
			getStreamData(gskCache)->m_numTimesToCheck = 25;
			hkTransform aTb;
			fn_82CE6820(&aTb, *input.m_bodyA->m_motion, *input.m_bodyB->m_motion);
			GetClosestPointInput in;
			in.m_shapeA = input.m_bodyA->m_shape;
			in.m_shapeB = input.m_bodyB->m_shape;
			in.m_aTb = &aTb;
			in.m_transformA = input.m_bodyA->m_motion;
			in.m_collisionTolerance = input.m_input->m_tolerance;
			hkVector4 pointOnB;
			if (!fn_82DD6E28(in, gskCache, separatingNormal, pointOnB)) break;
			fn_82D70D40(&getStreamData(gskCache)->m_agentTrack, input.m_input->m_dispatcher, input.m_contactMgr, output.m_constraintOwner);
			getManifold(gskCache)->init();
			gskCache->m_gskFlags |= 0x20;
			fn_82D5BCE0(&backup, input.m_bodyA, input.m_bodyB, output, input.m_contactMgr);
		} else break;
gskMode:
		{
			hkpMapPointsToSubShapeContactMgr mgr(input.m_contactMgr);
			hkpAgent3ProcessInput in3 = input;
			in3.m_contactMgr = &mgr;
			result = fn_82D69C40(in3, entry, agentData, separatingNormal, output);
			in3.m_contactMgr = mgr.m_contactMgr;
			if (!mgr.m_invalidPointHit) {
				if (!getManifold(gskCache)->m_numContactPoints || (gskCache->m_gskFlags & 0x40)) goto done;
				hkReal penB = input.m_bodyB->getRootCollidable()->m_allowedPenetrationDepth;
				hkReal penA = input.m_bodyA->getRootCollidable()->m_allowedPenetrationDepth;
				hkReal minPen = hkMath::min2(penA, penB);
				if (separatingNormal->m_quad.f[3] >= -(minPen * 2.0f)) goto done;
			}
			fn_82D5BCE0(&backup, input.m_bodyA, input.m_bodyB, output, input.m_contactMgr);
			fn_82D699A8(entry, agentData, input.m_contactMgr, output.m_constraintOwner);
			gskCache->m_gskFlags &= ~0x20;
			StreamData *sd = getStreamData(gskCache);
			if (sd) new (sd) StreamData();
			fn_82D70F30(&getStreamData(gskCache)->m_agentTrack);
			getStreamData(gskCache)->m_numTimesToCheck = 25;
		}
	}
	{
		separatingNormal->m_quad.f[3] = lbl_82138F84;
		int n = cls->m_childShapes.m_size;
		char **stack = (char **)hkMemoryRouter::getInstance().m_stack;
		hkUint32 *hitList = (hkUint32 *)*stack;
		*stack = (char *)hitList + ((n * 4 + 4 + 127) & ~127);
		for (int i = 0; i < n; i++) hitList[i] = i;
		hitList[n] = 0xffffffff;
		fn_82D71B20(&getStreamData(gskCache)->m_agentTrack, input, cls->m_container, hitList, output);
		*(char **)hkMemoryRouter::getInstance().m_stack = (char *)hitList;
		result = getStreamData(gskCache) + 1;
	}
done:
	gskCache->m_gskFlags |= 0x40;
	timer("lt");
	return (hkpAgentData *)(((hkUlong)result + 15) & ~15);
}
