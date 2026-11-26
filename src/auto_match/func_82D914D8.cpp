// Takes the actions of an entity whose other entities are all fixed out of the entity's island: each such
// action is appended to `out` with a reference, removed from the island (fn_82DAF6D0), and the island is
// queued once in the world's m_dirtySimulationIslands (probably hkpWorldOperationUtil's
// removeAttachedActionsFromFixedIsland). Keeps its fn_ name.
#include "havok/hkpAction.h"
#include "havok/hkpEntity.h"
#include "havok/hkpWorld.h"

// hkpSimulationIsland: only the members this function uses (the class has no header yet).
class hkpSimulationIsland {
public:
    char m_pad[0x22];
    hkUint16 m_dirtyListIndex;   // +0x22: its index in the world's list, 0xffff when not queued (Havok's name)
    char m_pad24;
    hkUint8 m_flags;             // +0x25
};

extern "C" void fn_82DAF6D0(hkpSimulationIsland *island, hkpAction *action);

extern "C" void fn_82D914D8(hkpWorld *world, hkpEntity *src, hkArray<hkpAction *> *out)
{
    hkpSimulationIsland *island = src->m_simulationIsland;
    hkInplaceArray<hkpEntity *, 16> entities;

    for (int i = 0; i < src->m_actions.getSize(); i++) {
        hkpAction *action = src->m_actions.m_data[i];
        action->getEntities(entities);
        hkBool all = true;
        for (int j = 0; j < entities.getSize(); j++) {
            hkpEntity *entity = entities[j];
            if (entity->m_motion.m_type != hkpMotion::MOTION_FIXED && entity != src) {
                all = false;
                break;
            }
        }
        if (all) {
            out->pushBack(action);
            action->addReference();
            fn_82DAF6D0(island, action);
            island->m_flags = (island->m_flags & 0xf3) | 4;
            if (island->m_dirtyListIndex == 0xffff) {
                island->m_dirtyListIndex = (unsigned short)world->m_dirtySimulationIslands.m_size;
                world->m_dirtySimulationIslands.pushBack(island);
            }
        }
    }
}
