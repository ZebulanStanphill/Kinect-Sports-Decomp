typedef struct {
  int count;
  int mask;
} Tab_8273CF58;

typedef struct {
  Tab_8273CF58 *tab;
} Hash_8273CF58;

typedef struct {
  int next;
  char pad4[0xc];
} Ent_8273CF58;

typedef struct {
  Hash_8273CF58 *hash;
  int index;
} It_8273CF58;

#define E(t, i) (((Ent_8273CF58 *)((t) + 1))[i])

void fn_8273CF58(It_8273CF58 *it)
{
  Hash_8273CF58 *h = it->hash;

  if (it->index <= h->tab->mask) {
    it->index++;
    while ((unsigned int)it->index <= (unsigned int)it->hash->tab->mask) {
      if (E(it->hash->tab, it->index).next != -2) break;
      it->index++;
    }
  }
}
