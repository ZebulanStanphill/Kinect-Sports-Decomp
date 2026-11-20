#include "havok/hkClass.h"

// The TypeProperties table indexed by hkClassMember::Type.
extern "C" const hkClassMember::TypeProperties lbl_8317F680[];

int hkClassMember::getSizeInBytes() const
{
    int n;
    int size = -1;

    switch (m_type) {
    case TYPE_BOOL: case TYPE_CHAR: case TYPE_INT8: case TYPE_UINT8:
    case TYPE_INT16: case TYPE_UINT16: case TYPE_INT32: case TYPE_UINT32:
    case TYPE_INT64: case TYPE_UINT64: case TYPE_REAL: case TYPE_VECTOR4:
    case TYPE_QUATERNION: case TYPE_MATRIX3: case TYPE_ROTATION: case TYPE_QSTRANSFORM:
    case TYPE_MATRIX4: case TYPE_TRANSFORM:
    case TYPE_POINTER: case TYPE_FUNCTIONPOINTER: case TYPE_ARRAY:
    case TYPE_SIMPLEARRAY: case TYPE_HOMOGENEOUSARRAY: case TYPE_VARIANT: case TYPE_CSTRING:
    case TYPE_ULONG:
    case TYPE_HALF: case TYPE_STRINGPTR:
        n = m_cArraySize == 0 ? 1 : m_cArraySize;
        size = lbl_8317F680[m_type].m_size * n;
        break;
    case TYPE_ENUM:
    case TYPE_FLAGS:
        n = m_cArraySize == 0 ? 1 : m_cArraySize;
        size = lbl_8317F680[m_subtype].m_size * n;
        break;
    case TYPE_STRUCT:
        n = m_cArraySize == 0 ? 1 : m_cArraySize;
        size = m_class->getObjectSize() * n;  // getStructClass(), inlined
        break;
    }
    return size;
}
