#include "havok/hkArray.h"

class hkpWorld;
class hkpRigidBody;
class hkpAction;
class hkpPhantom;

class hkpConstraintInstance
{
  public:
    char pad000[0x14];
    int m_entities[2]; /* 0x14 */
};

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

    hkBool isActive() const
    {
        return m_active;
    }
};

extern "C" void fn_82D856F0(hkpWorld *world, hkpRigidBody **bodies, int count, int activation);
extern "C" void fn_82D81078(hkpWorld *world, hkpRigidBody *body, int activation);
extern "C" void fn_82D86288(hkpWorld *world, hkpPhantom **phantoms, int count);
extern "C" void fn_82D83B68(hkpWorld *world, hkpPhantom *phantom);
extern "C" void fn_82D888D0(hkpWorld *world, hkpAction *action);
extern "C" void fn_82D88EF8(hkpWorld *world, hkpConstraintInstance *constraint);

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

extern "C" void fn_82D89248(hkpWorld *world, PhysicsSystem_82D89248 *system)
{
    int hasBodies = system->m_rigidBodies.getSize() > 0;
    if (hasBodies) {
        if (IndexOf<hkpRigidBody *>(system->m_rigidBodies, 0) == -1) {
            fn_82D856F0(world, system->m_rigidBodies.begin(), system->m_rigidBodies.getSize(),
                        system->isActive() ? 1 : 0);
        } else {
            for (int i = 0; i < system->m_rigidBodies.getSize(); i++) {
                if (system->m_rigidBodies[i] != 0) {
                    fn_82D81078(world, system->m_rigidBodies[i], system->isActive() ? 1 : 0);
                }
            }
        }
    }
    int hasPhantoms = system->m_phantoms.getSize() > 0;
    if (hasPhantoms) {
        if (IndexOf<hkpPhantom *>(system->m_phantoms, 0) == -1) {
            fn_82D86288(world, system->m_phantoms.begin(), system->m_phantoms.getSize());
        } else {
            for (int i = 0; i < system->m_phantoms.getSize(); i++) {
                if (system->m_phantoms[i] != 0) {
                    fn_82D83B68(world, system->m_phantoms[i]);
                }
            }
        }
    }
    for (int i = 0; i < system->m_actions.getSize(); i++) {
        if (system->m_actions[i] != 0) {
            fn_82D888D0(world, system->m_actions[i]);
        }
    }
    for (int i = 0; i < system->m_constraints.getSize(); i++) {
        if (system->m_constraints[i] != 0 &&
            (system->m_constraints[i]->m_entities[0] != 0 || system->m_constraints[i]->m_entities[1] != 0)) {
            fn_82D88EF8(world, system->m_constraints[i]);
        }
    }
}
