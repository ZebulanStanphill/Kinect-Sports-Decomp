// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826A2918(void *p, int flags);

struct Value_826A4BB0 {
  char b[8];
  ~Value_826A4BB0() { fn_826A2918(this, 0); }
};

struct Entry_826A4BB0 {
  int NextInChain;
  Value_826A4BB0 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826A4BB0(); NextInChain = -2; }
};

struct Table_826A4BB0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826A4BB0 {
  Table_826A4BB0 *pTable;
  Entry_826A4BB0 &E(unsigned int index) { return ((Entry_826A4BB0 *)(pTable + 1))[index]; }
};

extern "C" void fn_826A4BB0(Hash_826A4BB0 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826A4BB0 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
