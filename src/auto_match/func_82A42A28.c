extern int fn_82A429A8();


typedef struct Ent_82A42A28 { int a; int b; } Ent_82A42A28;
typedef struct Tbl_82A42A28 { unsigned int idx; Ent_82A42A28 e[2]; } Tbl_82A42A28;

Ent_82A42A28 *fn_82A42A28(int param_1,Tbl_82A42A28 *param_2,int param_3,int param_4,int param_5)

{
  unsigned int i;
  int r;
  Ent_82A42A28 *ent;

  i = param_2->idx;
  param_2->idx = i ^ 1;
  ent = &param_2->e[i];
  if (ent->b == 0x7fffffff) {
    r = fn_82A429A8(param_1,param_3,param_4,param_5);
    if (r == 0x7fffffff) {
      ent = 0;
    }
    else {
      ent->b = r;
    }
  }
  return ent;
}
