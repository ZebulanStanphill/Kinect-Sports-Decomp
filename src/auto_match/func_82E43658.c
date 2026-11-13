extern unsigned int lbl_820ED018;
extern unsigned int lbl_820ED028;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


__int64 fn_82E43658(int param_1,int *param_2,__int64 *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  __int64 lStack_48;
  unsigned char abStack_40 [64];
  
  uStack_4c = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if ((param_2 == (int *)0x0) || (param_3 == (__int64 *)0x0)) {
    lVar3 = -0x7ff8ffa9;
  }
  else if (*(int *)(param_1 + 0x18) == 0) {
    lVar3 = -0x3ff2c94e;
  }
  else {
    lVar3 = (**(int (***)())(*param_2 + 0xc))(param_2,&uStack_4c,0,&uStack_50);
    if (-1 < (int)lVar3) {
      *param_3 = 0;
      if (uStack_50 < 0x18) {
        lVar3 = -0x3ff2c94f;
      }
      else {
        lVar3 = (**(int (***)())(**(int **)(param_1 + 0x18) + 0x18))
                          (*(int **)(param_1 + 0x18),uStack_4c,uStack_50,abStack_40,&lStack_48);
        if (-1 < lVar3) {
          pbVar4 = abStack_40;
          pbVar5 = (unsigned char *)&lbl_820ED018;
          do {
            bVar1 = *pbVar5;
            bVar2 = *pbVar4;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar5 = pbVar5 + 1;
            pbVar4 = pbVar4 + 1;
          } while (pbVar5 != &lbl_820ED028);
          if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
            *param_3 = lStack_48 + 0x32;
          }
          else {
            lVar3 = -0x3ff2c566;
          }
        }
      }
      (**(int (***)())(*param_2 + 0x10))(param_2);
    }
  }
  return lVar3;
}

