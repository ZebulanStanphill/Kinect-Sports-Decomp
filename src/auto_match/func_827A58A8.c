typedef struct {
  int count;
  int mask;
} Tab_827A58A8;

typedef struct {
  Tab_827A58A8 *tab;
} Hash_827A58A8;

typedef struct {
  int next;
  char pad4[0x10];
} Ent_827A58A8;

typedef struct {
  Hash_827A58A8 *hash;
  int index;
} It_827A58A8;

#define E(t, i) (((Ent_827A58A8 *)((t) + 1))[i])

void fn_827A58A8(It_827A58A8 *it)
{
  Hash_827A58A8 *h = it->hash;

  if (it->index <= h->tab->mask) {
    it->index++;
    while ((unsigned int)it->index <= (unsigned int)it->hash->tab->mask) {
      if (E(it->hash->tab, it->index).next != -2) break;
      it->index++;
    }
  }
}
