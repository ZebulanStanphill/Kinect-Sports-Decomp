// Scaleform-style HashSetCachedBase::RemoveAlt (key compared through a by-value copy).
struct Key_82753688;
extern "C" unsigned char fn_82752DF0(void *a, void *b);

struct Key_82753688 {
  int v;
  bool operator==(Key_82753688 o) const { return fn_82752DF0((void *)this, &o) != 0; }
};

struct Less_82753688 { };
struct HashF_82753688 {
  Less_82753688 comp;
  HashF_82753688() : comp() {}
};
extern "C" unsigned int fn_82753078(HashF_82753688 *, int);

struct Entry_82753688 {
  int NextInChain;
  unsigned int HashValue;
  Key_82753688 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  bool IsEndOfChain() const { return NextInChain == -1; }
  void Clear() { NextInChain = -2; }
};

struct Table_82753688 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82753688 {
  Table_82753688 *pTable;
  Entry_82753688 &E(unsigned int index) { return ((Entry_82753688 *)(pTable + 1))[index]; }
};

extern "C" void fn_82753688(Hash_82753688 *m, Key_82753688 *key)
{
  if (m->pTable == 0) return;
  HashF_82753688 hf;
  unsigned int hashValue = fn_82753078(&hf, key->v);
  int index = hashValue & m->pTable->SizeMask;
  Entry_82753688 *e = &m->E(index);
  if (e->IsEmpty() || e->HashValue != (unsigned int)index) return;
  int naturalIndex = index;
  int prevIndex = -1;
  unsigned int *ph;
  Key_82753688 *pv;
  for (;;) {
    ph = &e->HashValue;
    if (*ph == (unsigned int)naturalIndex) {
      pv = &e->Value;
      if (*pv == *key) break;
    }
    prevIndex = index;
    index = e->NextInChain;
    if (index == -1) return;
    e = &m->E(index);
  }
  if (naturalIndex == index) {
    int nx = e->NextInChain;
    if (nx != -1) {
      Entry_82753688 *enext = &m->E(nx);
      e->Clear();
      e->NextInChain = enext->NextInChain;
      *ph = enext->HashValue;
      *pv = enext->Value;
      e = enext;
    }
  } else {
    m->E(prevIndex).NextInChain = e->NextInChain;
  }
  e->Clear();
  m->pTable->EntryCount--;
}
