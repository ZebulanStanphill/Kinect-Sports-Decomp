typedef unsigned char bool;
extern unsigned int *auStack_40;
extern int fn_82CFA0B8();


unsigned __int64
fn_82CFA1A8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
             ,unsigned __int64 param_6)

{
  bool bVar1;
  char *pcVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned char auStack_40 [64];
  
  if (((int)param_3 == -1) && (param_1[6] != 0)) {
    param_3 = (unsigned __int64)*(unsigned int *)(param_1[6] * 4 + param_1[5] + -4);
  }
  pcVar2 = (char *)(**(int (***)())(*param_1 + 0x14))(auStack_40,param_1,param_3);
  if (*pcVar2 == '\0') {
    return 0;
  }
  uVar4 = 0;
  uVar3 = 0xffffffff82196582;
  iVar5 = (int)param_2;
  if ((param_2 & 0xffffffff) < 4) {
    bVar1 = iVar5 != 0;
    if (param_2 == 1 && bVar1) {
      uVar3 = 0xffffffff82133a70;
    }
    else {
      if (param_2 == 2 && bVar1) {
        uVar3 = 0xffffffff82133a68;
      }
      else {
        if (!bVar1) {
          uVar3 = 0xffffffff82133a78;
          goto LAB_82cfa280;
        }
        uVar3 = 0xffffffff8200de44;
      }
      uVar4 = 1;
    }
  }
LAB_82cfa280:
  fn_82CFA0B8(param_1,uVar3,param_3,param_4,param_5,param_6,uVar4);
  if ((iVar5 == 2) || (uVar3 = 0, iVar5 == 3)) {
    uVar3 = 1;
  }
  return uVar3;
}

