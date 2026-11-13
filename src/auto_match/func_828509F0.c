int strcmp(const char *a, const char *b);

typedef struct Entry_828509F0 {
  const char *name;           /* 0x00 */
  char pad4[0x4c];
} Entry_828509F0;

typedef struct Table_828509F0 {
  unsigned int count;
  Entry_828509F0 *entries;
} Table_828509F0;

void fn_828509F0(Table_828509F0 *table, const char *name, Entry_828509F0 **out)
{
  unsigned int i;
  for (i = 0; i < table->count; i++) {
    if (strcmp(table->entries[i].name, name) == 0) {
      *out = &table->entries[i];
      return;
    }
  }
  *out = 0;
}
