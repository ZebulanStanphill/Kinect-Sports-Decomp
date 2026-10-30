// Open-addressing hash set remove (Scaleform-style HashSetBase::RemoveAlt).
extern "C" void fn_826F8490(void *p, int flags);
inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Obj_826FDB30 { char pad[8]; int RefCount; unsigned int hash; };
struct Ptr_826FDB30 {
  Obj_826FDB30 *p;
  Ptr_826FDB30() {}
  Ptr_826FDB30(const Ptr_826FDB30 &s) { p = s.p; p->RefCount++; }
};
struct Value_826FDB30 {
  Ptr_826FDB30 first; int second;
  Value_826FDB30() {}
  ~Value_826FDB30() { fn_826F8490(this, 0); }
};

struct Entry_826FDB30 {
  int NextInChain;
  Value_826FDB30 Value;
  Entry_826FDB30() {}
  Entry_826FDB30(const Entry_826FDB30 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  bool IsEndOfChain() const { return NextInChain == -1; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.first.p->hash & mask; }
  void Clear() { Value.~Value_826FDB30(); NextInChain = -2; }
};

struct Table_826FDB30 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826FDB30 {
  Table_826FDB30 *pTable;
  Entry_826FDB30 &E(unsigned int index) { return ((Entry_826FDB30 *)(pTable + 1))[index]; }
};

extern "C" void fn_826FDB30(Hash_826FDB30 *m, const Value_826FDB30 &key)
{
  if (m->pTable == 0)
    return;
  unsigned int hashValue = key.first.p->hash;
  int index = hashValue & m->pTable->SizeMask;
  Entry_826FDB30 *e = &m->E(index);
  if (e->IsEmpty() || e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)index)
    return;
  int naturalIndex = index;
  int prevIndex = -1;
  while (e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)naturalIndex || !(e->Value.first.p == key.first.p)) {
    prevIndex = index;
    index = e->NextInChain;
    if (index == -1)
      return;
    e = &m->E(index);
  }
  if (naturalIndex == index) {
    if (!e->IsEndOfChain()) {
      Entry_826FDB30 *enext = &m->E(e->NextInChain);
      e->Clear();
      new (e) Entry_826FDB30(*enext);
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
