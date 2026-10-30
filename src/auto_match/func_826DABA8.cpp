// Open-addressing hash set remove (Scaleform-style HashSetBase::RemoveAlt).
extern "C" void fn_8267C4F0(void *p);
extern "C" void fn_826DAA10(void *dst, const void *src);
inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Obj_826DABA8 { char pad[8]; int id; };
struct Value_826DABA8 {
  Obj_826DABA8 *p;
  Value_826DABA8() {}
  Value_826DABA8(const Value_826DABA8 &s) { fn_826DAA10(this, &s); }
  ~Value_826DABA8() { if (p) fn_8267C4F0(p); }
};

struct Entry_826DABA8 {
  int NextInChain;
  unsigned int HashValue;
  Value_826DABA8 Value;
  Entry_826DABA8() {}
  Entry_826DABA8(const Entry_826DABA8 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  bool IsEndOfChain() const { return NextInChain == -1; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void Clear() { Value.~Value_826DABA8(); NextInChain = -2; }
};

struct Table_826DABA8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826DABA8 {
  Table_826DABA8 *pTable;
  Entry_826DABA8 &E(unsigned int index) { return ((Entry_826DABA8 *)(pTable + 1))[index]; }
};

extern "C" void fn_826DABA8(Hash_826DABA8 *m, const int &key)
{
  if (m->pTable == 0)
    return;
  unsigned int hashValue = key;
  int index = hashValue & m->pTable->SizeMask;
  Entry_826DABA8 *e = &m->E(index);
  if (e->IsEmpty() || e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)index)
    return;
  int naturalIndex = index;
  int prevIndex = -1;
  while (e->GetCachedHash(m->pTable->SizeMask) != (unsigned int)naturalIndex || !(e->Value.p->id == key)) {
    prevIndex = index;
    index = e->NextInChain;
    if (index == -1)
      return;
    e = &m->E(index);
  }
  if (naturalIndex == index) {
    if (!e->IsEndOfChain()) {
      Entry_826DABA8 *enext = &m->E(e->NextInChain);
      e->Clear();
      new (e) Entry_826DABA8(*enext);
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
