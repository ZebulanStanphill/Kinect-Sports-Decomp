// hkpSimulationIsland::~hkpSimulationIsland (Physics/Dynamics/World/Simulation/hkpSimulationIsland.cpp): an empty user-written destructor; then the arrays (layout from the constructor, fn_82DB0088: m_actions at +0x38, the entities' hkInplaceArray at +0x48, the agent track's sector hkInplaceArray at +0x5C). The hkInplaceArrays are written as an hkArray plus its storage, since hkInplaceArray's implicit destructor is inlined here.
#include "havok/hkBase.h"
#include "havok/hkpSimulationIsland.h"

hkpSimulationIsland::~hkpSimulationIsland()
{
}
