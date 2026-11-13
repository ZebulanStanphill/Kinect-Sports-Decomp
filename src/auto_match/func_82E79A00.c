typedef unsigned char bool;
extern unsigned int *auStack_38;
extern int fn_82E78690();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_82E79A00(int param_1,__int64 param_2)

{
  bool bVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int auStack_38;
  
  iVar5 = param_1 + 0x178;
  lVar2 = fn_82E78690(iVar5,param_2,&uStack_40);
  uVar4 = -(unsigned int)(lVar2 != 0) & uStack_40;
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else if ((*(int *)(uVar4 + 300) == 0) || (*(char *)(uVar4 + 0x130) != '\0')) {
    uVar3 = (unsigned __int64)*(unsigned int *)(uVar4 + 0x1b);
  }
  else {
    uVar6 = param_2 + 1;
    uVar3 = (unsigned __int64)*(unsigned int *)(uVar4 + 0x1b);
    uVar4 = 0;
    bVar1 = (uVar6 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1e0);
    while ((uVar3 = uVar3 + 1, bVar1 &&
           (lVar2 = fn_82E78690(iVar5,uVar6,&uStack_40),
           *(int *)((-(unsigned int)(lVar2 != 0) & uStack_40) + 300) != 0))) {
      lVar2 = fn_82E78690(iVar5,uVar6,&uStack_3c);
      if ((unsigned int)*(unsigned char *)((-(unsigned int)(lVar2 != 0) & uStack_3c) + 0x130) != uVar4 + 1) {
        return uVar3;
      }
      lVar2 = fn_82E78690(iVar5,uVar6,&auStack_38);
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 1 & 0xffff;
      bVar1 = (uVar6 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1e0);
      uVar3 = *(unsigned int *)((-(unsigned int)(lVar2 != 0) & auStack_38) + 0x1b) + uVar3;
    }
  }
  return uVar3;
}

