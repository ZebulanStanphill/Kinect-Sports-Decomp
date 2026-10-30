// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_82711F20(void *p, int flags);

struct Value_826DA0A0 {
  char b[8];
  ~Value_826DA0A0() { fn_82711F20(this, 0); }
};

struct Entry_826DA0A0 {
  int NextInChain;
  int pad;
  Value_826DA0A0 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826DA0A0(); NextInChain = -2; }
};

struct Table_826DA0A0 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826DA0A0 {
  Table_826DA0A0 *pTable;
  Entry_826DA0A0 &E(unsigned int index) { return ((Entry_826DA0A0 *)(pTable + 1))[index]; }
};

extern "C" void fn_826DA0A0(Hash_826DA0A0 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826DA0A0 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
