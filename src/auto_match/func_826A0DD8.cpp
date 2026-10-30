// Open-addressing hash set add (HashSetCachedBase::add with a cached hash): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_826A0C18(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" void fn_8269F140(void *dst, const void *src);
extern "C" void fn_8269FC20(void *dst, const void *src);
extern "C" void fn_8269DDA0(void *dst, const void *src);
struct Vec_826A0DD8 { int w[4]; };
struct Sub_826A0DD8 {
  int w[3];
  Sub_826A0DD8 &operator=(const Sub_826A0DD8 &s) { fn_8269DDA0(this, &s); return *this; }
};
struct Key_826A0DD8 { const Vec_826A0DD8 *a; const Sub_826A0DD8 *b; };
struct Value_826A0DD8 {
  Vec_826A0DD8 first; Sub_826A0DD8 second;
  Value_826A0DD8() {}
  Value_826A0DD8(const Key_826A0DD8 &k) { fn_8269F140(this, &k); }
  Value_826A0DD8(const Value_826A0DD8 &s) { fn_8269FC20(this, &s); }
  void set(const Key_826A0DD8 &k) { first = *k.a; second = *k.b; }
};
struct Entry_826A0DD8 {
  int NextInChain;
  unsigned int HashValue;
  Value_826A0DD8 Value;
  Entry_826A0DD8(const Key_826A0DD8 &k, int next) : NextInChain(next), Value(k) {}
  Entry_826A0DD8(const Entry_826A0DD8 &e) : NextInChain(e.NextInChain), HashValue(e.HashValue), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return HashValue; }
  void SetCachedHash(unsigned int h) { HashValue = h; }
};

struct Table_826A0DD8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826A0DD8 {
  Table_826A0DD8 *pTable;
  Entry_826A0DD8 &E(unsigned int index) { return ((Entry_826A0DD8 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826A0C18(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826A0DD8(Hash_826A0DD8 *m, void *a, const Key_826A0DD8 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826A0DD8 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826A0DD8(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826A0DD8 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826A0DD8(*naturalEntry);
      naturalEntry->Value.set(key);
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826A0DD8 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826A0DD8(*naturalEntry);
          e->NextInChain = blankIndex;
          break;
        }
        collidedIndex = e->NextInChain;
      }
      naturalEntry->Value.set(key);
      naturalEntry->NextInChain = -1;
    }
  }
  naturalEntry->SetCachedHash(hashValue);
}
