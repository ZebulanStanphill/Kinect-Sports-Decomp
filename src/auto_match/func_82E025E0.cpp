// hkxSparselyAnimatedInt::~hkxSparselyAnimatedInt, the implicit destructor
// (Common/SceneData/Attributes/hkxSparselyAnimatedInt.h): m_times, then m_ints. Out of line; the deleting
// destructors of hkxSparselyAnimatedInt and of its subclass hkxSparselyAnimatedEnum call it. The latter,
// fn_82E027A0, is a Matching C unit that calls it by its fn_ name, so it keeps that name.
#include "havok/hkxSparselyAnimatedInt.h"

extern "C" void fn_82E025E0(hkxSparselyAnimatedInt *self)
{
    // The implicit destructor, expanded (an explicit call to it would compile to a tail call).
    self->m_times.~hkArray<hkReal>();
    self->m_ints.~hkArray<hkInt32>();
    self->hkReferencedObject::~hkReferencedObject();
}
