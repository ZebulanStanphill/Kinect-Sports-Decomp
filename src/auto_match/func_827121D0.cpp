// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_82711F20(void *p, int flags);

struct Value_827121D0 {
  char b[12];
  ~Value_827121D0() { fn_82711F20(this, 0); }
};

struct Entry_827121D0 {
  int NextInChain;
  int pad;
  Value_827121D0 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_827121D0(); NextInChain = -2; }
};

struct Table_827121D0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_827121D0 {
  Table_827121D0 *pTable;
  Entry_827121D0 &E(unsigned int index) { return ((Entry_827121D0 *)(pTable + 1))[index]; }
};

extern "C" void fn_827121D0(Hash_827121D0 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_827121D0 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
