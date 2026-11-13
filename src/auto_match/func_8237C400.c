extern int fn_82560100();
extern int fn_82575DF0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;


void fn_8237C400(unsigned int *param_1,int *param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  double dVar6;
  
  puVar5 = param_1 + 0x74;
  lVar3 = 3;
  uVar1 = *(unsigned int *)(*param_1 + 0x4c);
  puVar4 = puVar5;
  do {
    if (*puVar4 != 0) {
      fn_82575DF0(*(unsigned int *)(*(int *)(*param_1 + 0x4c) + 0x93c));
      *puVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar3 != 0);
  lVar3 = 3;
  dVar6 = (double)lbl_82192734;
  do {
    if (*param_2 != 0) {
      uVar2 = fn_82560100(dVar6,uVar1,param_2,(unsigned __int64)*param_1 + 0x50);
      *puVar5 = uVar2;
    }
    lVar3 = lVar3 + -1;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  } while (lVar3 != 0);
  if (*param_3 != 0) {
    fn_82560100((double)lbl_821CA460,uVar1,param_3,(unsigned __int64)*param_1 + 0x50,
                      0xffffffff821ca45c,0,0,0,0);
  }
  return;
}

