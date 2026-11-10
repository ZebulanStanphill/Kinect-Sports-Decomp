typedef struct { int data[5]; } Entry_82852010;
typedef struct { int pad0; int index; } Key_82852010;
typedef struct { char pad0[0x3c]; Entry_82852010 *entries; } Table_82852010;
extern void fn_82860CB0(Entry_82852010 *entry);

void fn_82852010(Key_82852010 *key, Table_82852010 *table)
{
  if (table->entries == 0) {
    return;
  }
  fn_82860CB0(&table->entries[key->index]);
}
