// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826DAA10(void *dst, const void *src);
extern "C" void fn_826DAA60(void *dst, const void *src);
extern "C" void fn_826DB220(void *m, void *a);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Value_826DACD8 {
  char b[4];
  Value_826DACD8() {}
  Value_826DACD8(const Value_826DACD8 &s) { fn_826DAA10(this, &s); }
  Value_826DACD8 &operator=(const Value_826DACD8 &s) { fn_826DAA60(this, &s); return *this; }
};

struct Entry_826DACD8 {
  int NextInChain;
  unsigned int HashValue;
  Value_826DACD8 Value;
  Entry_826DACD8(const Value_826DACD8 &k, int next) : NextInChain(next), Value(k) {}
  Entry_826DACD8(const Entry_826DACD8 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_826DACD8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826DACD8 {
  Table_826DACD8 *pTable;
  Entry_826DACD8 &E(unsigned int index) { return ((Entry_826DACD8 *)(pTable + 1))[index]; }
  void CheckExpand(void *a) { fn_826DB220(this, a); }
};

extern "C" void fn_826DACD8(Hash_826DACD8 *m, void *a, const Value_826DACD8 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826DACD8 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826DACD8(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826DACD8 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826DACD8(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826DACD8 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826DACD8(*naturalEntry);
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
