#define true 1
extern int fn_82A403E8();
extern int fn_82A403F0();
extern int fn_82A40BA8();
extern int fn_82A47B28();
extern int fn_82A4F4E0();
extern int fn_82A51260();
extern int fn_82A51990();


__int64 fn_82A51E78(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar3;
  __int64 lVar2;
  
  (**(int (***)())(*(int *)(param_1[0xc] + 0x2c) + 8))(param_1[0xc] + 0x2c);
  if (param_2 == (int *)0x0) {
    param_2 = (int *)(param_1[0xc] + 0x248);
  }
  if (param_1[1] != 1) {
    *(unsigned int *)(param_1[0xc] + 0x24) = *(int *)(param_1[0xc] + 0x24) + ((param_1[0x20] == 0) - 1);
    *(int *)(param_1[0xc] + 0x28) = *(int *)(param_1[0xc] + 0x28) - param_1[10];
  }
  while( true ) {
    iVar3 = fn_82A40BA8(param_1 + 2);
    if (iVar3 == 0) break;
    for (piVar1 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
        (piVar1 != (int *)0x0 && ((int *)*piVar1 != param_1)); piVar1 = (int *)piVar1[1]) {
    }
    fn_82A47B28(*(int *)(iVar3 + 4) + 0x50,piVar1);
    (**(int (***)())(*(int *)**(unsigned int **)(iVar3 + 8) + 4))
              ((int *)**(unsigned int **)(iVar3 + 8),0,0x1337f001);
    fn_82A403E8(param_1[0xc],**(unsigned int **)(iVar3 + 8));
    fn_82A51260(iVar3);
    fn_82A4F4E0(iVar3);
  }
  if (*param_2 == 0) {
    iVar3 = param_1[0x10];
  }
  else {
    iVar3 = *(int *)(*(int *)(param_2[1] + 4) + 0x44);
  }
  if (iVar3 != param_1[0x11]) {
    lVar2 = (**(int (***)())(*param_1 + 100))(param_1);
    if (lVar2 < 0) goto LAB_82a5203c;
  }
  lVar2 = fn_82A51990(param_1,param_2);
  if (((-1 < lVar2) &&
      (lVar2 = (**(int (***)())(**(int **)(param_1[0xc] + 0xb0) + 0x48))
                         (*(int **)(param_1[0xc] + 0xb0),0x1337f001), -1 < lVar2)) &&
     (param_1[1] != 1)) {
    *(unsigned int *)(param_1[0xc] + 0x24) = (unsigned int)(param_1[0x20] != 0) + *(int *)(param_1[0xc] + 0x24);
    *(int *)(param_1[0xc] + 0x28) = param_1[10] + *(int *)(param_1[0xc] + 0x28);
  }
LAB_82a5203c:
  (**(int (***)())(*(int *)(param_1[0xc] + 0x2c) + 0x14))(param_1[0xc] + 0x2c);
  fn_82A403F0(param_1[0xc]);
  return lVar2;
}

