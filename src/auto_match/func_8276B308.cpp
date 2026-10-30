// Open-addressing hash set add (Scaleform-style HashSetBase::add) for a
// two-unsigned-short value built from a key of two references. The probe
// loop re-reads m->pTable->SizeMask through the map each time, which keeps
// the mask load inside the loop as in the original.
extern "C" void fn_82769F60(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_8276B308 { const unsigned short *first; const unsigned short *second; };

struct Value_8276B308 {
  unsigned short first;
  unsigned short second;
  Value_8276B308(const Key_8276B308 &k) : first(*k.first), second(*k.second) {}
  Value_8276B308(const Value_8276B308 &v) : first(v.first), second(v.second) {}
  Value_8276B308 &operator=(const Key_8276B308 &k) { first = *k.first; second = *k.second; return *this; }
};

struct Entry_8276B308 {
  int NextInChain;
  Value_8276B308 Value;
  Entry_8276B308(const Key_8276B308 &k, int next) : NextInChain(next), Value(k) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.first & mask; }
};

struct Table_8276B308 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8276B308 {
  Table_8276B308 *pTable;
  Entry_8276B308 &E(unsigned int index) { return ((Entry_8276B308 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_82769F60(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8276B308(Hash_8276B308 *m, void *a, const Key_8276B308 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8276B308 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8276B308(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8276B308 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_8276B308(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_8276B308 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8276B308(*naturalEntry);
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
