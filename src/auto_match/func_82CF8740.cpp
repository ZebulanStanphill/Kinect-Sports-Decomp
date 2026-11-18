// Havok map with 12-byte values: allocates a new table and inserts the old entries again.
// It matches only as a member function (the table base is the second operand of the indexed store).

struct Allocator_82CF8740 {
    virtual void unused00();
    virtual void *blockAlloc(int numBytes);            // 0x4
    virtual void blockFree(void *block, int numBytes); // 0x8
};

struct Value_82CF8740 {
    int words[3];
};

struct Entry_82CF8740 {
    int key;              // 0x0
    Value_82CF8740 value; // 0x4
};

struct Map_82CF8740 {
    Entry_82CF8740 *m_elem; // 0x0
    int m_numElems;         // 0x4, the top bit says that the table is not owned
    int m_hashMod;          // 0x8

    void resizeTable(Allocator_82CF8740 *allocator, int newCapacity);
};

extern "C" void fn_82CF84B0(Map_82CF8740 *map, Allocator_82CF8740 *allocator, unsigned int key,
                            Value_82CF8740 value);

void Map_82CF8740::resizeTable(Allocator_82CF8740 *allocator, int newCapacity)
{
    int dontDeallocate;
    int oldCapacity;
    Entry_82CF8740 *oldElem;
    int i;

    if (newCapacity <= 8) {
        newCapacity = 8;
    }
    dontDeallocate = m_numElems & (int)0x80000000;
    oldCapacity = m_hashMod + 1;
    oldElem = m_elem;
    m_elem = (Entry_82CF8740 *)allocator->blockAlloc(newCapacity * 16);
    for (i = 0; i < newCapacity; ++i) {
        m_elem[i].key = -1;
    }
    m_numElems = 0;
    m_hashMod = newCapacity - 1;
    for (i = 0; i < oldCapacity; ++i) {
        if (oldElem[i].key != -1) {
            fn_82CF84B0(this, allocator, oldElem[i].key, oldElem[i].value);
        }
    }
    if (dontDeallocate == 0) {
        allocator->blockFree(oldElem, oldCapacity * 16);
    }
}
