// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
extern "C" bool fn_8276F590(const void *v, const void *k);
struct Value_8276F8F0 { char b[16]; bool Equals(const Value_8276F8F0 &o) const { return fn_8276F590(this, &o); } };

struct Entry_8276F8F0 {
  int NextInChain;
  unsigned int HashValue;
  Value_8276F8F0 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
};

struct Table_8276F8F0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8276F8F0 {
  Table_8276F8F0 *pTable;
  Entry_8276F8F0 &E(unsigned int index) { return ((Entry_8276F8F0 *)(pTable + 1))[index]; }
};

extern "C" int fn_8276F8F0(Hash_8276F8F0 *m, const Value_8276F8F0 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_8276F8F0 *e = &m->E(index);
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
