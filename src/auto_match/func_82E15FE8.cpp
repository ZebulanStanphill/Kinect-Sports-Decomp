// hkStaticClassNameRegistry::hkStaticClassNameRegistry(hkClass *const *, int, const char *): the classes still need their vtables fixed up (m_ready false). Which of the two constructors takes the const classes is a guess.
#include "havok/hkBase.h"
#include "havok/hkStaticClassNameRegistry.h"

hkStaticClassNameRegistry::hkStaticClassNameRegistry(hkClass *const *classes, int classVersion, const char *name)
{
    m_classes = classes;
    m_classVersion = classVersion;
    m_name = name;
    m_ready = false;
}
