#include "havok/hkBase.h"


// hkArrayUtil::constructWithCopy (POD version): a loop over n copies.
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i) {
        p[i] = tcopy;
    }
}

// hkDeallocateStack: the pointer is evaluated before the router is fetched.
template <typename T> static HK_FORCE_INLINE void deallocateStack(T *memory)
{
    *reinterpret_cast<T **>(hkMemoryRouter::getInstance().m_stack) = memory;
}

// hkLocalArray: an hkArray whose first buffer comes from the thread's stack allocator.
template <typename T> class LocalArray_82E182B0 : public hkArray<T>
{
  public:
    HK_FORCE_INLINE LocalArray_82E182B0(int capacity)
    {
        char *&current = *reinterpret_cast<char **>(hkMemoryRouter::getInstance().m_stack);
        T *memory = reinterpret_cast<T *>(current);

        current += (capacity * sizeof(T) + 127) & ~127;
        this->m_data = memory;
        this->m_capacityAndFlags = capacity | hkArrayBase<T>::DONT_DEALLOCATE_FLAG;
        m_localMemory = memory;
    }

    HK_FORCE_INLINE ~LocalArray_82E182B0()
    {
        if (m_localMemory == this->m_data) {
            this->clear();
        }
        deallocateStack(m_localMemory);
    }

    HK_FORCE_INLINE void _setSize(hkMemoryAllocator &alloc, int n, const T &fill)
    {
        int capacity = this->getCapacity();

        if (capacity < n) {
            int doubled = 2 * capacity;

            hkArrayUtil::_reserve(alloc, this, n < doubled ? doubled : n, sizeof(T));
        }
        constructWithCopy(this->m_data + this->m_size, n - this->m_size, fill);
        this->m_size = n;
    }

    HK_FORCE_INLINE void setSize(int n, const T &fill)
    {
        _setSize(hkContainerHeapAllocator::get(this), n, fill);
    }

    T *m_localMemory;
};

class StreamWriter_82E182B0
{
  public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual int write(const void *buffer, int size); // +0x10
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual int tell(); // +0x20
};

// Writes zero bytes until the stream position is a multiple of alignment.
extern "C" void fn_82E182B0(StreamWriter_82E182B0 *self, int alignment)
{
    int position = self->tell();
    LocalArray_82E182B0<char> padding(alignment);

    padding.setSize(alignment, 0);
    int remainder = position & (alignment - 1);
    if (remainder != 0) {
        self->write(padding.begin(), alignment - remainder);
    }
}
