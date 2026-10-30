// Open-addressing hash set add (Scaleform-style HashSetBase::add): entries
// follow the {count, mask} table header. The probe loop re-reads
// m->pTable->SizeMask through the map each time, which keeps the mask load
// inside the loop as in the original.
struct Key_826C23D0 { char pad[0xc]; unsigned int hash; };
struct Value_826C23D0 { Key_826C23D0 *key; char rest[36]; };
extern "C" void fn_826C11C0(void *m, void *a, int n);
extern "C" void fn_826C0278(void *dst, const void *src);
extern "C" void fn_826C1018(void *dst, const void *src);
extern "C" void fn_826BE148(void *dst, const void *src);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Entry_826C23D0 {
  int NextInChain;
  int pad;
  Value_826C23D0 Value;
  Entry_826C23D0(const Value_826C23D0 &k, int next) : NextInChain(next) { fn_826C0278(&Value, &k); }
  Entry_826C23D0(const Entry_826C23D0 &e) { fn_826C1018(this, &e); }
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_826C23D0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826C23D0 {
  Table_826C23D0 *pTable;
  Entry_826C23D0 &E(unsigned int index) { return ((Entry_826C23D0 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_826C11C0(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_826C23D0(Hash_826C23D0 *m, void *a, const Value_826C23D0 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_826C23D0 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_826C23D0(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_826C23D0 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_826C23D0(*naturalEntry);
      fn_826BE148(&naturalEntry->Value, &key);
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_826C23D0 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_826C23D0(*naturalEntry);
          e->NextInChain = blankIndex;
          break;
        }
        collidedIndex = e->NextInChain;
      }
      fn_826BE148(&naturalEntry->Value, &key);
      naturalEntry->NextInChain = -1;
    }
  }
}
