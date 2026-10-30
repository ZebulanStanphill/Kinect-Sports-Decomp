// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826AE5C0(void *p);

struct Value_826B1150 {
  char b[16];
  ~Value_826B1150() { fn_826AE5C0(this); }
};

struct Entry_826B1150 {
  int NextInChain;
  Value_826B1150 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826B1150(); NextInChain = -2; }
};

struct Table_826B1150 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826B1150 {
  Table_826B1150 *pTable;
  Entry_826B1150 &E(unsigned int index) { return ((Entry_826B1150 *)(pTable + 1))[index]; }
};

extern "C" void fn_826B1150(Hash_826B1150 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826B1150 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
