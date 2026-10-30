// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826D7840(void *p);

struct Value_826DA118 {
  char b[12];
  ~Value_826DA118() { fn_826D7840(this); }
};

struct Entry_826DA118 {
  int NextInChain;
  int pad;
  Value_826DA118 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826DA118(); NextInChain = -2; }
};

struct Table_826DA118 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826DA118 {
  Table_826DA118 *pTable;
  Entry_826DA118 &E(unsigned int index) { return ((Entry_826DA118 *)(pTable + 1))[index]; }
};

extern "C" void fn_826DA118(Hash_826DA118 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826DA118 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
