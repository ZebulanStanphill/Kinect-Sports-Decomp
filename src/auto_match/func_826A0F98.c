extern int fn_8269D260();
extern int fn_8269DDA0();
extern int fn_826A0DD8();
typedef struct Key_826A0F98 { unsigned int a; unsigned int b; unsigned int c; unsigned int d; } Key_826A0F98;
typedef struct Slot_826A0F98 { Key_826A0F98 key; int val; } Slot_826A0F98;
typedef struct Ent_826A0F98 { unsigned int pad[4]; Slot_826A0F98 s; } Ent_826A0F98;
typedef struct Tab_826A0F98 { Ent_826A0F98 *ents; } Tab_826A0F98;

void fn_826A0F98(Tab_826A0F98 *param_1,unsigned __int64 param_2,int *param_3)
{
  Key_826A0F98 *k;
  Ent_826A0F98 *ents;
  int idx;
  unsigned __int64 h;

  k = (Key_826A0F98 *)*param_3;
  h = (unsigned __int64)k->b;
  if ((k->a & 0x20000) != 0) {
    h = (__int64)*(short *)&k->c ^ h;
  }
  ents = param_1->ents;
  if (ents == 0 || (idx = fn_8269D260(param_1, param_3, *(unsigned int *)((char *)ents + 4) & h), idx < 0)) {
    fn_826A0DD8(param_1, param_2, param_3, h);
  }
  else {
    Slot_826A0F98 *s = &ents[idx].s;
    s->key.a = k->a;
    s->key.b = k->b;
    s->key.c = k->c;
    s->key.d = k->d;
    fn_8269DDA0(&s->val, param_3[1]);
  }
}
