/* Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore)
   with the hash value cached in each entry. */
typedef struct Entry_82773DF0 { int next; unsigned int hash; unsigned int value; } Entry_82773DF0;
typedef struct Table_82773DF0 { unsigned int count; unsigned int mask; Entry_82773DF0 e[1]; } Table_82773DF0;
typedef struct Hash_82773DF0 { Table_82773DF0 *table; } Hash_82773DF0;

int fn_82773DF0(Hash_82773DF0 *m, const unsigned int *key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_82773DF0 *e = &m->table->e[index];
  if (e->next == -2)
    return -1;
  if (e->hash != hashValue)
    return -1;
  for (;;) {
    if (e->hash == hashValue && e->value == *key)
      return index;
    index = e->next;
    if (index == -1)
      return -1;
    e = &m->table->e[index];
  }
}
