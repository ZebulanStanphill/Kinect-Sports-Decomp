// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Key_8273D5F0 { char pad[0xc]; unsigned int hash; };
struct Value_8273D5F0 { Key_8273D5F0 *key; char rest[8]; };

struct Entry_8273D5F0 {
  int NextInChain;
  Value_8273D5F0 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_8273D5F0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8273D5F0 {
  Table_8273D5F0 *pTable;
  Entry_8273D5F0 &E(unsigned int index) { return ((Entry_8273D5F0 *)(pTable + 1))[index]; }
};

extern "C" int fn_8273D5F0(Hash_8273D5F0 *m, const Value_8273D5F0 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_8273D5F0 *e = &m->E(index);
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
