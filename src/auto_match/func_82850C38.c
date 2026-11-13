int strcmp(const char *a, const char *b);

typedef struct Entry_82850C38 {
  int pad0;
  const char *name;           /* 0x04 */
  char pad8[0x48];
} Entry_82850C38;

typedef struct Table_82850C38 {
  unsigned int count;
  Entry_82850C38 *entries;
} Table_82850C38;

void fn_82850C38(Table_82850C38 *table, const char *name, unsigned int *out)
{
  unsigned int i;
  for (i = 0; i < table->count; i++) {
    if (strcmp(table->entries[i].name, name) == 0) {
      *out = i;
      return;
    }
  }
  *out = 0xffffffff;
}
