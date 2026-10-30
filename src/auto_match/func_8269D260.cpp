// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Obj_8269D260 { unsigned int a; int pad; unsigned short x; };
struct Value_8269D260 {
  unsigned int a; char pad[4]; unsigned short x; char rest[18];
  bool operator==(const Obj_8269D260 *o) const { return a == o->a && ((a & 0x20000) == 0 || x == o->x); }
  bool operator==(const Obj_8269D260 &o) const { return a == o.a && ((a & 0x20000) == 0 || x == o.x); }
};
struct Ref_8269D260 { const Obj_8269D260 *o; };

struct Entry_8269D260 {
  int NextInChain;
  unsigned int HashValue;
  Value_8269D260 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
};

struct Table_8269D260 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8269D260 {
  Table_8269D260 *pTable;
  Entry_8269D260 &E(unsigned int index) { return ((Entry_8269D260 *)(pTable + 1))[index]; }
};

extern "C" int fn_8269D260(Hash_8269D260 *m, const Ref_8269D260 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_8269D260 *e = &m->E(index);
  if (e->IsEmpty())
    return -1;
  if (e->GetCachedHash(m->pTable->SizeMask) != hashValue)
    return -1;
  for (;;) {
    if (e->GetCachedHash(m->pTable->SizeMask) == hashValue && e->Value == key.o)
      return index;
    index = e->NextInChain;
    if (index == -1)
      return -1;
    e = &m->E(index);
  }
}
