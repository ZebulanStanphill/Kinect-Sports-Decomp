// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826F8490(void *p, int flags);
extern "C" void fn_82696348(void *p);

struct Value_826BE288 {
  char a[24]; char b[16];
  ~Value_826BE288() { fn_826F8490(&a, 0); fn_82696348(&b); }
};

struct Entry_826BE288 {
  int NextInChain;
  int pad;
  Value_826BE288 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826BE288(); NextInChain = -2; }
};

struct Table_826BE288 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826BE288 {
  Table_826BE288 *pTable;
  Entry_826BE288 &E(unsigned int index) { return ((Entry_826BE288 *)(pTable + 1))[index]; }
};

extern "C" void fn_826BE288(Hash_826BE288 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826BE288 *e = &m->E(i);
      if (!e->IsEmpty())
        {
          fn_826F8490(&e->Value.a, 0);
          fn_82696348(&e->Value.b);
          e->NextInChain = -2;
        }
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
