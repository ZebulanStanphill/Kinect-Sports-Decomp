// Open-addressing hash set add (Scaleform-style HashSetBase::add): entries
// follow the {count, mask} table header. The probe loop re-reads
// m->pTable->SizeMask through the map each time, which keeps the mask load
// inside the loop as in the original.
struct Key_826B2138 { char pad[0xc]; unsigned int hash; };
struct Value_826B2138 { Key_826B2138 *key; char rest[8]; };
extern "C" void fn_826B11C8(void *m, void *a, int n);
extern "C" void fn_826AE9A8(void *dst, const void *src, int next);
extern "C" void fn_826AFA48(void *dst, const void *src);
extern "C" void fn_826AB6A0(void *dst, const void *src);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Entry_826B2138 {
  int NextInChain;
  Value_826B2138 Value;
  Entry_826B2138(const Value_826B2138 &k, int next) { fn_826AE9A8(this, &k, next); }
  Entry_826B2138(const Entry_826B2138 &e) { fn_826AFA48(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826B2138 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826B2138 {
  Table_826B2138 *pTable;
  Entry_826B2138 &E(unsigned int index) { return ((Entry_826B2138 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826B11C8(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826B2138(Hash_826B2138 *m, void *a, const Value_826B2138 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826B2138 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826B2138(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826B2138 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826B2138(*naturalEntry);
      fn_826AB6A0(&naturalEntry->Value, &key);
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826B2138 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826B2138(*naturalEntry);
          e->NextInChain = blankIndex;
          break;
        }
        collidedIndex = e->NextInChain;
      }
      fn_826AB6A0(&naturalEntry->Value, &key);
      naturalEntry->NextInChain = -1;
    }
  }
}
