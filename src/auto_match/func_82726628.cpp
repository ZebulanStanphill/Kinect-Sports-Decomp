// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_827246F8(void *p);

struct Value_82726628 {
  char b[8];
  ~Value_82726628() { fn_827246F8(this); }
};

struct Entry_82726628 {
  int NextInChain;
  int pad;
  Value_82726628 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_82726628(); NextInChain = -2; }
};

struct Table_82726628 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_82726628 {
  Table_82726628 *pTable;
  Entry_82726628 &E(unsigned int index) { return ((Entry_82726628 *)(pTable + 1))[index]; }
};

extern "C" void fn_82726628(Hash_82726628 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_82726628 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
