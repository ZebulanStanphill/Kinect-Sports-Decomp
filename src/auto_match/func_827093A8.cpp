// Open-addressing hash set add (Scaleform-style HashSetBase::add): entries
// follow the {count, mask} table header. The probe loop re-reads
// m->pTable->SizeMask through the map each time, which keeps the mask load
// inside the loop as in the original.
struct Key_827093A8 { char pad[0xc]; unsigned int hash; };
struct Value_827093A8 { Key_827093A8 *key; char rest[20]; };
extern "C" void fn_82705A70(void *m, void *a, int n);
extern "C" void fn_82704368(void *dst, const void *src, int next);
extern "C" void fn_82704B60(void *dst, const void *src);
extern "C" void fn_826FEC38(void *dst, const void *src);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Entry_827093A8 {
  int NextInChain;
  Value_827093A8 Value;
  Entry_827093A8(const Value_827093A8 &k, int next) { fn_82704368(this, &k, next); }
  Entry_827093A8(const Entry_827093A8 &e) { fn_82704B60(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_827093A8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_827093A8 {
  Table_827093A8 *pTable;
  Entry_827093A8 &E(unsigned int index) { return ((Entry_827093A8 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_82705A70(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_827093A8(Hash_827093A8 *m, void *a, const Value_827093A8 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_827093A8 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_827093A8(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_827093A8 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_827093A8(*naturalEntry);
      fn_826FEC38(&naturalEntry->Value, &key);
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_827093A8 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_827093A8(*naturalEntry);
          e->NextInChain = blankIndex;
          break;
        }
        collidedIndex = e->NextInChain;
      }
      fn_826FEC38(&naturalEntry->Value, &key);
      naturalEntry->NextInChain = -1;
    }
  }
}
