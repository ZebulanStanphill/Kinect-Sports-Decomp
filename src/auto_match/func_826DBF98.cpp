// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826DA208(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" void fn_8268C2D0(void *dst, const void *src);
extern "C" void fn_8268BA10(void *dst, const void *src);
extern "C" void fn_826D6238(void *dst, const void *src);
extern "C" void fn_826D6290(void *dst, const void *src);
struct Str_826DBF98 {
  int w;
  Str_826DBF98() {}
  Str_826DBF98(const Str_826DBF98 &s) { fn_8268C2D0(this, &s); }
  Str_826DBF98 &operator=(const Str_826DBF98 &s) { fn_8268BA10(this, &s); return *this; }
};
struct Second_826DBF98 {
  int w[2];
  Second_826DBF98() {}
  Second_826DBF98(const Second_826DBF98 &s) { fn_826D6238(this, &s); }
  Second_826DBF98 &operator=(const Second_826DBF98 &s) { fn_826D6290(this, &s); return *this; }
};
struct Value_826DBF98 { Str_826DBF98 first; Second_826DBF98 second; };
struct Entry_826DBF98 {
  int NextInChain;
  unsigned int HashValue;
  Value_826DBF98 Value;
  Entry_826DBF98(const Value_826DBF98 &k, int next) : NextInChain(next), Value(k) {}
  Entry_826DBF98(const Entry_826DBF98 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_826DBF98 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826DBF98 {
  Table_826DBF98 *pTable;
  Entry_826DBF98 &E(unsigned int index) { return ((Entry_826DBF98 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826DA208(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826DBF98(Hash_826DBF98 *m, void *a, const Value_826DBF98 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826DBF98 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826DBF98(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826DBF98 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826DBF98(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826DBF98 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826DBF98(*naturalEntry);
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
