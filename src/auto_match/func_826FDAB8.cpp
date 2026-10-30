// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826F8490(void *p, int flags);

struct Value_826FDAB8 {
  char b[8];
  ~Value_826FDAB8() { fn_826F8490(this, 0); }
};

struct Entry_826FDAB8 {
  int NextInChain;
  Value_826FDAB8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826FDAB8(); NextInChain = -2; }
};

struct Table_826FDAB8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826FDAB8 {
  Table_826FDAB8 *pTable;
  Entry_826FDAB8 &E(unsigned int index) { return ((Entry_826FDAB8 *)(pTable + 1))[index]; }
};

extern "C" void fn_826FDAB8(Hash_826FDAB8 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826FDAB8 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
