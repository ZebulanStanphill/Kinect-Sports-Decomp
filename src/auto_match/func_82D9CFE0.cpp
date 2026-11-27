// hkpConstraintChainInstanceAction::getEntities(hkArray<hkpEntity *> &)
// (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstanceAction.h): slot +0x10 of
// ??_7hkpConstraintChainInstanceAction@@6B@. In Havok it is `entitiesOut = m_constraintInstance->m_chainedEntities;`;
// the array assignment (hkArray's operator=, which the shared hkArray.h does not declare) is written out: the
// heap is fetched first, the buffer is replaced when it is too small (freed unless it is not owned), then the
// pointers are copied.
#include "havok/hkpConstraintChainInstanceAction.h"
#include "havok/hkpConstraintChainInstance.h"
#include "havok/hkMemoryRouter.h"

void hkpConstraintChainInstanceAction::getEntities(hkArray<hkpEntity *> &entitiesOut)
{
    const hkArray<hkpEntity *> &src = m_constraintInstance->m_chainedEntities;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    if (entitiesOut.getCapacity() < src.m_size) {
        if ((entitiesOut.m_capacityAndFlags & hkArray<hkpEntity *>::DONT_DEALLOCATE_FLAG) == 0)
            alloc.bufFree(entitiesOut.m_data, entitiesOut.getCapacity(), sizeof(hkpEntity *));
        int n = src.m_size;
        entitiesOut.m_data = static_cast<hkpEntity **>(alloc.bufAlloc(n, sizeof(hkpEntity *)));
        entitiesOut.m_capacityAndFlags = n;
    }
    int size = src.m_size;
    hkpEntity **dst = entitiesOut.m_data;
    entitiesOut.m_size = size;
    hkpEntity *const *from = src.m_data;
    for (int i = 0; i < size; i++)
        dst[i] = from[i];
}
