// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Key_826FC048 { char pad[0xc]; unsigned int hash; };
struct Value_826FC048 { Key_826FC048 *key; char rest[4]; };
struct Ref_826FC048 { const Value_826FC048 *v; };

struct Entry_826FC048 {
  int NextInChain;
  Value_826FC048 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826FC048 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826FC048 {
  Table_826FC048 *pTable;
  Entry_826FC048 &E(unsigned int index) { return ((Entry_826FC048 *)(pTable + 1))[index]; }
};

extern "C" int fn_826FC048(Hash_826FC048 *m, const Ref_826FC048 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_826FC048 *e = &m->E(index);
  if (e->IsEmpty())
    return -1;
  if (e->GetCachedHash(m->pTable->SizeMask) != hashValue)
    return -1;
  for (;;) {
    if (e->GetCachedHash(m->pTable->SizeMask) == hashValue && e->Value.key == key.v->key)
      return index;
    index = e->NextInChain;
    if (index == -1)
      return -1;
    e = &m->E(index);
  }
}
