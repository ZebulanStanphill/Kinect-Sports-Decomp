// Open-addressing hash set add (HashSetBase::add): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826A9520(void *dst, const void *src);
extern "C" void fn_826AE688(void *dst, const void *src);
extern "C" void fn_826AE870(void *dst, const void *src);
extern "C" void fn_826B1E20(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_826B1FD0 { char pad[0xc]; unsigned int hash; };
struct Value_826B1FD0 {
  Key_826B1FD0 *key; char rest[12];
  Value_826B1FD0() {}
  Value_826B1FD0(const Value_826B1FD0 &s) { fn_826AE688(this, &s); }
  Value_826B1FD0 &operator=(const Value_826B1FD0 &s) { fn_826A9520(this, &s); return *this; }
};

struct Entry_826B1FD0 {
  int NextInChain;
  Value_826B1FD0 Value;
  Entry_826B1FD0(const Value_826B1FD0 &k, int next) : NextInChain(next) { fn_826AE870(&Value, &k); }
  Entry_826B1FD0(const Entry_826B1FD0 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826B1FD0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826B1FD0 {
  Table_826B1FD0 *pTable;
  Entry_826B1FD0 &E(unsigned int index) { return ((Entry_826B1FD0 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826B1E20(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826B1FD0(Hash_826B1FD0 *m, void *a, const Value_826B1FD0 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826B1FD0 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826B1FD0(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826B1FD0 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826B1FD0(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826B1FD0 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826B1FD0(*naturalEntry);
          e->NextInChain = blankIndex;
          break;
        }
        collidedIndex = e->NextInChain;
      }
      naturalEntry->Value = key;
      naturalEntry->NextInChain = -1;
    }
  }
}
