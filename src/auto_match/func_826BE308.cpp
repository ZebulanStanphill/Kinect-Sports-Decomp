// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Key_826BE308 { char pad[0xc]; unsigned int hash; };
struct Value_826BE308 { Key_826BE308 *key; char rest[20]; };
struct Ref_826BE308 { const Value_826BE308 *v; };

struct Entry_826BE308 {
  int NextInChain;
  int pad;
  Value_826BE308 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826BE308 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826BE308 {
  Table_826BE308 *pTable;
  Entry_826BE308 &E(unsigned int index) { return ((Entry_826BE308 *)(pTable + 1))[index]; }
};

extern "C" int fn_826BE308(Hash_826BE308 *m, const Ref_826BE308 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_826BE308 *e = &m->E(index);
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
