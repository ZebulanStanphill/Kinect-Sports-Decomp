// Open-addressing hash set add (HashSetBase::add): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826A9470(void *dst, const void *src);
extern "C" void fn_826AE688(void *dst, const void *src);
extern "C" void fn_826B1F88(void *m, void *a);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_826AF920 { char pad[0xc]; unsigned int hash; };
struct Value_826AF920 {
  Key_826AF920 *key; char rest[12];
  Value_826AF920() {}
  Value_826AF920(const Value_826AF920 &s) { fn_826AE688(this, &s); }
  Value_826AF920 &operator=(const Value_826AF920 &s) { fn_826A9470(this, &s); return *this; }
};

struct Entry_826AF920 {
  int NextInChain;
  Value_826AF920 Value;
  Entry_826AF920(const Value_826AF920 &k, int next) : NextInChain(next), Value(k) {}
  Entry_826AF920(const Entry_826AF920 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826AF920 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826AF920 {
  Table_826AF920 *pTable;
  Entry_826AF920 &E(unsigned int index) { return ((Entry_826AF920 *)(pTable + 1))[index]; }
  void CheckExpand(void *a) { fn_826B1F88(this, a); }
};

extern "C" void fn_826AF920(Hash_826AF920 *m, void *a, const Value_826AF920 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826AF920 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826AF920(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826AF920 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826AF920(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826AF920 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826AF920(*naturalEntry);
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
