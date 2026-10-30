// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
extern "C" bool fn_82752F00(const void *v, const void *k);
struct Value_827537C8 { char b[4]; bool Equals(const Value_827537C8 &o) const { return fn_82752F00(this, &o); } };

struct Entry_827537C8 {
  int NextInChain;
  unsigned int HashValue;
  Value_827537C8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
};

struct Table_827537C8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_827537C8 {
  Table_827537C8 *pTable;
  Entry_827537C8 &E(unsigned int index) { return ((Entry_827537C8 *)(pTable + 1))[index]; }
};

extern "C" int fn_827537C8(Hash_827537C8 *m, const Value_827537C8 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_827537C8 *e = &m->E(index);
  if (e->IsEmpty())
    return -1;
  if (e->GetCachedHash(m->pTable->SizeMask) != hashValue)
    return -1;
  for (;;) {
    if (e->GetCachedHash(m->pTable->SizeMask) == hashValue && e->Value.Equals(key))
      return index;
    index = e->NextInChain;
    if (index == -1)
      return -1;
    e = &m->E(index);
  }
}
