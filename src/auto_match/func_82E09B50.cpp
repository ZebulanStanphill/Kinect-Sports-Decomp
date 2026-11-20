#include "havok/hkDynamicClassNameRegistry.h"

void hkDynamicClassNameRegistry::merge(const hkClassNameRegistry &mergeFrom)
{
    hkArray<const hkClass *> classes;
    mergeFrom.getClasses(classes);
    for (int i = 0; i < classes.getSize(); ++i)
        registerClass(classes[i]);
}
