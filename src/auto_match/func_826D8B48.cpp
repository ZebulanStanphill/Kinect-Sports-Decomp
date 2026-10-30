// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Value_826D8B48 { unsigned int first; int rest[2]; unsigned int Hash() const { return (first >> 8) ^ first; } };

struct Entry_826D8B48 {
  int NextInChain;
  Value_826D8B48 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.Hash() & mask; }
};

struct Table_826D8B48 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826D8B48 {
  Table_826D8B48 *pTable;
  Entry_826D8B48 &E(unsigned int index) { return ((Entry_826D8B48 *)(pTable + 1))[index]; }
};

extern "C" int fn_826D8B48(Hash_826D8B48 *m, const Value_826D8B48 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_826D8B48 *e = &m->E(index);
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
