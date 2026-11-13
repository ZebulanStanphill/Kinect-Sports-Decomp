extern unsigned int *auStack_4c;
extern int fn_823AAD90();
extern int fn_828D45F8();
extern int fn_82C03470();
extern int fn_82C0B678();


unsigned __int64 fn_82C038E0(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar2;
  unsigned int uVar3;
  __int64 lVar1;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int *piStack00000014;
  unsigned int *puStack00000024;
  unsigned char auStack_4c [12];
  
  uVar5 = 0;
  *param_3 = 0;
  piStack00000014 = param_1;
  puStack00000024 = param_3;
  iVar2 = fn_828D45F8(param_1 + 0x1f);
  uVar3 = fn_823AAD90(param_1 + 0x1f);
  uVar4 = (__int64)(int)(uVar3 >> 3) * (__int64)iVar2;
  trapWord(6,uVar4,0);
  if ((param_2 & 0xffffffff) / (uVar4 & 0xffffffff) < 0x10) {
    uVar5 = 0xffffffff80004005;
  }
  if (-1 < (int)uVar5) {
    if (param_1[0xa9] != 0) {
      uVar5 = fn_82C03470(param_1,param_2,param_3,auStack_4c);
    }
    while (-1 < (int)uVar5) {
      do {
        uVar3 = fn_82C0B678(param_1[0xa8],param_1 + 0xa9);
        if (param_1[0xa9] != 0) break;
      } while (uVar3 == 0);
      if (uVar3 != 0) {
        if ((uVar3 == 6) || (uVar3 == 0x12)) {
          uVar5 = 0;
        }
        else if ((uVar3 < 0xc) || (0xe < uVar3)) {
          uVar5 = 0xffffffff80004005;
        }
        else {
          uVar5 = 0xffffffffc00d28b0;
        }
        break;
      }
      if (-1 < (int)uVar5) {
        uVar5 = fn_82C03470(param_1,param_2,param_3,auStack_4c);
      }
    }
  }
  if ((-1 < (int)uVar5) && (*param_3 != 0)) {
    iVar2 = *(int *)param_1[0xc];
    lVar1 = (**(int (***)())(*param_1 + 0x74))(param_1);
    uVar5 = (**(int (***)())(iVar2 + 0x48))(param_1[0xc],lVar1 + (unsigned __int64)*param_3);
  }
  return uVar5;
}

