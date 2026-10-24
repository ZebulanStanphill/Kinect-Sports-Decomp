// hkpMountedBallGun::fireGun(hkpWorld *, const hkTransform &) (vtable slot 4).
// Needs /O2 /QVMXReserve (flag file); the direction column stays in v127.
#include "havok/hkBase.h"
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" {
__vector4 __vaddfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __lvlx(const void *, int);
}

class hkSimdReal {
public:
	// Needs the real intrinsic signature __lvlx(const void *, int): then a literal argument is read from its
	// __real@ constant in .rdata (lis/addi + lvlx) instead of being stored to a stack slot first.
	HK_FORCE_INLINE hkSimdReal(const hkReal &x) { m_real = __vspltw(__lvlx(&x, 0), 0); }
	__vector4 m_real;
};

class hkVector4 {
public:
	HK_FORCE_INLINE hkVector4() {}
	HK_FORCE_INLINE hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
	HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
	HK_FORCE_INLINE void setAdd4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vaddfp(a.m_quad, b.m_quad); }
	HK_FORCE_INLINE void setAddMul4(const hkVector4 &a, const hkVector4 &b, hkSimdReal r) { m_quad = __vmaddfp(b.m_quad, r.m_real, a.m_quad); }
	HK_FORCE_INLINE void setMul4(hkSimdReal r, const hkVector4 &a) { m_quad = __vmulfp(a.m_quad, r.m_real); }
	__vector4 m_quad;
};

class hkTransform {
public:
	HK_FORCE_INLINE const hkVector4 &getColumn(int i) const { return m_rotation[i]; }
	HK_FORCE_INLINE const hkVector4 &getTranslation() const { return m_translation; }
	hkVector4 m_rotation[3];
	hkVector4 m_translation;
};

class hkpSphereShape : public hkpConvexShape {
public:
	hkpSphereShape(hkReal radius);
	hkUint32 m_pad16[3];
};

struct hkpRigidBodyCinfo {
	hkUint32 m_collisionFilterInfo;
	hkpShape *m_shape;
	hkInt8 m_collisionResponse;
	hkUint16 m_contactPointCallbackDelay;
	hkVector4 m_position;
	hkVector4 m_rotation;
	hkVector4 m_linearVelocity;
	hkVector4 m_angularVelocity;
	hkVector4 m_inertiaTensor[3];
	hkVector4 m_centerOfMass;
	hkReal m_mass;
	hkReal m_linearDamping;
	hkReal m_angularDamping;
	hkReal m_gravityFactor;
	hkReal m_friction;
	hkReal m_restitution;
	hkReal m_maxLinearVelocity;
	hkReal m_maxAngularVelocity;
	hkReal m_allowedPenetrationDepth;
	hkInt8 m_motionType;
	hkBool m_enableDeactivation;
	hkInt8 m_solverDeactivation;
	hkInt8 m_qualityType;
	hkInt8 m_autoRemoveLevel;
	hkUint8 m_responseModifierFlags;
	hkInt8 m_numShapeKeysInContactPointProperties;
	hkBool m_forceCollideOntoPpu;
	HK_FORCE_INLINE hkpRigidBodyCinfo();
};

class hkpWorld;
class hkpRigidBody : public hkReferencedObject {
public:
	HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ENTITY);
	hkpWorld *getWorld() const { return m_world; }
	hkpWorld *m_world;          // +0x8
	char m_padC[0x9c - 0xc];
	hkReal m_damageMultiplier;  // +0x9c
	char m_padA0[0x220 - 0xa0];
};

class hkpWorld {
public:
	char m_pad[0x10];
	hkVector4 m_gravity;
};

extern "C" {
void fn_82D8B168(hkpRigidBodyCinfo *self);
void fn_82DEA600(const hkpShape *shape, hkReal mass, hkpRigidBodyCinfo &ci);
int fn_82DF0890(const hkpWorld *world, const hkVector4 &from, hkReal radius, const hkVector4 &to, struct SweepSphereOut &out);
void fn_82DF0778(const hkVector4 &position, const hkVector4 &target, const hkVector4 &gravity, hkReal speed, hkVector4 &velocity);
hkpRigidBody *fn_82D8C258(hkpRigidBody *self, const hkpRigidBodyCinfo &ci);
hkpRigidBody *fn_82D81078(hkpWorld *world, hkpRigidBody *body, int activation);
hkBool fn_82D81240(hkpWorld *world, hkpRigidBody *body);
}
HK_FORCE_INLINE hkpRigidBodyCinfo::hkpRigidBodyCinfo() { fn_82D8B168(this); }

struct SweepSphereOut {
	hkVector4 m_position;
	hkVector4 m_normal;
	hkUint32 m_shapeKey;
	hkpRigidBody *m_body;
};

class hkpFirstPersonGunBulletListener : public hkReferencedObject {
public:
	virtual void bulletCreatedCallback(hkpRigidBody *bullet);
	virtual void bulletDeletedCallback(hkpRigidBody *bullet);
	virtual void gunFiredCallback(const hkVector4 &from, const hkVector4 &to);
};

