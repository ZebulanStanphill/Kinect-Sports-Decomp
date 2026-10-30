// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_827A5B60(void *p, int flags);

struct Value_827A71A0 {
  char b[16];
  ~Value_827A71A0() { fn_827A5B60(this, 0); }
};

struct Entry_827A71A0 {
  int NextInChain;
  Value_827A71A0 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_827A71A0(); NextInChain = -2; }
};

struct Table_827A71A0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_827A71A0 {
  Table_827A71A0 *pTable;
  Entry_827A71A0 &E(unsigned int index) { return ((Entry_827A71A0 *)(pTable + 1))[index]; }
};

extern "C" void fn_827A71A0(Hash_827A71A0 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_827A71A0 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
