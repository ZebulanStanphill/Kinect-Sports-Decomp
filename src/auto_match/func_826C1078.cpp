// Open-addressing hash set remove (Scaleform-style HashSetBase::RemoveAlt).
extern "C" void fn_826C0018(void *p, int flags);
extern "C" void fn_826C1018(void *dst, const void *src);
inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_826C1078 { char pad[0xc]; unsigned int hash; };
struct Handle_826A65E8 {
  Key_826C1078 *key; char rest[36];
  Handle_826A65E8() {}
  ~Handle_826A65E8() { fn_826C0018(this, 0); }
  bool equals(const Handle_826A65E8 &o) const;
};
struct Ref_826C1078 { const Handle_826A65E8 *v; };

struct Entry_826C1078 {
  int NextInChain;
  int pad;
  Handle_826A65E8 Value;
  Entry_826C1078() {}
  Entry_826C1078(const Entry_826C1078 &e) { fn_826C1018(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  bool IsEndOfChain() const { return NextInChain == -1; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
  void Clear() { Value.~Handle_826A65E8(); NextInChain = -2; }
};

struct Table_826C1078 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826C1078 {
  Table_826C1078 *pTable;
  Entry_826C1078 &E(unsigned int index) { return ((Entry_826C1078 *)(pTable + 1))[index]; }
};

extern "C" void fn_826C1078(Hash_826C1078 *m, const Ref_826C1078 &key)
{
  if (m->pTable == 0)
    return;
  unsigned int hashValue = key.v->key->hash;
  int index = hashValue & m->pTable->SizeMask;
  Entry_826C1078 *e = &m->E(index);
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
      Entry_826C1078 *enext = &m->E(e->NextInChain);
      e->Clear();
      new (e) Entry_826C1078(*enext);
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
