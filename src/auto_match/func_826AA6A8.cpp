// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Key_826AA6A8 { char pad[0xc]; unsigned int hash; };
struct Value_826AA6A8 { Key_826AA6A8 *key; char rest[20]; };

struct Entry_826AA6A8 {
  int NextInChain;
  int pad;
  Value_826AA6A8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826AA6A8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826AA6A8 {
  Table_826AA6A8 *pTable;
  Entry_826AA6A8 &E(unsigned int index) { return ((Entry_826AA6A8 *)(pTable + 1))[index]; }
};

extern "C" int fn_826AA6A8(Hash_826AA6A8 *m, const Value_826AA6A8 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_826AA6A8 *e = &m->E(index);
  if (e->IsEmpty())
    return -1;
  if (e->GetCachedHash(m->pTable->SizeMask) != hashValue)
    return -1;
  for (;;) {
    if (e->GetCachedHash(m->pTable->SizeMask) == hashValue && e->Value.key == key.key)
      return index;
    index = e->NextInChain;
    if (index == -1)
      return -1;
    e = &m->E(index);
  }
}
