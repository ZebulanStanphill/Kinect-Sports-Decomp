typedef struct Item_82850FA8 { char pad[8]; int id; } Item_82850FA8;
typedef struct Rec_82850FA8 { char pad[8]; unsigned cnt; Item_82850FA8 **items; } Rec_82850FA8;
typedef struct Ent_82850FA8 { unsigned count; Rec_82850FA8 *recs; char pad[0xc]; } Ent_82850FA8;
typedef struct Obj_82850FA8 { char pad[0x17c]; Ent_82850FA8 *t; } Obj_82850FA8;
extern int fn_828114A8();
extern int fn_82811500();

void fn_82850FA8(Obj_82850FA8 *o, int *tab, int i, int j, int k)
{
  Ent_82850FA8 *e = &o->t[i];
  unsigned cur = ((unsigned *)tab[k + 0x10])[i];
  Rec_82850FA8 *rec;
  unsigned n;
  int id;

  if (cur < e->count) {
    rec = &e->recs[cur];
    for (n = 0; n < rec->cnt; n++) {
      id = rec->items[n]->id;
      fn_82811500(tab[k + 2], id);
      ((char *)tab[k + 4])[id] = 0;
    }
  }
  ((int *)tab[k + 0x10])[i] = j;
  {
  Rec_82850FA8 *r2 = &e->recs[j];
  for (n = 0; n < r2->cnt; n++) {
    fn_828114A8(tab[k + 2], r2->items[n]->id);
  }
  }
}
