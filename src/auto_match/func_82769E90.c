/* Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore)
   with the hash value cached in each entry; the key is reached through a pointer. */
typedef struct Entry_82769E90 { int next; unsigned int hash; unsigned int key; int rest[2]; } Entry_82769E90;
typedef struct Table_82769E90 { unsigned int count; unsigned int mask; Entry_82769E90 e[1]; } Table_82769E90;
typedef struct Hash_82769E90 { Table_82769E90 *table; } Hash_82769E90;
typedef struct Ref_82769E90 { const unsigned int *v; } Ref_82769E90;

int fn_82769E90(Hash_82769E90 *m, const Ref_82769E90 *key, unsigned int hashValue)
{
  int index = hashValue;
  Entry_82769E90 *e = &m->table->e[index];
  if (e->next == -2)
    return -1;
  if (e->hash != hashValue)
    return -1;
  for (;;) {
    if (e->hash == hashValue && e->key == *key->v)
      return index;
    index = e->next;
    if (index == -1)
      return -1;
    e = &m->table->e[index];
  }
}
