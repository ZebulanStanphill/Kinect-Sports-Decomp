extern "C" void fn_82775240(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct V8_827768D8 { int w[2]; };
struct V16_827768D8 { int w[4]; };
struct Key_827768D8 { const V8_827768D8 *a; const V16_827768D8 *b; };
struct Value_827768D8 {
  V8_827768D8 a;
  V16_827768D8 b;
  Value_827768D8(const Key_827768D8 &k) { a = *k.a; b = *k.b; }
  Value_827768D8(const Value_827768D8 &v) { a = v.a; b = v.b; }
  Value_827768D8 &operator=(const Key_827768D8 &k) { a = *k.a; b = *k.b; return *this; }
};
struct Entry_827768D8 {
  int NextInChain;
  unsigned int HashValue;
  Value_827768D8 Value;
  Entry_827768D8(const Key_827768D8 &k, int next) : NextInChain(next), Value(k) {}
  Entry_827768D8(const Entry_827768D8 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_827768D8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_827768D8 {
  Table_827768D8 *pTable;
  Entry_827768D8 &E(unsigned int index) { return ((Entry_827768D8 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_82775240(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_827768D8(Hash_827768D8 *m, void *a, const Key_827768D8 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_827768D8 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_827768D8(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_827768D8 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_827768D8(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_827768D8 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_827768D8(*naturalEntry);
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
