#define true 1
extern int fn_82AA66A8();
extern int fn_82ACC5D8();
extern int fn_82ACD310();
extern int fn_82ACD3D8();
extern int fn_82ACD528();


unsigned __int64 fn_82ACD6E8(int *param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  char cVar4;
  __int64 lVar2;
  int iVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1[0xc],0x12c0);
  }
  uVar6 = param_2;
  if ((param_3 != 1) || (cVar4 = fn_82ACD528(param_1,param_2), cVar4 != '\0')) {
    while( true ) {
      if (uVar6 == 0) {
        return 1;
      }
      if ((param_3 == 1) && (cVar4 = fn_82ACD528(param_1,uVar6), cVar4 == '\0')) break;
      if (param_1[0xf] == 0) {
        iVar3 = *param_1;
        uVar1 = uVar6 & 0xfffffffe;
        *(unsigned int *)(uVar1 + 0x28) = *(unsigned int *)(iVar3 + 4);
        *(unsigned int *)((*(unsigned int *)(iVar3 + 4) & 0xfffffffe) + 0x24) = uVar1 + 0x28;
        *(unsigned int *)(uVar1 + 0x24) = iVar3 + 4U | 1;
        *(unsigned int *)(iVar3 + 4) = uVar1;
      }
      else {
        uVar1 = param_1[0xf] & 0xfffffffe;
        uVar5 = uVar6 & 0xfffffffe;
        *(unsigned int *)(uVar5 + 0x28) = *(unsigned int *)(uVar1 + 0x28);
        *(unsigned int *)((*(unsigned int *)(uVar1 + 0x28) & 0xfffffffe) + 0x24) = uVar5 + 0x28;
        *(unsigned int *)(uVar5 + 0x24) = uVar1 + 0x28;
        *(unsigned int *)(uVar1 + 0x28) = uVar5;
      }
      param_1[0xf] = uVar6;
      *(unsigned int *)(uVar6 + 0x10) = *(unsigned int *)(uVar6 + 0x10) | 0x2000000;
      lVar2 = fn_82ACD3D8(param_1);
      if (lVar2 != 0) {
        while( true ) {
          uVar1 = uVar6 & 0xfffffffe;
          if ((*(unsigned int *)(uVar1 + 0x24) & 1) == 0) {
            iVar3 = (*(unsigned int *)(uVar1 + 0x24) & 0xfffffffe) - 0x28;
          }
          else {
            iVar3 = 0;
          }
          param_1[0xf] = iVar3;
          uVar5 = *(unsigned int *)(uVar1 + 0x28);
          *(unsigned int *)((*(unsigned int *)(uVar1 + 0x28) & 0xfffffffe) + 0x24) =
               *(unsigned int *)(uVar1 + 0x24);
          *(unsigned int *)(*(unsigned int *)(uVar1 + 0x24) & 0xfffffffe) = *(unsigned int *)(uVar1 + 0x28);
          uVar5 = -(unsigned int)((uVar5 & 1) == 0) & uVar5;
          *(unsigned int *)(uVar6 + 0x10) = *(unsigned int *)(uVar6 + 0x10) & 0xfdffffff;
          if (param_2 == uVar6) break;
          fn_82ACC5D8(param_1,uVar5,(lVar2 + -2) - (lVar2 + -3 + (unsigned __int64)(lVar2 + -2 == 0)));
          uVar6 = uVar5;
        }
        if ((int)lVar2 != 2) {
          return 0;
        }
        iVar3 = fn_82ACD310(param_1,*(unsigned int *)(param_2 + 0x1c),param_1[0xf]);
        if (iVar3 != param_1[0xf]) {
          return 0;
        }
        *(unsigned char *)(param_1 + 0x12) = 0;
        return 0;
      }
      uVar6 = *(unsigned int *)(uVar6 + 0x20);
    }
  }
  return 0;
}

