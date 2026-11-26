// hkStaticClassNameRegistry::hkStaticClassNameRegistry(const hkClass *const *, int, const char *): m_ready true. Which of the two constructors takes the const classes is a guess.
#include "havok/hkBase.h"
#include "havok/hkStaticClassNameRegistry.h"

hkStaticClassNameRegistry::hkStaticClassNameRegistry(const hkClass *const *classes, int classVersion, const char *name)
{
    m_classes = const_cast<hkClass *const *>(classes);
    m_classVersion = classVersion;
    m_name = name;
    m_ready = true;
}
