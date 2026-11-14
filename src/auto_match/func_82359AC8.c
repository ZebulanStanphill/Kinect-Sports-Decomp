typedef struct Player_82359AC8 {
  char pad0[0x74];
  int active;
} Player_82359AC8;
typedef struct Map_82359AC8 {
  int unk0;
  int head;
  unsigned int size;
} Map_82359AC8;
typedef struct Vec_82359AC8 {
  Map_82359AC8 **begin;
  Map_82359AC8 **end;
} Vec_82359AC8;
typedef struct Self_82359AC8 {
  char pad0[8];
  Vec_82359AC8 ***teams;
} Self_82359AC8;
extern Player_82359AC8 *fn_822ABA88(Map_82359AC8 *map, unsigned int key);
int fn_82359AC8(Self_82359AC8 *self)
{
  int count = 0;
  Vec_82359AC8 *v = **self->teams;
  unsigned int n = v->end - v->begin;
  unsigned int j;
  for (j = 0; j < n; j++) {
    Map_82359AC8 *m = v->begin[j];
    unsigned int i;
    for (i = 0; i < m->size; i++) {
      if (fn_822ABA88(m, i)->active != 0) {
        count++;
      }
    }
  }
  return count;
}
