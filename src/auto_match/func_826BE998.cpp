// Open-addressing hash set remove (Scaleform-style HashSetBase::RemoveAlt).
extern "C" void fn_826A7918(void *p, int flags);
extern "C" void fn_826BDE10(void *dst, const void *src);
inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_826BE998 { char pad[0xc]; unsigned int hash; };
struct Value_826BE998 {
  Key_826BE998 *key; char rest[20];
  Value_826BE998() {}
  Value_826BE998(const Value_826BE998 &s) { fn_826BDE10(this, &s); }
  ~Value_826BE998() { fn_826A7918(this, 0); }
};

struct Entry_826BE998 {
  int NextInChain;
  int pad;
  Value_826BE998 Value;
  Entry_826BE998() {}
  Entry_826BE998(const Entry_826BE998 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  bool IsEndOfChain() const { return NextInChain == -1; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
  void Clear() { Value.~Value_826BE998(); NextInChain = -2; }
};

struct Table_826BE998 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826BE998 {
  Table_826BE998 *pTable;
  Entry_826BE998 &E(unsigned int index) { return ((Entry_826BE998 *)(pTable + 1))[index]; }
};

extern "C" void fn_826BE998(Hash_826BE998 *m, const Value_826BE998 &key)
{
  if (m->pTable == 0)
    return;
  unsigned int hashValue = key.key->hash;
  int index = hashValue & m->pTable->SizeMask;
  Entry_826BE998 *e = &m->E(index);
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
      Entry_826BE998 *enext = &m->E(e->NextInChain);
      e->Clear();
      new (e) Entry_826BE998(*enext);
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
