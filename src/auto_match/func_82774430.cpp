// Open-addressing hash set remove (Scaleform-style HashSetBase::RemoveAlt).
inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value_82774430 { unsigned int first; unsigned int Hash() const { return (first >> 6) ^ first; } bool operator==(const Value_82774430 &o) const { return first == o.first; } };

struct Entry_82774430 {
  int NextInChain;
  unsigned int HashValue;
  Value_82774430 Value;
  Entry_82774430() {}
  Entry_82774430(const Entry_82774430 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  bool IsEndOfChain() const { return NextInChain == -1; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void Clear() { NextInChain = -2; }
};

struct Table_82774430 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82774430 {
  Table_82774430 *pTable;
  Entry_82774430 &E(unsigned int index) { return ((Entry_82774430 *)(pTable + 1))[index]; }
};

extern "C" void fn_82774430(Hash_82774430 *m, const Value_82774430 &key)
{
  if (m->pTable == 0)
    return;
  unsigned int hashValue = key.Hash();
  int index = hashValue & m->pTable->SizeMask;
  Entry_82774430 *e = &m->E(index);
  if (e->IsEmpty() || e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)index)
    return;
  int naturalIndex = index;
  int prevIndex = -1;
  while (e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)naturalIndex || !(e->Value == key)) {
    prevIndex = index;
    index = e->NextInChain;
    if (index == -1)
      return;
    e = &m->E(index);
  }
  if (naturalIndex == index) {
    if (!e->IsEndOfChain()) {
      Entry_82774430 *enext = &m->E(e->NextInChain);
      e->Clear();
      new (e) Entry_82774430(*enext);
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
