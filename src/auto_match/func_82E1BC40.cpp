// hkBindingClassNameRegistry::hkBindingClassNameRegistry(pairs, nextRegistry): the chained base constructor is out of line (fn_82E17540); the name pairs (null-terminated list) fill both maps. Parameter and member names are guesses.
#include "havok/hkBase.h"
#include "havok/hkBindingClassNameRegistry.h"

hkBindingClassNameRegistry::hkBindingClassNameRegistry(const ClassNamePair *pairs, const hkClassNameRegistry *nextRegistry)
    : hkChainedClassNameRegistry(nextRegistry)
{
    if (pairs) {
        for (int i = 0; pairs[i].m_first; i++) {
            m_firstToSecond.insert(pairs[i].m_first, pairs[i].m_second);
            m_secondToFirst.insert(pairs[i].m_second, pairs[i].m_first);
        }
    }
}
