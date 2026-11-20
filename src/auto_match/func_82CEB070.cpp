#include "havok/hkClass.h"

extern "C" int fn_82CFBBF0(const char *a, const char *b);  // hkString::strCmp

// hkClass::getMemberIndexByName(const char *) const, kept on its fn_ name: the first member
// (inherited ones included) whose name equals the key.
extern "C" int fn_82CEB070(const hkClass *self, const char *key)
{
  int i;
  int total;
  int idx;
  const hkClass *s;
  const hkClassMember *e;

  for (i = 0; i < self->getNumMembers(); i++) {
    // getMember(i), inlined
    total = self->m_numDeclaredMembers;
    for (s = self->m_parent; s != 0; s = s->m_parent) {
      total = s->m_numDeclaredMembers + total;
    }
    s = self;
    idx = i - total;
    do {
      idx = s->m_numDeclaredMembers + idx;
      if (idx >= 0) {
        e = &s->m_declaredMembers[idx];
        goto found;
      }
      s = s->m_parent;
    } while (s != 0);
    e = self->m_declaredMembers;
found:
    if (fn_82CFBBF0(e->m_name, key) == 0) {
      return i;
    }
  }
  return -1;
}
