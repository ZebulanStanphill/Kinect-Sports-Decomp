// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826D6238(void *dst, const void *src);
extern "C" void fn_826D6290(void *dst, const void *src);
extern "C" void fn_82769F00(void *dst, const void *src);
extern "C" void fn_8276B498(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Str_8276D930 {
  int w[2];
  Str_8276D930() {}
  Str_8276D930(const Str_8276D930 &s) { fn_826D6238(this, &s); }
  Str_8276D930 &operator=(const Str_8276D930 &s) { fn_826D6290(this, &s); return *this; }
};
struct Key_8276D930 { const int *a; const Str_8276D930 *b; };
struct Value_8276D930 {
  int first; Str_8276D930 second;
  Value_8276D930() {}
  Value_8276D930(const Key_8276D930 &k) : first(*k.a), second(*k.b) {}
  Value_8276D930 &operator=(const Key_8276D930 &k) { first = *k.a; second = *k.b; return *this; }
};

struct Entry_8276D930 {
  int NextInChain;
  unsigned int HashValue;
  Value_8276D930 Value;
  Entry_8276D930(const Key_8276D930 &k, int next) : NextInChain(next), Value(k) {}
  Entry_8276D930(const Entry_8276D930 &e) { fn_82769F00(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_8276D930 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8276D930 {
  Table_8276D930 *pTable;
  Entry_8276D930 &E(unsigned int index) { return ((Entry_8276D930 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_8276B498(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8276D930(Hash_8276D930 *m, void *a, const Key_8276D930 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8276D930 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8276D930(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8276D930 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_8276D930(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_8276D930 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8276D930(*naturalEntry);
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
