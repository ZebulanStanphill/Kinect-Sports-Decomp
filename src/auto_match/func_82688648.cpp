// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_8268A158(void *p);

struct Value_82688648 {
  char b[8];
  ~Value_82688648() { fn_8268A158(this); }
};

struct Entry_82688648 {
  int NextInChain;
  int pad;
  Value_82688648 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_82688648(); NextInChain = -2; }
};

struct Table_82688648 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82688648 {
  Table_82688648 *pTable;
  Entry_82688648 &E(unsigned int index) { return ((Entry_82688648 *)(pTable + 1))[index]; }
};

extern "C" void fn_82688648(Hash_82688648 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_82688648 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
