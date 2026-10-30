// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_8273E620(void *p);

struct Value_8273E988 {
  char b[12];
  ~Value_8273E988() { fn_8273E620(this); }
};

struct Entry_8273E988 {
  int NextInChain;
  Value_8273E988 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_8273E988(); NextInChain = -2; }
};

struct Table_8273E988 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8273E988 {
  Table_8273E988 *pTable;
  Entry_8273E988 &E(unsigned int index) { return ((Entry_8273E988 *)(pTable + 1))[index]; }
};

extern "C" void fn_8273E988(Hash_8273E988 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_8273E988 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
