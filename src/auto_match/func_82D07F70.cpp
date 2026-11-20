#include "havok/hkBase.h"

// hkLocalArray: an hkArray whose first buffer comes from the thread's stack allocator.
template <typename T> static HK_FORCE_INLINE void deallocateStack(T *memory)
{
    *reinterpret_cast<T **>(hkMemoryRouter::getInstance().m_stack) = memory;
}

template <typename T> class LocalArray_82D07F70 : public hkArray<T>
{
  public:
    HK_FORCE_INLINE LocalArray_82D07F70(int capacity)
    {
        char *&current = *reinterpret_cast<char **>(hkMemoryRouter::getInstance().m_stack);
        T *memory = reinterpret_cast<T *>(current);

        current += (capacity * sizeof(T) + 127) & ~127;
        this->m_data = memory;
        this->m_capacityAndFlags = capacity | hkArrayBase<T>::DONT_DEALLOCATE_FLAG;
        m_localMemory = memory;
    }

    HK_FORCE_INLINE ~LocalArray_82D07F70()
    {
        if (m_localMemory == this->m_data) {
            this->clear();
        }
        deallocateStack(m_localMemory);
    }

    T *m_localMemory;
};

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i) {
        p[i] = tcopy;
    }
}

template <typename T> class IndexArray_82D07F70 : public hkArrayBase<T>
{
  public:
    HK_FORCE_INLINE void pushBack(const T &e)
    {
        hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(this);

        if (this->m_size == this->getCapacity()) {
            hkArrayUtil::_reserveMore(alloc, this, sizeof(T));
        }
        constructWithCopy(this->m_data + this->m_size, 1, e);
        this->m_size++;
    }
};

// hkEnum: an enum stored in a smaller integer, read back as the enum.
template <typename ENUM, typename STORAGE> class hkEnum
{
  public:
    HK_FORCE_INLINE operator ENUM() const
    {
        return (ENUM)m_storage;
    }

    STORAGE m_storage;
};

struct hkMeshSection {
    enum MeshSectionIndexType {
        INDEX_TYPE_NONE = 0,
        INDEX_TYPE_UINT16 = 1,
        INDEX_TYPE_UINT32 = 2
    };

    enum PrimitiveType {
        PRIMITIVE_TYPE_UNKNOWN = 0,
        PRIMITIVE_TYPE_POINT_LIST = 1,
        PRIMITIVE_TYPE_LINE_LIST = 2,
        PRIMITIVE_TYPE_TRIANGLE_LIST = 3,
        PRIMITIVE_TYPE_TRIANGLE_STRIP = 4
    };

    hkEnum<PrimitiveType, hkUint8> m_primitiveType;    /* 0x00 */
    hkInt32 m_numPrimitives;                           /* 0x04 */
    hkInt32 m_numIndices;                              /* 0x08 */
    hkInt32 m_vertexStartIndex;                        /* 0x0c */
    hkInt32 m_transformIndex;                          /* 0x10 */
    hkEnum<MeshSectionIndexType, hkUint8> m_indexType; /* 0x14 */
    const void *m_indices;                             /* 0x18 */
};

extern "C" void fn_82D07808(int type, int count, int start, IndexArray_82D07F70<int> *indices);
extern "C" void fn_82D07980(int type, const int *source, int count, int offset,
                            IndexArray_82D07F70<int> *indices);
extern "C" void fn_82D07CB0(int type, const hkUint16 *source, int count, int offset,
                            hkArray<hkUint16> *indices);

extern "C" void fn_82D07F70(const hkMeshSection *section, IndexArray_82D07F70<int> *out)
{
    switch (section->m_indexType) {
    case hkMeshSection::INDEX_TYPE_NONE:
        fn_82D07808(section->m_primitiveType, section->m_numIndices, section->m_vertexStartIndex, out);
        break;
    case hkMeshSection::INDEX_TYPE_UINT16:
        switch (section->m_primitiveType) {
        case hkMeshSection::PRIMITIVE_TYPE_TRIANGLE_LIST:
        case hkMeshSection::PRIMITIVE_TYPE_TRIANGLE_STRIP: {
            LocalArray_82D07F70<hkUint16> indices(section->m_numIndices);

            fn_82D07CB0(section->m_primitiveType, (const hkUint16 *)section->m_indices, section->m_numIndices,
                        0, &indices);
            for (int i = 0; i < section->m_numIndices; i++) {
                out->pushBack(indices[i]);
            }
            break;
        }
        default:
            break;
        }
        break;
    case hkMeshSection::INDEX_TYPE_UINT32:
        switch (section->m_primitiveType) {
        case hkMeshSection::PRIMITIVE_TYPE_TRIANGLE_LIST:
        case hkMeshSection::PRIMITIVE_TYPE_TRIANGLE_STRIP:
            fn_82D07980(section->m_primitiveType, (const int *)section->m_indices, section->m_numIndices, 0,
                        out);
            break;
        default:
            break;
        }
        break;
    }
}
