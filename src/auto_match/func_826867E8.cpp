// Open-addressing hash set remove (Scaleform-style HashSetBase::RemoveAlt)
// for an unsigned value hashed with (v >> 6) ^ v.
inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value_826867E8 {
  unsigned int v;
  Value_826867E8() {}
  Value_826867E8(const Value_826867E8 &s) : v(s.v) {}
  bool operator==(const Value_826867E8 &o) const { return v == o.v; }
  unsigned int Hash() const { return (v >> 6) ^ v; }
};

struct Entry_826867E8 {
  int NextInChain;
  Value_826867E8 Value;
  Entry_826867E8() {}
  Entry_826867E8(const Entry_826867E8 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  bool IsEndOfChain() const { return NextInChain == -1; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.Hash() & mask; }
  void Clear() { NextInChain = -2; }
};

struct Table_826867E8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826867E8 {
  Table_826867E8 *pTable;
  Entry_826867E8 &E(unsigned int index) { return ((Entry_826867E8 *)(pTable + 1))[index]; }
};

extern "C" void fn_826867E8(Hash_826867E8 *m, const Value_826867E8 &key)
{
  if (m->pTable == 0)
    return;
  unsigned int hashValue = key.Hash();
  int index = hashValue & m->pTable->SizeMask;
  Entry_826867E8 *e = &m->E(index);
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
      Entry_826867E8 *enext = &m->E(e->NextInChain);
      e->Clear();
      new (e) Entry_826867E8(*enext);
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
