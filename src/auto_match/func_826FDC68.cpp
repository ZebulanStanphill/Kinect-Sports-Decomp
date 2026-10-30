// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Key_826FDC68 { char pad[0xc]; unsigned int hash; };
struct Value_826FDC68 { Key_826FDC68 *key; char rest[20]; };
struct Ref_826FDC68 { const Value_826FDC68 *v; };

struct Entry_826FDC68 {
  int NextInChain;
  Value_826FDC68 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826FDC68 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826FDC68 {
  Table_826FDC68 *pTable;
  Entry_826FDC68 &E(unsigned int index) { return ((Entry_826FDC68 *)(pTable + 1))[index]; }
};

extern "C" int fn_826FDC68(Hash_826FDC68 *m, const Ref_826FDC68 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_826FDC68 *e = &m->E(index);
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
