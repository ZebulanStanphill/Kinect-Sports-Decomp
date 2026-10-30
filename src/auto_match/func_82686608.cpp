// Scaleform-style HashSetBase::RemoveAlt with a cached hash in each entry.
struct HObj_82686608 {
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void v3();
  virtual unsigned Hash(int arg);
};
struct Key_82686608 { HObj_82686608 *obj; int arg; };
struct Value_82686608 { int a; int b; Value_82686608(const Value_82686608 &o) : a(o.a), b(o.b) {} };
extern "C" unsigned char fn_826860D8(Value_82686608 *v, const Key_82686608 *key);

inline void *operator new(unsigned int, void *p) throw() { return p; }
struct Entry_82686608 {
  Entry_82686608(const Entry_82686608 &o) : NextInChain(o.NextInChain), HashValue(o.HashValue), Value(o.Value) {}
  int NextInChain;
  unsigned int HashValue;
  Value_82686608 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int) const { return HashValue; }
  void Clear() { NextInChain = -2; }
};
struct Table_82686608 { unsigned int EntryCount; unsigned int SizeMask; };
struct Hash_82686608 {
  Table_82686608 *pTable;
  Entry_82686608 &E(unsigned int index) { return ((Entry_82686608 *)(pTable + 1))[index]; }
};

extern "C" void fn_82686608(Hash_82686608 *m, Key_82686608 *key)
{
  if (m->pTable == 0)
    return;
  unsigned int hashValue = key->obj ? key->obj->Hash(key->arg) : 0;
  int index = hashValue & m->pTable->SizeMask;
  Entry_82686608 *e = &m->E(index);
  if (e->IsEmpty())
    return;
  if (e->GetCachedHash(m->pTable->SizeMask) != index)
    return;
  int naturalIndex = index;
  int prevIndex = -1;
  while (e->GetCachedHash(m->pTable->SizeMask) != naturalIndex || !fn_826860D8(&e->Value, key)) {
    prevIndex = index;
    index = e->NextInChain;
    if (index == -1)
      return;
    e = &m->E(index);
  }
  if (naturalIndex == index) {
    if (e->NextInChain != -1) {
      Entry_82686608 *enext = &m->E(e->NextInChain);
      e->Clear();
      new (e) Entry_82686608(*enext);
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
