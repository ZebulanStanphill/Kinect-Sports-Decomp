// Open-addressing hash set remove (Scaleform-style HashSetBase::RemoveAlt).
extern "C" void fn_826AE5C0(void *p);
extern "C" void fn_826AE688(void *dst, const void *src);
inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_826B0D48 { char pad[0xc]; unsigned int hash; };
struct Handle_826A65E8 {
  Key_826B0D48 *key; char rest[12];
  Handle_826A65E8() {}
  Handle_826A65E8(const Handle_826A65E8 &s) { fn_826AE688(this, &s); }
  ~Handle_826A65E8() { fn_826AE5C0(this); }
  bool equals(const Handle_826A65E8 &o) const;
};
struct Ref_826B0D48 { const Handle_826A65E8 *v; };

struct Entry_826B0D48 {
  int NextInChain;
  Handle_826A65E8 Value;
  Entry_826B0D48() {}
  Entry_826B0D48(const Entry_826B0D48 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  bool IsEndOfChain() const { return NextInChain == -1; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
  void Clear() { Value.~Handle_826A65E8(); NextInChain = -2; }
};

struct Table_826B0D48 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826B0D48 {
  Table_826B0D48 *pTable;
  Entry_826B0D48 &E(unsigned int index) { return ((Entry_826B0D48 *)(pTable + 1))[index]; }
};

extern "C" void fn_826B0D48(Hash_826B0D48 *m, const Ref_826B0D48 &key)
{
  if (m->pTable == 0)
    return;
  unsigned int hashValue = key.v->key->hash;
  int index = hashValue & m->pTable->SizeMask;
  Entry_826B0D48 *e = &m->E(index);
  if (e->IsEmpty() || e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)index)
    return;
  int naturalIndex = index;
  int prevIndex = -1;
  while (e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)naturalIndex || !(key.v->equals(e->Value))) {
    prevIndex = index;
    index = e->NextInChain;
    if (index == -1)
      return;
    e = &m->E(index);
  }
  if (naturalIndex == index) {
    if (!e->IsEndOfChain()) {
      Entry_826B0D48 *enext = &m->E(e->NextInChain);
      e->Clear();
      new (e) Entry_826B0D48(*enext);
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
