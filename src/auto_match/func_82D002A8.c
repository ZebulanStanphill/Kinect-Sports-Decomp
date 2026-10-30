typedef struct Tab { int *data; int x4; int count; } Tab;

void fn_82D002A8(Tab *t)
{
  int i;
  for (i = 0; i < t->count + 1; i++)
    t->data[i] = -1;
  t->x4 = 0;
}
