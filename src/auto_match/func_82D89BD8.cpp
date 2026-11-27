// hkpEntity::activate() (Physics/Dynamics/Entity/hkpEntity.cpp): an inactive, non-fixed entity in a world clears
// its inactive-frame counters, marks its island active (hkpWorldOperationUtil::markIslandActive, fn_82D90920) and
// takes the world's deactivation select flags. hkpMotion::setWorldSelectFlagsNeg is a call here: the member
// pointer keeps the header's inline member out of line, as the original calls its copy (82D80768).
#include "havok/hkpEntity.h"
#include "havok/hkpWorld.h"
#include "havok/hkpSimulationIsland.h"

// The original tests the island pointer with a signed compare (cmpwi): the int cast gives it.
static HK_FORCE_INLINE char activeMark(const hkpSimulationIsland *island)
{
    if (int(island) == 0)
        return 0;
    return island->getActiveMark();
}

extern "C" void fn_82D90920(hkpWorld *world, hkpSimulationIsland *island);   // hkpWorldOperationUtil::markIslandActive

extern "C" void fn_82D89BD8(hkpEntity *self)
{
    hkpSimulationIsland *island = self->m_simulationIsland;
    if (activeMark(island) == 0 && self->m_motion.getType() != hkpMotion::MOTION_FIXED && self->m_world)
    {
        self->m_motion.m_deactivationNumInactiveFrames[0] = 0;
        self->m_motion.m_deactivationNumInactiveFrames[1] = 0;
        fn_82D90920(self->m_world, island);
        const hkpSolverInfo &si = self->m_world->m_dynamicsStepInfo.m_solverInfo;
        void (hkpMotion::*setFlags)(int, int, int) = &hkpMotion::setWorldSelectFlagsNeg;
        (self->m_motion.*setFlags)(si.m_deactivationNumInactiveFramesSelectFlag[0],
                                   si.m_deactivationNumInactiveFramesSelectFlag[1], si.m_deactivationIntegrateCounter);
    }
}
