// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826886C0(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" void fn_8268C750(void *dst, const void *src);
extern "C" void fn_8268BA10(void *dst, const void *src);
struct Str_826888B8 {
  int w;
  Str_826888B8() {}
  Str_826888B8(const Str_826888B8 &s) { fn_8268C750(this, &s); }
  Str_826888B8 &operator=(const Str_826888B8 &s) { fn_8268BA10(this, &s); return *this; }
};
struct Value_826888B8 { Str_826888B8 first; Str_826888B8 second; };
struct Entry_826888B8 {
  int NextInChain;
  unsigned int HashValue;
  Value_826888B8 Value;
  Entry_826888B8(const Value_826888B8 &k, int next) : NextInChain(next), Value(k) {}
  Entry_826888B8(const Entry_826888B8 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_826888B8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826888B8 {
  Table_826888B8 *pTable;
  Entry_826888B8 &E(unsigned int index) { return ((Entry_826888B8 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826886C0(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826888B8(Hash_826888B8 *m, void *a, const Value_826888B8 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826888B8 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826888B8(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826888B8 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826888B8(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826888B8 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826888B8(*naturalEntry);
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
