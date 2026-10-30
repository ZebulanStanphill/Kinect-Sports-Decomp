// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_8268BA10(void *dst, const void *src);
extern "C" void fn_826D8A90(void *dst, const void *src);
extern "C" void fn_826D8AF0(void *dst, const void *src, int next);
extern "C" void fn_826DA4F8(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Str_826DCC40 {
  int w[1];
  Str_826DCC40() {}
  Str_826DCC40 &operator=(const Str_826DCC40 &s) { fn_8268BA10(this, &s); return *this; }
};
struct Key_826DCC40 { const Str_826DCC40 *a; const unsigned char *b; };
struct Value_826DCC40 {
  Str_826DCC40 first; unsigned char second;
  Value_826DCC40() {}
  Value_826DCC40(const Key_826DCC40 &k) : first(*k.a), second(*k.b) {}
  Value_826DCC40 &operator=(const Key_826DCC40 &k) { first = *k.a; second = *k.b; return *this; }
};

struct Entry_826DCC40 {
  int NextInChain;
  unsigned int HashValue;
  Value_826DCC40 Value;
  Entry_826DCC40(const Key_826DCC40 &k, int next) { fn_826D8AF0(this, &k, next); }
  Entry_826DCC40(const Entry_826DCC40 &e) { fn_826D8A90(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_826DCC40 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826DCC40 {
  Table_826DCC40 *pTable;
  Entry_826DCC40 &E(unsigned int index) { return ((Entry_826DCC40 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826DA4F8(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826DCC40(Hash_826DCC40 *m, void *a, const Key_826DCC40 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826DCC40 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826DCC40(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826DCC40 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826DCC40(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826DCC40 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826DCC40(*naturalEntry);
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
