// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
extern "C" bool fn_82773B90(const void *v, const void *k);
struct Value_827B5BC8 { char b[16]; bool Equals(const Value_827B5BC8 &o) const { return fn_82773B90(this, &o); } };

struct Entry_827B5BC8 {
  int NextInChain;
  unsigned int HashValue;
  Value_827B5BC8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
};

struct Table_827B5BC8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_827B5BC8 {
  Table_827B5BC8 *pTable;
  Entry_827B5BC8 &E(unsigned int index) { return ((Entry_827B5BC8 *)(pTable + 1))[index]; }
};

extern "C" int fn_827B5BC8(Hash_827B5BC8 *m, const Value_827B5BC8 &key, unsigned int hashValue)
{
  Hash_827B5BC8 h = *m;
  int index = hashValue;
  Entry_827B5BC8 *e = &h.E(index);
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
