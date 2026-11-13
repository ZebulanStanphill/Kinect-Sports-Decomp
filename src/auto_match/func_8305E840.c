typedef struct Vec_8305E840 { char pad[0x2c]; int *data; int count; } Vec_8305E840;
extern void fn_8305E3E8(Vec_8305E840 *, int);

void fn_8305E840(Vec_8305E840 *v, int pos)
{
  int i;

  for (i = pos; i < v->count; i++) {
    v->data[i] = v->data[i + 1];
  }
  fn_8305E3E8(v, v->count - 1);
}
