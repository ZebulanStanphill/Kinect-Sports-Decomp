#include "havok/hkBase.h"
#include "havok/hkpBroadPhaseBorder.h"
class Border_8253C838 : public hkpBroadPhaseBorder {
public:
 hkArray<int> m_a;
 hkArray<int> m_b;
};

extern "C" Border_8253C838 *fn_8253C838(Border_8253C838 *self, unsigned flags)
{
 self->m_b.~hkArray();
 self->m_a.~hkArray();
 self->hkpBroadPhaseBorder::~hkpBroadPhaseBorder();
 if (flags & 1) {
  hkMemoryRouter::getInstance().heap().blockFree(self, self->m_memSizeAndFlags);
 }
 return self;
}