template <typename T> class hkQueue;
extern "C" void fn_82DEF8C8(hkQueue<hkpRigidBody *> *q, int capacity);
template <typename T> class hkQueue {
public:
	HK_FORCE_INLINE int getSize() const { return m_elementsInUse; }
	HK_FORCE_INLINE void setCapacity(int n) { fn_82DEF8C8(this, n); }
	HK_FORCE_INLINE void increaseCapacity()
	{
		if (m_capacity == 0) setCapacity(8);
		else setCapacity(m_capacity * 2);
	}
	HK_FORCE_INLINE void enqueue(const T &element)
	{
		if (m_elementsInUse >= m_capacity) increaseCapacity();
		if (m_tail == m_capacity) m_tail = 0;
		m_data[m_tail++] = element;
		m_elementsInUse++;
	}
	HK_FORCE_INLINE void dequeue(T &data)
	{
		data = m_data[m_head];
		if (++m_head == m_capacity) m_head = 0;
		m_elementsInUse--;
	}
	T *m_data;
	int m_capacity;
	int m_head;
	int m_tail;
	int m_elementsInUse;
};

// Linker-folded float constants. 0.2f, 0.4f, 0.05f, 200.0f and 2.0f are plain literals: the compiler names
// them __real@..., which is what the original refers to (symbols.txt for 200.0f and 2.0f, the rename
// map for the others). 1.0f is still lbl_82002AE0, which Matching C units use.
extern "C" const float lbl_82002AE0;   // 1.0f

class hkpFirstPersonGun : public hkReferencedObject {
public:
	char m_pad8[0xc];
	hkArray<hkpFirstPersonGunBulletListener *> m_listeners;   // +0x14
};

class hkpBallGun : public hkpFirstPersonGun {
public:
	hkReal m_bulletRadius;        // +0x20
	hkReal m_bulletVelocity;      // +0x24
	hkReal m_bulletMass;          // +0x28
	hkReal m_damageMultiplier;    // +0x2c
	int m_maxBulletsInWorld;      // +0x30
	char m_pad34[0xc];
	hkVector4 m_bulletOffsetFromCenter;   // +0x40
	hkQueue<hkpRigidBody *> *m_addedBodies;  // +0x50
};

class hkpMountedBallGun : public hkpBallGun {
public:
	hkVector4 m_position;   // +0x60
};

extern "C" void fn_82DF21A0(hkpMountedBallGun *self, hkpWorld *world, const hkTransform &viewTransform)
{
	hkVector4 dir = viewTransform.getColumn(0);
	hkVector4 rayFrom; rayFrom.setAdd4(viewTransform.getTranslation(), dir);
	hkVector4 rayTo; rayTo.setAddMul4(rayFrom, dir, 200.0f);

	hkpRigidBodyCinfo ci;
	ci.m_shape = new hkpSphereShape(self->m_bulletRadius);
	ci.m_position = self->m_position;
	ci.m_allowedPenetrationDepth = 0.01f;
	ci.m_qualityType = 6;
	ci.m_motionType = 2;
	ci.m_mass = self->m_bulletMass;
	ci.m_restitution = 0.2f;
	ci.m_friction = lbl_82002AE0;
	fn_82DEA600(ci.m_shape, self->m_bulletMass * 2.0f, ci);
	ci.m_mass = self->m_bulletMass;
	ci.m_linearDamping = 0.0f;
	ci.m_angularDamping = 0.4f;

	SweepSphereOut out;
	if (fn_82DF0890(world, rayFrom, 0.05f, rayTo, out) == 0)
		fn_82DF0778(ci.m_position, out.m_position, world->m_gravity, self->m_bulletVelocity, ci.m_linearVelocity);
	else
		ci.m_linearVelocity.setMul4(self->m_bulletVelocity, dir);

	{
		hkVector4 to = out.m_position;
		for (int i = 0; i < self->m_listeners.getSize(); i++)
			self->m_listeners[i]->gunFiredCallback(self->m_position, to);
	}

	hkpRigidBody *body = fn_82D8C258((hkpRigidBody *)hkpRigidBody::operator new(sizeof(hkpRigidBody)), ci);
	ci.m_shape->removeReference();
	body->m_damageMultiplier = self->m_damageMultiplier;
	for (int i = 0; i < self->m_listeners.getSize(); i++)
		self->m_listeners[i]->bulletCreatedCallback(body);
	fn_82D81078(world, body, 1);
	self->m_addedBodies->enqueue(body);

	if (self->m_addedBodies->getSize() > self->m_maxBulletsInWorld) {
		hkpRigidBody *rb;
		self->m_addedBodies->dequeue(rb);
		for (int i = self->m_listeners.getSize() - 1; i >= 0; i--)
			self->m_listeners[i]->bulletDeletedCallback(rb);
		if (rb->getWorld())
			fn_82D81240(rb->getWorld(), rb);
		rb->removeReference();
	}
}
