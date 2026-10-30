// Open-addressing hash set remove (Scaleform-style HashSetBase::RemoveAlt).
extern "C" void fn_826C0018(void *p, int flags);
extern "C" void fn_826C1018(void *dst, const void *src);
inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_826C1860 { char pad[0xc]; unsigned int hash; };
struct Value_826C1860 {
  Key_826C1860 *key; char rest[36];
  Value_826C1860() {}
  ~Value_826C1860() { fn_826C0018(this, 0); }
};

struct Entry_826C1860 {
  int NextInChain;
  int pad;
  Value_826C1860 Value;
  Entry_826C1860() {}
  Entry_826C1860(const Entry_826C1860 &e) { fn_826C1018(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  bool IsEndOfChain() const { return NextInChain == -1; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
  void Clear() { Value.~Value_826C1860(); NextInChain = -2; }
};

struct Table_826C1860 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826C1860 {
  Table_826C1860 *pTable;
  Entry_826C1860 &E(unsigned int index) { return ((Entry_826C1860 *)(pTable + 1))[index]; }
};

extern "C" void fn_826C1860(Hash_826C1860 *m, const Value_826C1860 &key)
{
  if (m->pTable == 0)
    return;
  unsigned int hashValue = key.key->hash;
  int index = hashValue & m->pTable->SizeMask;
  Entry_826C1860 *e = &m->E(index);
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
      Entry_826C1860 *enext = &m->E(e->NextInChain);
      e->Clear();
      new (e) Entry_826C1860(*enext);
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
