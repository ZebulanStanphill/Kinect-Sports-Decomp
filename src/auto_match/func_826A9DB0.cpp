// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Key_826A9DB0 { char pad[0xc]; unsigned int hash; };
struct Handle_826A65E8 {
  Key_826A9DB0 *key; char rest[20];
  bool equals(const Handle_826A65E8 &o) const;
};
struct Ref_826A9DB0 { const Handle_826A65E8 *v; };

struct Entry_826A9DB0 {
  int NextInChain;
  int pad;
  Handle_826A65E8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826A9DB0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826A9DB0 {
  Table_826A9DB0 *pTable;
  Entry_826A9DB0 &E(unsigned int index) { return ((Entry_826A9DB0 *)(pTable + 1))[index]; }
};

extern "C" int fn_826A9DB0(Hash_826A9DB0 *m, const Ref_826A9DB0 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_826A9DB0 *e = &m->E(index);
  if (e->IsEmpty())
    return -1;
  if (e->GetCachedHash(m->pTable->SizeMask) != hashValue)
    return -1;
  for (;;) {
    if (e->GetCachedHash(m->pTable->SizeMask) == hashValue && key.v->equals(e->Value))
      return index;
    index = e->NextInChain;
    if (index == -1)
      return -1;
    e = &m->E(index);
  }
}
