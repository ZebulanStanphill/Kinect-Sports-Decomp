// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_82704230(void *p, int flags);

struct Value_82704BC0 {
  char b[24];
  ~Value_82704BC0() { fn_82704230(this, 0); }
};

struct Entry_82704BC0 {
  int NextInChain;
  Value_82704BC0 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_82704BC0(); NextInChain = -2; }
};

struct Table_82704BC0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82704BC0 {
  Table_82704BC0 *pTable;
  Entry_82704BC0 &E(unsigned int index) { return ((Entry_82704BC0 *)(pTable + 1))[index]; }
};

extern "C" void fn_82704BC0(Hash_82704BC0 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_82704BC0 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
