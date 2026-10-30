// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_8279B0B8(void *p);

struct Value_8279D848 {
  char b[8];
  ~Value_8279D848() { fn_8279B0B8(this); }
};

struct Entry_8279D848 {
  int NextInChain;
  Value_8279D848 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_8279D848(); NextInChain = -2; }
};

struct Table_8279D848 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8279D848 {
  Table_8279D848 *pTable;
  Entry_8279D848 &E(unsigned int index) { return ((Entry_8279D848 *)(pTable + 1))[index]; }
};

extern "C" void fn_8279D848(Hash_8279D848 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_8279D848 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
