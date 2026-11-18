// Havok map with 64-bit keys: allocates a new table and inserts the old entries again.
// It matches only as a member function (the table base is the second operand of the indexed store).

struct Allocator_82CEA950 {
    virtual void unused00();
    virtual void *blockAlloc(int numBytes);            // 0x4
    virtual void blockFree(void *block, int numBytes); // 0x8
};

struct Entry_82CEA950 {
    unsigned __int64 key;   // 0x0, -1 marks an empty slot
    unsigned __int64 value; // 0x8
};

struct Map_82CEA950 {
    Entry_82CEA950 *m_elem; // 0x0
    int m_numElems;         // 0x4, the top bit says that the table is not owned
    int m_hashMod;          // 0x8

    void resizeTable(Allocator_82CEA950 *allocator, int newCapacity);
};

extern "C" void fn_82CEA650(Map_82CEA950 *map, Allocator_82CEA950 *allocator, unsigned __int64 key,
                            unsigned __int64 value);

void Map_82CEA950::resizeTable(Allocator_82CEA950 *allocator, int newCapacity)
{
    int dontDeallocate;
    int oldCapacity;
    Entry_82CEA950 *oldElem;
    int i;

    if (newCapacity <= 8) {
        newCapacity = 8;
    }
    dontDeallocate = m_numElems & (int)0x80000000;
    oldCapacity = m_hashMod + 1;
    oldElem = m_elem;
    m_elem = (Entry_82CEA950 *)allocator->blockAlloc(newCapacity * sizeof(Entry_82CEA950));
    for (i = 0; i < newCapacity; ++i) {
        m_elem[i].key = (unsigned __int64)-1;
    }
    m_numElems = 0;
    m_hashMod = newCapacity - 1;
    for (i = 0; i < oldCapacity; ++i) {
        if (oldElem[i].key != (unsigned __int64)-1) {
            fn_82CEA650(this, allocator, oldElem[i].key, oldElem[i].value);
        }
    }
    if (dontDeallocate == 0) {
        allocator->blockFree(oldElem, oldCapacity * sizeof(Entry_82CEA950));
    }
}
