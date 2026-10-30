// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826F8490(void *p, int flags);
extern "C" void fn_82696348(void *p);

struct Value_826A9040 {
  char a[8]; char b[16];
  ~Value_826A9040() { fn_826F8490(&a, 0); fn_82696348(&b); }
};

struct Entry_826A9040 {
  int NextInChain;
  int pad;
  Value_826A9040 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826A9040(); NextInChain = -2; }
};

struct Table_826A9040 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826A9040 {
  Table_826A9040 *pTable;
  Entry_826A9040 &E(unsigned int index) { return ((Entry_826A9040 *)(pTable + 1))[index]; }
};

extern "C" void fn_826A9040(Hash_826A9040 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826A9040 *e = &m->E(i);
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
