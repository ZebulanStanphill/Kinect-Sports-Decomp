// Open-addressing hash set remove (Scaleform-style HashSetBase::RemoveAlt).
inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_826941E8 { char pad[0xc]; unsigned int hash; };
struct Value_826941E8 { Key_826941E8 *key; };

struct Entry_826941E8 {
  int NextInChain;
  Key_826941E8 *Value;
  Entry_826941E8() {}
  Entry_826941E8(const Entry_826941E8 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  bool IsEndOfChain() const { return NextInChain == -1; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value->hash & mask; }
  void Clear() { NextInChain = -2; }
};

struct Table_826941E8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826941E8 {
  Table_826941E8 *pTable;
  Entry_826941E8 &E(unsigned int index) { return ((Entry_826941E8 *)pTable)[index + 1]; }
};

extern "C" void fn_826941E8(Hash_826941E8 *m, const Value_826941E8 &key)
{
  if (m->pTable == 0)
    return;
  unsigned int hashValue = key.key->hash;
  int index = hashValue & m->pTable->SizeMask;
  Entry_826941E8 *e = &m->E(index);
  if (e->IsEmpty() || e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)index)
    return;
  int naturalIndex = index;
  int prevIndex = -1;
  while (e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)naturalIndex || !(e->Value == key.key)) {
    prevIndex = index;
    index = e->NextInChain;
    if (index == -1)
      return;
    e = &m->E(index);
  }
  if (naturalIndex == index) {
    if (!e->IsEndOfChain()) {
      Entry_826941E8 *enext = &m->E(e->NextInChain);
      e->Clear();
      new (e) Entry_826941E8(*enext);
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
