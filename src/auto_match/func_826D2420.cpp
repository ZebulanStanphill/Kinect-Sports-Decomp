// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_8268BA10(void *dst, const void *src);
extern "C" void fn_826CC190(void *dst, const void *src);
extern "C" void fn_826CC1F0(void *dst, const void *src, int next);
extern "C" void fn_826D0500(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Str_826D2420 {
  int w[1];
  Str_826D2420() {}
  Str_826D2420 &operator=(const Str_826D2420 &s) { fn_8268BA10(this, &s); return *this; }
};
struct Key_826D2420 { const Str_826D2420 *a; const int *b; };
struct Value_826D2420 {
  Str_826D2420 first; int second;
  Value_826D2420() {}
  Value_826D2420(const Key_826D2420 &k) : first(*k.a), second(*k.b) {}
  Value_826D2420 &operator=(const Key_826D2420 &k) { first = *k.a; second = *k.b; return *this; }
};

struct Entry_826D2420 {
  int NextInChain;
  unsigned int HashValue;
  Value_826D2420 Value;
  Entry_826D2420(const Key_826D2420 &k, int next) { fn_826CC1F0(this, &k, next); }
  Entry_826D2420(const Entry_826D2420 &e) { fn_826CC190(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_826D2420 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826D2420 {
  Table_826D2420 *pTable;
  Entry_826D2420 &E(unsigned int index) { return ((Entry_826D2420 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826D0500(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826D2420(Hash_826D2420 *m, void *a, const Key_826D2420 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826D2420 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826D2420(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826D2420 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826D2420(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826D2420 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826D2420(*naturalEntry);
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
