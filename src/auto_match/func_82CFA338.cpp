// hkDefaultError::sectionBegin (vtable slot +0x1C): pushes the id on m_sectionIds; the name is not kept.
#include "havok/hkBase.h"
#include "havok/hkError.h"

void hkDefaultError::sectionBegin(int id, const char *sectionName) { m_sectionIds.pushBack(id); }
