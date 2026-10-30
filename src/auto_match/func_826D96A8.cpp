// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826DF9C0(void *p, int flags);

struct Value_826D96A8 {
  char b[12];
  ~Value_826D96A8() { fn_826DF9C0(this, 0); }
};

struct Entry_826D96A8 {
  int NextInChain;
  Value_826D96A8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826D96A8(); NextInChain = -2; }
};

struct Table_826D96A8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826D96A8 {
  Table_826D96A8 *pTable;
  Entry_826D96A8 &E(unsigned int index) { return ((Entry_826D96A8 *)(pTable + 1))[index]; }
};

extern "C" void fn_826D96A8(Hash_826D96A8 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826D96A8 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
