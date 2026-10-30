// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Key_826BE388 { char pad[0xc]; unsigned int hash; };
struct Value_826BE388 { Key_826BE388 *key; char rest[36]; };

struct Entry_826BE388 {
  int NextInChain;
  int pad;
  Value_826BE388 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826BE388 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826BE388 {
  Table_826BE388 *pTable;
  Entry_826BE388 &E(unsigned int index) { return ((Entry_826BE388 *)(pTable + 1))[index]; }
};

extern "C" int fn_826BE388(Hash_826BE388 *m, const Value_826BE388 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_826BE388 *e = &m->E(index);
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
