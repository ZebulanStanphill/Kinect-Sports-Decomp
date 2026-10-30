// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Key_826A9D30 { char pad[0xc]; unsigned int hash; };
struct Value_826A9D30 { Key_826A9D30 *key; char rest[12]; };

struct Entry_826A9D30 {
  int NextInChain;
  Value_826A9D30 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826A9D30 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826A9D30 {
  Table_826A9D30 *pTable;
  Entry_826A9D30 &E(unsigned int index) { return ((Entry_826A9D30 *)(pTable + 1))[index]; }
};

extern "C" int fn_826A9D30(Hash_826A9D30 *m, const Value_826A9D30 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_826A9D30 *e = &m->E(index);
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
