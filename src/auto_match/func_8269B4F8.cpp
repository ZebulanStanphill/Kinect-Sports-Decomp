// Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore).
struct Obj_8269B4F8 { unsigned int a; int pad; unsigned short x; };
struct Value_8269B4F8 {
  unsigned int a; char pad[4]; unsigned short x; char rest[18];
  bool operator==(const Obj_8269B4F8 *o) const { return a == o->a && ((a & 0x20000) == 0 || x == o->x); }
  bool operator==(const Obj_8269B4F8 &o) const { return a == o.a && ((a & 0x20000) == 0 || x == o.x); }
};
struct Ref_8269B4F8 { const Obj_8269B4F8 *o; };

struct Entry_8269B4F8 {
  int NextInChain;
  unsigned int HashValue;
  Value_8269B4F8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
};

struct Table_8269B4F8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8269B4F8 {
  Table_8269B4F8 *pTable;
  Entry_8269B4F8 &E(unsigned int index) { return ((Entry_8269B4F8 *)(pTable + 1))[index]; }
};

extern "C" int fn_8269B4F8(Hash_8269B4F8 *m, const Obj_8269B4F8 &key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_8269B4F8 *e = &m->E(index);
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
