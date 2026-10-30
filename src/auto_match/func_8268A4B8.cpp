// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_8268A158(void *p);

struct Value_8268A4B8 {
  char b[16];
  ~Value_8268A4B8() { fn_8268A158(this); }
};

struct Entry_8268A4B8 {
  int NextInChain;
  int pad;
  Value_8268A4B8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_8268A4B8(); NextInChain = -2; }
};

struct Table_8268A4B8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_8268A4B8 {
  Table_8268A4B8 *pTable;
  Entry_8268A4B8 &E(unsigned int index) { return ((Entry_8268A4B8 *)(pTable + 1))[index]; }
};

extern "C" void fn_8268A4B8(Hash_8268A4B8 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_8268A4B8 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
