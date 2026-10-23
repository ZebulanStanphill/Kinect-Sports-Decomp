typedef struct {
  unsigned int key;
  int pad[4];
  int value;
} Entry;

typedef struct {
  char pad[0x20];
  int count;
  Entry *entries;
} Table;

int fn_82817F30(Table *t, unsigned int key, int *out)
{
  int i;

  if (t != 0) {
    for (i = 0; i < t->count; i++) {
      if (t->entries[i].key == key) {
        *out = t->entries[i].value;
        return 0;
      }
    }
  }
  *out = 0;
  return 1;
}
