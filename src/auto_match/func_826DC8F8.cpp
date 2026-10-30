// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_8268BA10(void *dst, const void *src);
extern "C" void fn_8268C2D0(void *dst, const void *src);
extern "C" void fn_826D8A30(void *dst, const void *src);
extern "C" void fn_826DA368(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Str_826DC8F8 {
  int w[1];
  Str_826DC8F8() {}
  Str_826DC8F8(const Str_826DC8F8 &s) { fn_8268C2D0(this, &s); }
  Str_826DC8F8 &operator=(const Str_826DC8F8 &s) { fn_8268BA10(this, &s); return *this; }
};
struct Key_826DC8F8 { const int *a; const Str_826DC8F8 *b; };
struct Value_826DC8F8 {
  int first; Str_826DC8F8 second;
  Value_826DC8F8() {}
  Value_826DC8F8(const Key_826DC8F8 &k) : first(*k.a), second(*k.b) {}
  Value_826DC8F8 &operator=(const Key_826DC8F8 &k) { first = *k.a; second = *k.b; return *this; }
};

struct Entry_826DC8F8 {
  int NextInChain;
  unsigned int HashValue;
  Value_826DC8F8 Value;
  Entry_826DC8F8(const Key_826DC8F8 &k, int next) : NextInChain(next), Value(k) {}
  Entry_826DC8F8(const Entry_826DC8F8 &e) { fn_826D8A30(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_826DC8F8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826DC8F8 {
  Table_826DC8F8 *pTable;
  Entry_826DC8F8 &E(unsigned int index) { return ((Entry_826DC8F8 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826DA368(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826DC8F8(Hash_826DC8F8 *m, void *a, const Key_826DC8F8 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826DC8F8 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826DC8F8(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826DC8F8 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826DC8F8(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826DC8F8 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826DC8F8(*naturalEntry);
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
