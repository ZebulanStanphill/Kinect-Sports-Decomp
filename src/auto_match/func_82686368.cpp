// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
extern "C" bool fn_826860D8(const void *v, const void *k);
struct Value_82686368 { char b[8]; bool Equals(const Value_82686368 &o) const { return fn_826860D8(this, &o); } };

struct Entry_82686368 {
  int NextInChain;
  unsigned int HashValue;
  Value_82686368 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
};

struct Table_82686368 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82686368 {
  Table_82686368 *pTable;
  Entry_82686368 &E(unsigned int index) { return ((Entry_82686368 *)(pTable + 1))[index]; }
};

extern "C" int fn_82686368(Hash_82686368 *m, const Value_82686368 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_82686368 *e = &m->E(index);
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
