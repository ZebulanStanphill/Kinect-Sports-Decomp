/* Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore)
   with the hash value cached in each entry; the key's first word is compared signed. */
typedef struct Entry_826F04D0 { int next; unsigned int hash; int key; int rest[2]; } Entry_826F04D0;
typedef struct Table_826F04D0 { unsigned int count; unsigned int mask; Entry_826F04D0 e[1]; } Table_826F04D0;
typedef struct Hash_826F04D0 { Table_826F04D0 *table; } Hash_826F04D0;

int fn_826F04D0(Hash_826F04D0 *m, const int *key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_826F04D0 *e = &m->table->e[index];
  if (e->next == -2)
    return -1;
  if (e->hash != hashValue)
    return -1;
  for (;;) {
    if (e->hash == hashValue && e->key == *key)
      return index;
    index = e->next;
    if (index == -1)
      return -1;
    e = &m->table->e[index];
  }
}
