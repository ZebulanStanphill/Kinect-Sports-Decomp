typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_48;
extern int fn_82E738D0();
extern unsigned int uStack_50;


__int64 fn_82E73978(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  bool bVar1;
  int *piVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uStack_50;
  int *piStack_4c;
  unsigned __int64 auStack_48 [9];
  
  if (param_3 == (unsigned int *)0x0) {
    lVar3 = -0x7fffbffd;
  }
  else {
    bVar1 = false;
    lVar3 = 0;
    piStack_4c = (int *)0x0;
    auStack_48[0] = 0;
    *param_3 = *(unsigned int *)(param_1 + 0x1c);
    for (; (param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1c); param_2 = param_2 + 1) {
      iVar4 = fn_82E738D0(param_1 + 0x10,param_2,auStack_48,&piStack_4c);
      piVar2 = piStack_4c;
      if (iVar4 == 0) {
        return -0x7fff0001;
      }
      uStack_50 = 0;
      lVar3 = (**(int (***)())(**(int **)(param_1 + 0x1d8) + 0x10))
                        (*(int **)(param_1 + 0x1d8),*(unsigned short *)(piStack_4c + 8),
                         *(unsigned char *)((int)piStack_4c + 0x22),piStack_4c[0xd],&uStack_50);
      if (lVar3 < 0) {
        return lVar3;
      }
      if (piVar2[10] == 0) {
        uVar5 = (**(int (***)())(*piVar2 + 0x10))(piVar2);
        if (uVar5 <= uStack_50) goto LAB_82e73a30;
      }
      else if (uStack_50 != 0) {
LAB_82e73a30:
        *param_3 = (int)param_2;
        bVar1 = true;
        break;
      }
    }
    if ((-1 < (int)lVar3) && (!bVar1)) {
      lVar3 = -0x3ff2c94b;
    }
  }
  return lVar3;
}

