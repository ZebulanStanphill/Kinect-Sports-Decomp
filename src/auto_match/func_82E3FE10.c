extern unsigned int *auStack_60;
extern int fn_82E3ECE0();
extern int fn_82E3EEB0();
extern int fn_82E3F048();
extern int fn_82E3F220();
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154AE8;
extern unsigned int lbl_82154AF8;


__int64 fn_82E3FE10(unsigned __int64 param_1,int *param_2,int *param_3,__int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  int *piStack_70;
  int *piStack_6c;
  __int64 lStack_68;
  unsigned __int64 auStack_60 [2];
  unsigned char abStack_50 [16];
  unsigned char abStack_40 [64];
  
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    return -0x7fffbffd;
  }
  piStack_6c = (int *)0x0;
  piStack_70 = (int *)0x0;
  lStack_68 = 0;
  lVar3 = (**(int (***)())(*param_2 + 0x14))(param_2,0,&lStack_68);
  if (-1 < lVar3) {
    auStack_60[0] = 0;
    lVar3 = (**(int (***)())(*param_3 + 0x10))(param_3,auStack_60);
    if (-1 < lVar3) {
      if ((unsigned __int64)(lStack_68 + param_4) <= auStack_60[0]) {
        iVar4 = (**(int (***)())*param_2)(param_2,0xffffffff82154c88,&piStack_6c);
        if (-1 < iVar4) {
          lVar3 = fn_82E3EEB0(param_1,piStack_6c,param_3,param_4);
          goto LAB_82e4002c;
        }
        iVar4 = (**(int (***)())*param_2)(param_2,0xffffffff82154c98,&piStack_70);
        if ((iVar4 < 0) ||
           (lVar3 = (**(int (***)())(*piStack_70 + 0xc))(piStack_70,abStack_50), lVar3 < 0))
        goto LAB_82e4002c;
        pbVar6 = abStack_50;
        pbVar5 = &lbl_82154AD8;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != abStack_40);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          lVar3 = fn_82E3ECE0(param_1,piStack_70,param_3,param_4);
          goto LAB_82e4002c;
        }
        pbVar6 = abStack_50;
        pbVar5 = (unsigned char *)&lbl_82154AE8;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != abStack_40);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          lVar3 = fn_82E3F048(param_1,piStack_70,param_3,param_4);
          goto LAB_82e4002c;
        }
        pbVar6 = abStack_50;
        pbVar5 = (unsigned char *)&lbl_82154AF8;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != abStack_40);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          lVar3 = fn_82E3F220(param_1,piStack_70,param_3,param_4);
          goto LAB_82e4002c;
        }
      }
      lVar3 = -0x7ff8ffa9;
    }
  }
LAB_82e4002c:
  if (piStack_6c != (int *)0x0) {
    (**(int (***)())(*piStack_6c + 8))();
    piStack_6c = (int *)0x0;
  }
  if (piStack_70 != (int *)0x0) {
    (**(int (***)())(*piStack_70 + 8))();
  }
  return lVar3;
}

