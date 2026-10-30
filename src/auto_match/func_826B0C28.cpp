// Open-addressing hash set remove (Scaleform-style HashSetBase::RemoveAlt).
extern "C" void fn_826AE5C0(void *p);
extern "C" void fn_826AE688(void *dst, const void *src);
inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_826B0C28 { char pad[0xc]; unsigned int hash; };
struct Value_826B0C28 {
  Key_826B0C28 *key; char rest[12];
  Value_826B0C28() {}
  Value_826B0C28(const Value_826B0C28 &s) { fn_826AE688(this, &s); }
  ~Value_826B0C28() { fn_826AE5C0(this); }
};

struct Entry_826B0C28 {
  int NextInChain;
  Value_826B0C28 Value;
  Entry_826B0C28() {}
  Entry_826B0C28(const Entry_826B0C28 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  bool IsEndOfChain() const { return NextInChain == -1; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
  void Clear() { Value.~Value_826B0C28(); NextInChain = -2; }
};

struct Table_826B0C28 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826B0C28 {
  Table_826B0C28 *pTable;
  Entry_826B0C28 &E(unsigned int index) { return ((Entry_826B0C28 *)(pTable + 1))[index]; }
};

extern "C" void fn_826B0C28(Hash_826B0C28 *m, const Value_826B0C28 &key)
{
  if (m->pTable == 0)
    return;
  unsigned int hashValue = key.key->hash;
  int index = hashValue & m->pTable->SizeMask;
  Entry_826B0C28 *e = &m->E(index);
  if (e->IsEmpty() || e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)index)
    return;
  int naturalIndex = index;
  int prevIndex = -1;
  while (e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)naturalIndex || !(e->Value.key == key.key)) {
    prevIndex = index;
    index = e->NextInChain;
    if (index == -1)
      return;
    e = &m->E(index);
  }
  if (naturalIndex == index) {
    if (!e->IsEndOfChain()) {
      Entry_826B0C28 *enext = &m->E(e->NextInChain);
      e->Clear();
      new (e) Entry_826B0C28(*enext);
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
