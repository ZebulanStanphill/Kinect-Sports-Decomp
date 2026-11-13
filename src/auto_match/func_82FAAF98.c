#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_50 ((*(unsigned __int64*)&uStack_50))
extern unsigned int *auStack_60;
extern int fn_82FAAC50();
extern int fn_82FAD0A8();
extern unsigned int uStack_50;
extern unsigned int uStack_58;


unsigned __int64 fn_82FAAF98(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4)

{
  int iVar1;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar2;
  unsigned int auStack_60;
  unsigned int uStack_58;
  int *piStack_54;
  unsigned int uStack_50;
  int *piStack_4c;
  
  uStack_58 = (**(int (***)())(**(int **)(param_1 + 8) + 0x18))();
  if ((uStack_58 != 0) && (piVar3 = (int *)fn_82FAD0A8(), piVar3 != (int *)0x0)) {
    iVar1 = piVar3[0x10];
    iVar4 = 3;
    *param_3 = 0;
    piStack_54 = piVar3;
    if ((iVar1 != 0) && ((*(unsigned char *)(iVar1 + 0x34) & 0x80) != 0)) {
      iVar4 = fn_82FAAC50(param_1,&uStack_58,param_2,param_4);
      if (iVar4 == 2) {
        return 0;
      }
      if (iVar4 == 0) {
        return (unsigned __int64)(unsigned int)piVar3[3] + (unsigned __int64)*param_4;
      }
    }
    piStack_4c = piStack_54;
    uStack_50 = uStack_58;
    iVar5 = (**(int (***)())(*piVar3 + 0xc))(piVar3,*(unsigned int *)(param_1 + 8),&uStack_50,&auStack_60);
    _uStack_50 = CONCAT44(uStack_50,iVar5);
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 0x40) == 0) {
        if (((iVar4 == 1) && (iVar1 != 0)) && ((*(unsigned char *)(iVar1 + 0x34) & 0x80) != 0)) {
          *param_4 = auStack_60 - piVar3[3];
          return (unsigned __int64)auStack_60;
        }
      }
      else if ((iVar4 != 3) || ((*(unsigned char *)(*(int *)(iVar5 + 0x40) + 0x34) & 0x80) != 0)) {
        *param_3 = 1;
        uVar2 = fn_82FAAC50(param_1,&uStack_50,param_2,param_4);
        if ((uVar2 & 0xffffffff) < 4) {
          if ((int)uVar2 == 0) {
            return (unsigned __int64)*param_4 + (unsigned __int64)auStack_60;
          }
          if ((uVar2 != 1) && (iVar4 != 3)) {
            *param_4 = 0;
            return (unsigned __int64)auStack_60;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

