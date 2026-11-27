// hkpMountedBallGun::fireGun(hkpWorld *, const hkTransform &) (vtable slot +0x10).
// Needs /O2 /QVMXReserve (flag file); the direction column stays in v127.
// Slot +0x10 of ??_7hkpMountedBallGun@@6B@. sweepSphere and calcVelocityToTarget keep their fn_ names (the header's
// wrappers): their return and parameter types are not confirmed.
#include "havok/hkpRigidBody.h"
#include "havok/hkpRigidBodyCinfo.h"
#include "havok/hkpSphereShape.h"
#include "havok/hkpWorld.h"
#include "havok/hkQueue.h"
#include "havok/hkpMountedBallGun.h"

extern "C" {
void fn_82DEA600(const hkpShape *shape, hkReal mass, hkpRigidBodyCinfo &ci);
hkpRigidBody *fn_82D81078(hkpWorld *world, hkpRigidBody *body, int activation);
hkBool fn_82D81240(hkpWorld *world, hkpRigidBody *body);
}

// 0.2f, 0.4f, 0.05f, 200.0f, 2.0f and 1.0f are plain literals: the compiler names them __real@..., which is
// what the original refers to (symbols.txt for 200.0f, 2.0f and 1.0f, the rename map for the others).

void hkpMountedBallGun::fireGun(hkpWorld *world, const hkTransform &viewTransform)
{
	hkVector4 dir;
	dir = viewTransform.getColumn(0);
	hkVector4 rayFrom; rayFrom.setAdd4(viewTransform.getTranslation(), dir);
	hkVector4 rayTo; rayTo.setAddMul4(rayFrom, dir, 200.0f);

	hkpRigidBodyCinfo ci;
	ci.m_shape = new hkpSphereShape(m_bulletRadius);
	ci.m_position = m_position;
	ci.m_allowedPenetrationDepth = 0.01f;
	ci.m_qualityType = 6;
	ci.m_motionType = 2;
	ci.m_mass = m_bulletMass;
	ci.m_restitution = 0.2f;
	ci.m_friction = 1.0f;
	fn_82DEA600(ci.m_shape, m_bulletMass * 2.0f, ci);
	ci.m_mass = m_bulletMass;
	ci.m_linearDamping = 0.0f;
	ci.m_angularDamping = 0.4f;

	SweepSphereOut out;
	if (fn_82DF0890(world, rayFrom, 0.05f, rayTo, out) == 0)
		fn_82DF0778(ci.m_position, out.m_position, world->m_gravity, m_bulletVelocity, ci.m_linearVelocity);
	else
		ci.m_linearVelocity.setMul4(m_bulletVelocity, dir);

	{
		hkVector4 to;
		to = out.m_position;
		for (int i = 0; i < m_listeners.getSize(); i++)
			m_listeners[i]->gunFiredCallback(m_position, to);
	}

	hkpRigidBody *body = new hkpRigidBody(ci);
	ci.m_shape->removeReference();
	body->m_damageMultiplier = m_damageMultiplier;
	for (int i = 0; i < m_listeners.getSize(); i++)
		m_listeners[i]->bulletCreatedCallback(body);
	fn_82D81078(world, body, 1);
	m_addedBodies->enqueue(body);

	if (m_addedBodies->getSize() > m_maxBulletsInWorld) {
		hkpRigidBody *rb;
		m_addedBodies->dequeue(rb);
		for (int i = m_listeners.getSize() - 1; i >= 0; i--)
			m_listeners[i]->bulletDeletedCallback(rb);
		if (rb->getWorld())
			fn_82D81240(rb->getWorld(), rb);
		rb->removeReference();
	}
}
