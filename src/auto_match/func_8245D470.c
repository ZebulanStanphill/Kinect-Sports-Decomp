typedef struct Ent_8245D470 {
  int pad[4];
  void (*fn)(int, int);
  int a;
  int pad2;
  int b;
} Ent_8245D470;
typedef struct Tab_8245D470 {
  int pad;
  Ent_8245D470 *ents;
  int pad2[2];
  unsigned count;
} Tab_8245D470;

void fn_8245D470(Tab_8245D470 *o, unsigned i)
{
  if (i >= o->count) return;
  if (o->ents[i].fn == 0) return;
  o->ents[i].fn(o->ents[i].a, o->ents[i].b);
}
