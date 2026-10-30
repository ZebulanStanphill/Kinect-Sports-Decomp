// Open-addressing hash set add (HashSetBase::add): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826BDE10(void *dst, const void *src);
extern "C" void fn_826BE1B8(void *dst, const void *src);
extern "C" void fn_826BEAC0(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_826BF3C8 { char pad[0xc]; unsigned int hash; };
struct Value_826BF3C8 {
  Key_826BF3C8 *key; char rest[20];
  Value_826BF3C8() {}
  Value_826BF3C8(const Value_826BF3C8 &s) { fn_826BDE10(this, &s); }
  Value_826BF3C8 &operator=(const Value_826BF3C8 &s) { fn_826BE1B8(this, &s); return *this; }
};

struct Entry_826BF3C8 {
  int NextInChain;
  int pad;
  Value_826BF3C8 Value;
  Entry_826BF3C8(const Value_826BF3C8 &k, int next) : NextInChain(next), Value(k) {}
  Entry_826BF3C8(const Entry_826BF3C8 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826BF3C8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826BF3C8 {
  Table_826BF3C8 *pTable;
  Entry_826BF3C8 &E(unsigned int index) { return ((Entry_826BF3C8 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826BEAC0(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826BF3C8(Hash_826BF3C8 *m, void *a, const Value_826BF3C8 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826BF3C8 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826BF3C8(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826BF3C8 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826BF3C8(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826BF3C8 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826BF3C8(*naturalEntry);
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
