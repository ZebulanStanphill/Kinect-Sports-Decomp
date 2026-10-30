// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
extern "C" bool fn_8278B6F0(unsigned int a, unsigned int b);
struct Value_8278C498 { unsigned int first; };

struct Entry_8278C498 {
  int NextInChain;
  unsigned int HashValue;
  Value_8278C498 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
};

struct Table_8278C498 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8278C498 {
  Table_8278C498 *pTable;
  Entry_8278C498 &E(unsigned int index) { return ((Entry_8278C498 *)(pTable + 1))[index]; }
};

extern "C" int fn_8278C498(Hash_8278C498 *m, const Value_8278C498 &key, unsigned int hashValue)
{
  Hash_8278C498 h = *m;
  int index = hashValue;
  Entry_8278C498 *e = &h.E(index);
  if (e->IsEmpty())
    return -1;
  if (e->GetCachedHash(h.pTable->SizeMask) != hashValue)
    return -1;
  for (;;) {
    if (e->GetCachedHash(h.pTable->SizeMask) == hashValue && fn_8278B6F0(e->Value.first, key.first))
      return index;
    index = e->NextInChain;
    if (index == -1)
      return -1;
    e = &h.E(index);
  }
}
