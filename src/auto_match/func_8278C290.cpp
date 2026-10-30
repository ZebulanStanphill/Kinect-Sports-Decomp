// Open-addressing hash set add with a cached hash in each entry
// (Scaleform-style HashSetCachedBase::add) for a reference-counted pointer
// value. The probe loop re-reads m->pTable->SizeMask through the map each
// time, which keeps the mask load inside the loop as in the original.
extern "C" void fn_8278DEC0(void *m, void *a);
extern "C" void fn_8278BF48(void *dst, const void *src);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct RefCounted_8278C290 {
  int f0;
  int RefCount;
  void AddRef() { RefCount++; }
};

struct Ptr_8278C290 {
  RefCounted_8278C290 *p;
  Ptr_8278C290(const Ptr_8278C290 &s) { if (s.p) s.p->AddRef(); p = s.p; }
  Ptr_8278C290 &operator=(const Ptr_8278C290 &s) { fn_8278BF48(this, &s); return *this; }
};

struct Entry_8278C290 {
  int NextInChain;
  unsigned int HashValue;
  Ptr_8278C290 Value;
  Entry_8278C290(const Ptr_8278C290 &k, int next) : NextInChain(next), Value(k) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_8278C290 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8278C290 {
  Table_8278C290 *pTable;
  Entry_8278C290 &E(unsigned int index) { return ((Entry_8278C290 *)(pTable + 1))[index]; }
  void CheckExpand(void *a) { fn_8278DEC0(this, a); }
};

extern "C" void fn_8278C290(Hash_8278C290 *m, void *a, const Ptr_8278C290 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8278C290 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8278C290(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8278C290 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_8278C290(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_8278C290 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8278C290(*naturalEntry);
          e->NextInChain = blankIndex;
          break;
        }
        collidedIndex = e->NextInChain;
      }
      naturalEntry->Value = key;
      naturalEntry->NextInChain = -1;
    }
  }
  naturalEntry->SetCachedHash(hashValue);
}
