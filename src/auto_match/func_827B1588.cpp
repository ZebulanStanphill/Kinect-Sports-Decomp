// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
extern "C" bool fn_827B08A0(unsigned int a, unsigned int c, unsigned int ka, unsigned int kc);
struct Value_827B1588 { unsigned int a; unsigned int b; unsigned int c; };

struct Entry_827B1588 {
  int NextInChain;
  unsigned int HashValue;
  Value_827B1588 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
};

struct Table_827B1588 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_827B1588 {
  Table_827B1588 *pTable;
  Entry_827B1588 &E(unsigned int index) { return ((Entry_827B1588 *)(pTable + 1))[index]; }
};

extern "C" int fn_827B1588(Hash_827B1588 *m, const Value_827B1588 &key, unsigned int hashValue)
{
  Hash_827B1588 h = *m;
  int index = hashValue;
  Entry_827B1588 *e = &h.E(index);
  if (e->IsEmpty())
    return -1;
  if (e->GetCachedHash(h.pTable->SizeMask) != hashValue)
    return -1;
  for (;;) {
    if (e->GetCachedHash(h.pTable->SizeMask) == hashValue && fn_827B08A0(e->Value.a, e->Value.c, key.a, key.c))
      return index;
    index = e->NextInChain;
    if (index == -1)
      return -1;
    e = &h.E(index);
  }
}
