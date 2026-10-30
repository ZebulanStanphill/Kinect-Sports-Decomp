// Open-addressing hash set add (Scaleform-style HashSetBase::add) whose
// value keeps the key's hash at +8 and is assigned from a key/value
// reference pair. The probe loop re-reads m->pTable->SizeMask through the
// map each time, which keeps the mask load inside the loop as in the original.
extern "C" void fn_827A7338(void *m, void *a, int n);
extern "C" void fn_827A69F8(void *dst, const void *src, int next);
extern "C" void fn_827A6A50(void *dst, const void *src);
extern "C" void fn_827A5AB8(void *dst, int src);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct KeyRef_827A7C28 { int first; const int *second; };

struct Key_827A7C28 {
  int p;
  Key_827A7C28 &operator=(int s) { fn_827A5AB8(this, s); return *this; }
};

struct Value_827A7C28 {
  Key_827A7C28 first;
  int f4;
  unsigned int hash;
  int second;
  Value_827A7C28 &operator=(const KeyRef_827A7C28 &k) { first = k.first; second = *k.second; return *this; }
};

struct Entry_827A7C28 {
  int NextInChain;
  Value_827A7C28 Value;
  Entry_827A7C28(const KeyRef_827A7C28 &k, int next) { fn_827A69F8(this, &k, next); }
  Entry_827A7C28(const Entry_827A7C28 &e) { fn_827A6A50(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.hash & mask; }
};

struct Table_827A7C28 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_827A7C28 {
  Table_827A7C28 *pTable;
  Entry_827A7C28 &E(unsigned int index) { return ((Entry_827A7C28 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_827A7338(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_827A7C28(Hash_827A7C28 *m, void *a, const KeyRef_827A7C28 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_827A7C28 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_827A7C28(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_827A7C28 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_827A7C28(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_827A7C28 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_827A7C28(*naturalEntry);
          e->NextInChain = blankIndex;
          break;
        }
        collidedIndex = e->NextInChain;
      }
      naturalEntry->Value = key;
      naturalEntry->NextInChain = -1;
    }
  }
}
