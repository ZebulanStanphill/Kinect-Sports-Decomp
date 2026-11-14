typedef struct Entry_822ACDA0 { int f0; char name[0x84]; } Entry_822ACDA0;
typedef struct Table_822ACDA0 { int f0; Entry_822ACDA0 *entries; } Table_822ACDA0;
extern unsigned int fn_8251FBA8(void *block);

static __forceinline int StrCmp_822ACDA0(const unsigned char *a, const unsigned char *b)
{
  unsigned char cb = *b;
  unsigned char ca = *a;

  while (cb == ca) {
    b++;
    a++;
    if (cb == 0) {
      return 0;
    }
    cb = *b;
    ca = *a;
  }
  return cb - ca;
}

Entry_822ACDA0 *fn_822ACDA0(Table_822ACDA0 *table, const char *name)
{
  Entry_822ACDA0 *e;
  int i;

  if (table->entries != 0) {
    e = table->entries;
    for (i = 0; i < (int)(fn_8251FBA8(table->entries) / sizeof(Entry_822ACDA0)); e++, i++) {
      if (StrCmp_822ACDA0((const unsigned char *)e->name, (const unsigned char *)name) == 0) {
        return e;
      }
    }
  }
  return 0;
}
