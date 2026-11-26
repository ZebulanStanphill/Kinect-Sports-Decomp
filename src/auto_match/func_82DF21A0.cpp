// hkpMountedBallGun::fireGun(hkpWorld *, const hkTransform &) (vtable slot 4).
// Needs /O2 /QVMXReserve (flag file); the direction column stays in v127.
#include "havok/hkpRigidBody.h"
#include "havok/hkpRigidBodyCinfo.h"
#include "havok/hkpSphereShape.h"
#include "havok/hkpWorld.h"

extern "C" {
void fn_82DEA600(const hkpShape *shape, hkReal mass, hkpRigidBodyCinfo &ci);
int fn_82DF0890(const hkpWorld *world, const hkVector4 &from, hkReal radius, const hkVector4 &to, struct SweepSphereOut &out);
void fn_82DF0778(const hkVector4 &position, const hkVector4 &target, const hkVector4 &gravity, hkReal speed, hkVector4 &velocity);
hkpRigidBody *fn_82D81078(hkpWorld *world, hkpRigidBody *body, int activation);
hkBool fn_82D81240(hkpWorld *world, hkpRigidBody *body);
}

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

// Linker-folded float constants. 0.2f, 0.4f, 0.05f, 200.0f, 2.0f and 1.0f are plain literals: the compiler
// names them __real@..., which is what the original refers to (symbols.txt for 200.0f, 2.0f and 1.0f, the
// rename map for the others).

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
	hkVector4 dir;
	dir = viewTransform.getColumn(0);
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
	ci.m_friction = 1.0f;
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
		hkVector4 to;
		to = out.m_position;
		for (int i = 0; i < self->m_listeners.getSize(); i++)
			self->m_listeners[i]->gunFiredCallback(self->m_position, to);
	}

	hkpRigidBody *body = new hkpRigidBody(ci);
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
