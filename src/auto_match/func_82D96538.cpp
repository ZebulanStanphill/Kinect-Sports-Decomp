#include "havok/hkBase.h"
#include "havok/hkpConstraintInstance.h"

// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
}

hkpConstraintInstance::~hkpConstraintInstance()
{
    fn_82DBFAA8(this);
    if (m_entities[0])
        m_entities[0]->removeReference();
    if (m_entities[1])
        m_entities[1]->removeReference();
    if (m_constraintModifiers) {
        hkpConstraintAtom *atom = m_constraintModifiers;
        while (atom->isModifierType()) {
            hkpModifierConstraintAtom *modifier = static_cast<hkpModifierConstraintAtom *>(atom);
            atom = modifier->m_child;
            hkDeallocateChunk<char>((char *)modifier, modifier->m_modifierAtomSize, HK_MEMORY_CLASS_CONSTRAINT);
        }
    }
    if (m_data)
        m_data->removeReference();
}
