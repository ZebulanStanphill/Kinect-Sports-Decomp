// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
extern "C" bool fn_82773C20(const void *v, const void *k);
struct Value_82774720 { char b[12]; bool Equals(const Value_82774720 &o) const { return fn_82773C20(this, &o); } };

struct Entry_82774720 {
  int NextInChain;
  unsigned int HashValue;
  Value_82774720 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
};

struct Table_82774720 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82774720 {
  Table_82774720 *pTable;
  Entry_82774720 &E(unsigned int index) { return ((Entry_82774720 *)(pTable + 1))[index]; }
};

extern "C" int fn_82774720(Hash_82774720 *m, const Value_82774720 &key, unsigned int hashValue)
{
  Hash_82774720 h = *m;
  int index = hashValue;
  Entry_82774720 *e = &h.E(index);
  if (e->IsEmpty())
    return -1;
  if (e->GetCachedHash(h.pTable->SizeMask) != hashValue)
    return -1;
  for (;;) {
    if (e->GetCachedHash(h.pTable->SizeMask) == hashValue && e->Value.Equals(key))
      return index;
    index = e->NextInChain;
    if (index == -1)
      return -1;
    e = &h.E(index);
  }
}
