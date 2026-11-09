// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore)
// for a set whose 8-byte values start with their unsigned hash key.
struct Value_8273D670 { unsigned int first; char rest[4]; };

struct Entry_8273D670 {
  int NextInChain;
  Value_8273D670 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.first & mask; }
};

struct Table_8273D670 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8273D670 {
  Table_8273D670 *pTable;
  Entry_8273D670 &E(unsigned int index) { return ((Entry_8273D670 *)(pTable + 1))[index]; }
};

extern "C" int fn_8273D670(Hash_8273D670 *m, const Value_8273D670 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_8273D670 *e = &m->E(index);
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
