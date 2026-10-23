// hkpVehicleManager::~hkpVehicleManager (Physics/Vehicle/Manager/hkpVehicleManager.cpp): removes the references
// to the registered vehicles, then the array is destroyed.
#include "havok/hkBase.h"

class hkpVehicleInstance : public hkReferencedObject {
};

class hkpVehicleManager : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleManager(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_registeredVehicles(f) {}
    virtual ~hkpVehicleManager();

    hkArray<hkpVehicleInstance *> m_registeredVehicles;   // +0x8
};

hkpVehicleManager::~hkpVehicleManager()
{
    const int numVehicles = m_registeredVehicles.getSize();
    for (int i = 0; i < numVehicles; i++)
        fn_82CE4118(m_registeredVehicles[i]);   // removeReference(); the direct call keeps the original lwzx operand order
}
