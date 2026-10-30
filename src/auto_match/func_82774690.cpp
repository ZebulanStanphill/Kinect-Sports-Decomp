// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Value_82774690 { unsigned int a; unsigned int b; char rest[16]; bool operator==(const Value_82774690 &o) const { return a == o.a && b == o.b; } };

struct Entry_82774690 {
  int NextInChain;
  unsigned int HashValue;
  Value_82774690 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
};

struct Table_82774690 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82774690 {
  Table_82774690 *pTable;
  Entry_82774690 &E(unsigned int index) { return ((Entry_82774690 *)(pTable + 1))[index]; }
};

extern "C" int fn_82774690(Hash_82774690 *m, const Value_82774690 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_82774690 *e = &m->E(index);
  if (e->IsEmpty())
    return -1;
  if (e->GetCachedHash(m->pTable->SizeMask) != hashValue)
    return -1;
  for (;;) {
    if (e->GetCachedHash(m->pTable->SizeMask) == hashValue && e->Value == key)
      return index;
    index = e->NextInChain;
    if (index == -1)
      return -1;
    e = &m->E(index);
  }
}
