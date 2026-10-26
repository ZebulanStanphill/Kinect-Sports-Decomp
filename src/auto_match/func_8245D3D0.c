typedef struct {
  int unk0, unk4, unk8;
  int used;
  int pad[4];
} E;

typedef struct {
  int unk0;
  E *items;
  int unk8, unkC;
  unsigned int n;
} X;

int fn_8245D3D0(X *p)
{
  int c = 0;
  unsigned int i;

  for (i = 0; i < p->n; i++)
    if (p->items[i].used != 0)
      c++;
  return c;
}
