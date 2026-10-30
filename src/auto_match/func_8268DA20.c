typedef struct Tab_8268DA20 {
  unsigned int count;
  unsigned short idx[0x1fe];
  void *slots[1];
} Tab_8268DA20;
typedef struct Ent_8268DA20 { int pad; unsigned int key; } Ent_8268DA20;

void fn_8268DA20(Tab_8268DA20 *t, Ent_8268DA20 *e)
{
  unsigned int b;
  unsigned short i;
  int k;
  void **q;

  b = (e->key >> 3) + 2;
  i = ((unsigned short *)t)[b];
  if (i == 0) {
    if (t->count + 8 > 0x400) {
      return;
    }
    i = (unsigned short)(t->count + 1);
    ((unsigned short *)t)[b] = i;
    q = &t->slots[t->count + 1];
    for (k = 0; k < 8; k++) {
      q[k] = 0;
    }
    t->count = t->count + 8;
  }
  t->slots[(e->key & 7) + i] = e;
}
