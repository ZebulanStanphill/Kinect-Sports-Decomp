// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Value_82686400 { unsigned int first; unsigned int Hash() const { return (first >> 6) ^ first; } };

struct Entry_82686400 {
  int NextInChain;
  Value_82686400 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.Hash() & mask; }
};

struct Table_82686400 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82686400 {
  Table_82686400 *pTable;
  Entry_82686400 &E(unsigned int index) { return ((Entry_82686400 *)(pTable + 1))[index]; }
};

extern "C" int fn_82686400(Hash_82686400 *m, const Value_82686400 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_82686400 *e = &m->E(index);
  if (e->IsEmpty())
    return -1;
  if (e->GetCachedHash(m->pTable->SizeMask) != hashValue)
    return -1;
  for (;;) {
    if (e->GetCachedHash(m->pTable->SizeMask) == hashValue && e->Value.first == key.first)
      return index;
    index = e->NextInChain;
    if (index == -1)
      return -1;
    e = &m->E(index);
  }
}
