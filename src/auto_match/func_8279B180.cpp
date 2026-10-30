// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Value_8279B180 { unsigned int first; char rest[4]; };
struct Ref_8279B180 { const Value_8279B180 *v; };

struct Entry_8279B180 {
  int NextInChain;
  Value_8279B180 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.first & mask; }
};

struct Table_8279B180 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8279B180 {
  Table_8279B180 *pTable;
  Entry_8279B180 &E(unsigned int index) { return ((Entry_8279B180 *)(pTable + 1))[index]; }
};

extern "C" int fn_8279B180(Hash_8279B180 *m, const Ref_8279B180 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_8279B180 *e = &m->E(index);
  if (e->IsEmpty())
    return -1;
  if (e->GetCachedHash(m->pTable->SizeMask) != hashValue)
    return -1;
  for (;;) {
    if (e->GetCachedHash(m->pTable->SizeMask) == hashValue && e->Value.first == key.v->first)
      return index;
    index = e->NextInChain;
    if (index == -1)
      return -1;
    e = &m->E(index);
  }
}
