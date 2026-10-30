// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_8269F0E0(void *p, int flags);

struct Value_826A0A70 {
  char b[28];
  ~Value_826A0A70() { fn_8269F0E0(this, 0); }
};

struct Entry_826A0A70 {
  int NextInChain;
  int pad;
  Value_826A0A70 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826A0A70(); NextInChain = -2; }
};

struct Table_826A0A70 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826A0A70 {
  Table_826A0A70 *pTable;
  Entry_826A0A70 &E(unsigned int index) { return ((Entry_826A0A70 *)(pTable + 1))[index]; }
};

extern "C" void fn_826A0A70(Hash_826A0A70 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826A0A70 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
