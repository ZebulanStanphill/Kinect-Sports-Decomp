// Small array of 0x30-byte elements: makes room at index and copies count elements in.
// It matches only as a member function (the array base is the second operand of the last add).

struct Elem_82DBC620 {
    char bytes[0x30];
};

struct Array_82DBC620;
extern "C" void fn_830819D8(Array_82DBC620 *array, int capacity, int elemSize);
extern "C" void fn_82CF69B8(void *dst, const void *src, int bytes);

struct Array_82DBC620 {
    Elem_82DBC620 *m_data;             // 0x0
    unsigned short m_size;             // 0x4
    unsigned short m_capacityAndFlags; // 0x6

    void insertAt(int index, const Elem_82DBC620 *elems, int count);
};

void Array_82DBC620::insertAt(int index, const Elem_82DBC620 *elems, int count)
{
    int newSize = m_size + count;
    int numToMove = m_size - index;
    int capacity = m_capacityAndFlags & 0x3fff;

    if (capacity < newSize) {
        fn_830819D8(this, newSize < capacity * 2 ? capacity * 2 : newSize, 0x30);
    }
    fn_82CF69B8(m_data + index + count, m_data + index, numToMove * 0x30);
    fn_82CF69B8(m_data + index, elems, count * 0x30);
    m_size = newSize;
}
