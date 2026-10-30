// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_8267C498(void *p);

struct Value_826FB150 {
  void *p;
  ~Value_826FB150() { if (p) fn_8267C498(p); }
};

struct Entry_826FB150 {
  int NextInChain;
  unsigned int HashValue;
  Value_826FB150 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826FB150(); NextInChain = -2; }
};

struct Table_826FB150 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826FB150 {
  Table_826FB150 *pTable;
  Entry_826FB150 &E(unsigned int index) { return ((Entry_826FB150 *)(pTable + 1))[index]; }
};

extern "C" void fn_826FB150(Hash_826FB150 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826FB150 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
