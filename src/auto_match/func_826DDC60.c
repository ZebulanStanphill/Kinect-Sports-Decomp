typedef struct Entry_826DDC60 {
  int inserted;
  void *ref;
} Entry_826DDC60;

typedef struct Arg_826DDC60 {
  unsigned int *key;
  Entry_826DDC60 *entry;
} Arg_826DDC60;

extern void RtlEnterCriticalSection(int);
extern void RtlLeaveCriticalSection(int);
extern void fn_8267C4C8(void *ref);
extern void fn_82687270(void *ref);
extern void fn_826DBE10(int table, int table2, Arg_826DDC60 *arg, unsigned int hash);

void fn_826DDC60(int self, unsigned int *key, void *ref)
{
  unsigned int locked = 0;
  Entry_826DDC60 entry;
  Arg_826DDC60 arg;

  if (*(int *)(self + 0x74) < 2) {
    locked = self;
    RtlEnterCriticalSection(self + 0xac);
  }
  entry.ref = ref;
  entry.inserted = 0;
  if (ref != 0)
    fn_8267C4C8(ref);
  arg.key = key;
  arg.entry = &entry;
  fn_826DBE10(self + 0xc8, self + 0xc8, &arg, *key >> 8 ^ *key);
  if (entry.inserted == 0 && entry.ref != 0)
    fn_82687270(entry.ref);
  if (locked != 0)
    RtlLeaveCriticalSection(locked + 0xac);
}
