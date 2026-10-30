// Open-addressing hash set add (HashSetBase::add): every access goes through the
// map, so the probe loop re-reads m->pTable->SizeMask as in the original.
extern "C" void fn_8273E5C8(void *dst, const void *src);
extern "C" void fn_8273E680(void *dst, const void *src);
extern "C" void fn_8273E6E0(void *dst, const void *src);
extern "C" void fn_8273F198(void *m, void *a, int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Key_8273F468 { char pad[0xc]; unsigned int hash; };
struct Value_8273F468 {
  Key_8273F468 *key; char rest[8];
  Value_8273F468() {}
  Value_8273F468(const Value_8273F468 &s) { fn_8273E680(this, &s); }
  Value_8273F468 &operator=(const Value_8273F468 &s) { fn_8273E5C8(this, &s); return *this; }
};

struct Entry_8273F468 {
  int NextInChain;
  Value_8273F468 Value;
  Entry_8273F468(const Value_8273F468 &k, int next) : NextInChain(next) { fn_8273E6E0(&Value, &k); }
  Entry_8273F468(const Entry_8273F468 &e) : NextInChain(e.NextInChain), Value(e.Value) {}
  bool IsEmpty() const { return NextInChain == -2; }
  unsigned int GetCachedHash(unsigned int mask) const { return Value.key->hash & mask; }
};

struct Table_8273F468 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8273F468 {
  Table_8273F468 *pTable;
  Entry_8273F468 &E(unsigned int index) { return ((Entry_8273F468 *)(pTable + 1))[index]; }
  void setRawCapacity(void *a, unsigned int n) { fn_8273F198(this, a, n); }
  void CheckExpand(void *a) {
    if (pTable == 0)
      setRawCapacity(a, 8);
    else if (pTable->EntryCount * 5 > (pTable->SizeMask + 1) * 4)
      setRawCapacity(a, (pTable->SizeMask + 1) * 2);
  }
};

extern "C" void fn_8273F468(Hash_8273F468 *m, void *a, const Value_8273F468 &key, unsigned int hashValue)
{
  m->CheckExpand(a);
  hashValue &= m->pTable->SizeMask;
  m->pTable->EntryCount++;
  int index = hashValue;
  Entry_8273F468 *naturalEntry = &m->E(index);
  if (naturalEntry->IsEmpty()) {
    new (naturalEntry) Entry_8273F468(key, -1);
  } else {
    int blankIndex = index;
    do {
      blankIndex = (blankIndex + 1) & m->pTable->SizeMask;
    } while (!m->E(blankIndex).IsEmpty());
    Entry_8273F468 *blankEntry = &m->E(blankIndex);
    if (naturalEntry->GetCachedHash(m->pTable->SizeMask) == (unsigned int)index) {
      new (blankEntry) Entry_8273F468(*naturalEntry);
      naturalEntry->Value = key;
      naturalEntry->NextInChain = blankIndex;
    } else {
      int collidedIndex = naturalEntry->GetCachedHash(m->pTable->SizeMask);
      for (;;) {
        Entry_8273F468 *e = &m->E(collidedIndex);
        if (e->NextInChain == index) {
          new (blankEntry) Entry_8273F468(*naturalEntry);
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
