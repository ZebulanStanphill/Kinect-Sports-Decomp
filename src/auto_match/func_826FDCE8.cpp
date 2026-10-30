// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Key_826FDCE8 { char pad[0xc]; unsigned int hash; };
struct Value_826FDCE8 { Key_826FDCE8 *key; char rest[20]; };

struct Entry_826FDCE8 {
  int NextInChain;
  Value_826FDCE8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826FDCE8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826FDCE8 {
  Table_826FDCE8 *pTable;
  Entry_826FDCE8 &E(unsigned int index) { return ((Entry_826FDCE8 *)(pTable + 1))[index]; }
};

extern "C" int fn_826FDCE8(Hash_826FDCE8 *m, const Value_826FDCE8 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_826FDCE8 *e = &m->E(index);
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
