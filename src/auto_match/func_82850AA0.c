int strcmp(const char *a, const char *b);

typedef struct Entry_82850AA0 {
  const char *name;           /* 0x00 */
  char pad4[0x4c];
} Entry_82850AA0;

typedef struct Table_82850AA0 {
  unsigned int count;
  Entry_82850AA0 *entries;
} Table_82850AA0;

void fn_82850AA0(Table_82850AA0 *table, const char *name, unsigned int *out)
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
