// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_8267C4F0(void *p);

struct Value_826DAE08 {
  void *p;
  ~Value_826DAE08() { if (p) fn_8267C4F0(p); }
};

struct Entry_826DAE08 {
  int NextInChain;
  unsigned int HashValue;
  Value_826DAE08 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826DAE08(); NextInChain = -2; }
};

struct Table_826DAE08 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826DAE08 {
  Table_826DAE08 *pTable;
  Entry_826DAE08 &E(unsigned int index) { return ((Entry_826DAE08 *)(pTable + 1))[index]; }
};

extern "C" void fn_826DAE08(Hash_826DAE08 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826DAE08 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
