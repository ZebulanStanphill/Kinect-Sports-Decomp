// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826C0018(void *p, int flags);

struct Value_826C0840 {
  char b[40];
  ~Value_826C0840() { fn_826C0018(this, 0); }
};

struct Entry_826C0840 {
  int NextInChain;
  int pad;
  Value_826C0840 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826C0840(); NextInChain = -2; }
};

struct Table_826C0840 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826C0840 {
  Table_826C0840 *pTable;
  Entry_826C0840 &E(unsigned int index) { return ((Entry_826C0840 *)(pTable + 1))[index]; }
};

extern "C" void fn_826C0840(Hash_826C0840 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826C0840 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
