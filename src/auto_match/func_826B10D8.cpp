// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826AE638(void *p);

struct Value_826B10D8 {
  char b[12];
  ~Value_826B10D8() { fn_826AE638(this); }
};

struct Entry_826B10D8 {
  int NextInChain;
  Value_826B10D8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826B10D8(); NextInChain = -2; }
};

struct Table_826B10D8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826B10D8 {
  Table_826B10D8 *pTable;
  Entry_826B10D8 &E(unsigned int index) { return ((Entry_826B10D8 *)(pTable + 1))[index]; }
};

extern "C" void fn_826B10D8(Hash_826B10D8 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826B10D8 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
