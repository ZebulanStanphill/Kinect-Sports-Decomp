#include "havok/hkArray.h"

class hkpWorld;
class hkpRigidBody;
class hkpConstraintInstance;
class hkpAction;
class hkpPhantom;

class PhysicsSystem_82D89248
{
  public:
    void *vtable;                                   /* 0x0 */
    unsigned short m_memSizeAndFlags;               /* 0x4 */
    short m_referenceCount;                         /* 0x6 */
    hkArray<hkpRigidBody *> m_rigidBodies;          /* 0x8 */
    hkArray<hkpConstraintInstance *> m_constraints; /* 0x14 */
    hkArray<hkpAction *> m_actions;                 /* 0x20 */
    hkArray<hkpPhantom *> m_phantoms;               /* 0x2c */
    char *m_name;                                   /* 0x38 */
    unsigned long m_userData;                       /* 0x3c */
    hkBool m_active;                                /* 0x40 */
};

struct RemoveActionOperation_82D89460 {
    unsigned char m_type; /* 0x0 */
    hkpAction *m_action;  /* 0x4 */
};

class World_82D89460
{
  public:
    char pad0[0x88];
    void *m_pendingOperations; /* 0x88 */
    char pad8c[8];
    int m_criticalOperationsLock; /* 0x94 */
};

// hkpWorld::removeConstraint, removeEntity (hkBool results through a hidden pointer)
extern "C" hkBool *fn_82D890C8(hkBool *result, World_82D89460 *world, hkpConstraintInstance *constraint);
extern "C" hkBool *fn_82D81240(hkBool *result, World_82D89460 *world, hkpRigidBody *body);
// hkpWorld::removeActionImmediately
extern "C" void fn_82D88AE0(World_82D89460 *world, hkpAction *action);
// queue a pending world operation
extern "C" void fn_82DA6530(void *pending, RemoveActionOperation_82D89460 *operation);
// hkpWorld::removeEntityBatch, removePhantomBatch, removePhantom
extern "C" void fn_82D85E48(World_82D89460 *world, hkpRigidBody **bodies, int count);
extern "C" void fn_82D86660(World_82D89460 *world, hkpPhantom **phantoms, int count);
extern "C" void fn_82D82E28(World_82D89460 *world, hkpPhantom *phantom);

template <typename T> static __forceinline int IndexOf(const hkArray<T> &array, const T &value)
{
    int end = array.getSize();
    int i = 0;
    if (i < end) {
        const T *element = array.m_data;
        for (; i < end; i++) {
            if (*element == value) {
                return i;
            }
            element++;
        }
    }
    return -1;
}

// hkpWorld::removeAction, inlined.
static __forceinline void RemoveAction(World_82D89460 *world, hkpAction *action)
{
    if (world->m_criticalOperationsLock != 0) {
        RemoveActionOperation_82D89460 operation;
        operation.m_type = 0xb;
        operation.m_action = action;
        fn_82DA6530(world->m_pendingOperations, &operation);
        return;
    }
    fn_82D88AE0(world, action);
}

// hkpWorld::removePhysicsSystem
extern "C" void fn_82D89460(World_82D89460 *world, PhysicsSystem_82D89248 *system)
{
    hkBool result;

    for (int i = 0; i < system->m_constraints.getSize(); i++) {
        if (system->m_constraints[i] != 0) {
            fn_82D890C8(&result, world, system->m_constraints[i]);
        }
    }
    for (int i = 0; i < system->m_actions.getSize(); i++) {
        if (system->m_actions[i] != 0) {
            RemoveAction(world, system->m_actions[i]);
        }
    }
    if (IndexOf<hkpRigidBody *>(system->m_rigidBodies, 0) == -1) {
        fn_82D85E48(world, system->m_rigidBodies.begin(), system->m_rigidBodies.getSize());
    } else {
        for (int i = 0; i < system->m_rigidBodies.getSize(); i++) {
            if (system->m_rigidBodies[i] != 0) {
                fn_82D81240(&result, world, system->m_rigidBodies[i]);
            }
        }
    }
    if (IndexOf<hkpPhantom *>(system->m_phantoms, 0) == -1) {
        fn_82D86660(world, system->m_phantoms.begin(), system->m_phantoms.getSize());
    } else {
        for (int i = 0; i < system->m_phantoms.getSize(); i++) {
            if (system->m_phantoms[i] != 0) {
                fn_82D82E28(world, system->m_phantoms[i]);
            }
        }
    }
}
