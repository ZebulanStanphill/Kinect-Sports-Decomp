// Open-addressing hash set Clear (Scaleform-style HashSetBase::Clear).
extern "C" void fn_8267BE38(void *p);
extern "C" void fn_826A7918(void *v, int flags);

struct Key_826BE4B8 { char pad[0xc]; unsigned int hash; };
struct Value_826BE4B8 {
  Key_826BE4B8 *key; char rest[20];
  ~Value_826BE4B8() { fn_826A7918(this, 0); }
};

struct Entry_826BE4B8 {
  int NextInChain;
  int pad;
  Value_826BE4B8 Value;
  bool IsEmpty() const { return NextInChain == -2; }
  void Clear() { Value.~Value_826BE4B8(); NextInChain = -2; }
};

struct Table_826BE4B8 { unsigned int EntryCount; unsigned int SizeMask; };

struct Hash_826BE4B8 {
  Table_826BE4B8 *pTable;
  Entry_826BE4B8 &E(unsigned int index) { return ((Entry_826BE4B8 *)(pTable + 1))[index]; }
};

extern "C" void fn_826BE4B8(Hash_826BE4B8 *m)
{
  if (m->pTable) {
    for (unsigned int i = 0, n = m->pTable->SizeMask; i <= n; i++) {
      Entry_826BE4B8 *e = &m->E(i);
      if (!e->IsEmpty())
        e->Clear();
    }
    fn_8267BE38(m->pTable);
    m->pTable = 0;
  }
}
