extern unsigned int *auStack_40;
extern int fn_825443D8();
extern int fn_825473C0();
extern int fn_82577208();
extern int fn_825774D0();
extern int fn_8263E9F0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;


void fn_82577000(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,int param_4)

{
  int *piVar1;
  char cVar3;
  unsigned __int64 uVar2;
  double dVar4;
  unsigned char auStack_40 [32];
  
  piVar1 = (int *)param_2[0x25];
  dVar4 = (double)ltcg_pool_0_0f;
  if (piVar1 == (int *)0x0) {
LAB_82577054:
    if ((*(int *)((param_4 + 0x2e9) * 4 + *param_2) == 0) &&
       (cVar3 = fn_825774D0(param_2,param_4), cVar3 == '\0')) goto LAB_825770e0;
  }
  else {
    cVar3 = (**(int (***)())(*piVar1 + 0x14))(piVar1,param_4);
    if (cVar3 == '\0') goto LAB_82577054;
  }
  uVar2 = fn_825443D8(param_4);
  fn_825473C0(param_4,auStack_40,uVar2);
  uVar2 = fn_825443D8(param_4);
  fn_8263E9F0(dVar4,lbl_8320A898,0,auStack_40,0,0,uVar2,0,0);
LAB_825770e0:
  if (dVar4 < (double)(float)param_2[0x14]) {
    fn_82577208(param_2);
  }
  for (piVar1 = (int *)param_2[9]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(int (***)())(*(int *)*piVar1 + 0x1c))(param_1);
    }
  }
  if ((int *)param_2[0x25] != (int *)0x0) {
    (**(int (***)())(*(int *)param_2[0x25] + 0x20))(param_1);
  }
  return;
}

