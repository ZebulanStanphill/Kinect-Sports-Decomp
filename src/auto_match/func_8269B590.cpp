// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Key_8269B590 { char pad[0xc]; unsigned int hash; };
struct Value_8269B590 { Key_8269B590 *key; int rest; };

struct Entry_8269B590 {
  int NextInChain;
  Value_8269B590 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_8269B590 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8269B590 {
  Table_8269B590 *pTable;
  Entry_8269B590 &E(unsigned int index) { return ((Entry_8269B590 *)(pTable + 1))[index]; }
};

extern "C" int fn_8269B590(Hash_8269B590 *m, const Value_8269B590 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_8269B590 *e = &m->E(index);
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
