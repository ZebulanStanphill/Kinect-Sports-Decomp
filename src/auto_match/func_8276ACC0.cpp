// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Value_8276ACC0 { unsigned short first; unsigned short Hash() const { return first; } };

struct Entry_8276ACC0 {
  int NextInChain;
  Value_8276ACC0 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.Hash() & mask; }
};

struct Table_8276ACC0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8276ACC0 {
  Table_8276ACC0 *pTable;
  Entry_8276ACC0 &E(unsigned int index) { return ((Entry_8276ACC0 *)(pTable + 1))[index]; }
};

extern "C" int fn_8276ACC0(Hash_8276ACC0 *m, const Value_8276ACC0 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_8276ACC0 *e = &m->E(index);
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
