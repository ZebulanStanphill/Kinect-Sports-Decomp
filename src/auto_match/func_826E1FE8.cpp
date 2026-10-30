// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826DF9C0(void *p, int flags);

struct Value_826E1FE8 {
  char b[12];
  ~Value_826E1FE8() { fn_826DF9C0(this, 0); }
};

struct Entry_826E1FE8 {
  int NextInChain;
  int pad;
  Value_826E1FE8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826E1FE8(); NextInChain = -2; }
};

struct Table_826E1FE8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826E1FE8 {
  Table_826E1FE8 *pTable;
  Entry_826E1FE8 &E(unsigned int index) { return ((Entry_826E1FE8 *)(pTable + 1))[index]; }
};

extern "C" void fn_826E1FE8(Hash_826E1FE8 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826E1FE8 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
