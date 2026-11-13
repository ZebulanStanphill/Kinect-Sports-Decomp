extern unsigned int *auStack_70;
extern int fn_828F0170();
extern unsigned int uStack_6c;


int fn_82903908(int param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_70 [4];
  unsigned int uStack_6c;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar6 = 0;
  uVar8 = 0xffffffff;
  uVar7 = 0;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 4) != 4)) {
    iVar6 = 0;
  }
  else {
    for (iVar1 = *(int *)(iVar1 + 0x28); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      iVar2 = *(int *)(iVar1 + 8);
      if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 6)) && (*(int *)(iVar2 + 0x10) == 2)) &&
         (param_2 != 0)) {
        iVar4 = param_2;
        do {
          if (*(int *)(iVar2 + 0x28) == *(int *)(*(int *)(iVar4 + 8) + 0x18)) break;
          iVar4 = *(int *)(iVar4 + 0xc);
        } while (iVar4 != 0);
        if ((iVar4 != 0) && (iVar4 = *(int *)(iVar2 + 0x18), *(int *)(iVar4 + 0x4c) != 0)) {
          uVar5 = 0;
          if ((*(int *)(iVar4 + 0x24) != 0) &&
             (iVar3 = fn_828F0170(*(unsigned int *)(*(int *)(iVar4 + 0x24) + 0x18),0,auStack_70)
             , uVar5 = uStack_6c, iVar3 < 0)) {
            uVar5 = 0xffffffff;
          }
          if (((((uVar5 & 0xffff0000) == 0) ||
               ((uVar5 & 0xffff0000) == (*(unsigned int *)(param_1 + 0x10) & 0xffff0000))) &&
              (((uVar5 & 0xffff) == 0 || ((uVar5 & 0xffff) == (unsigned int)*(unsigned short *)(param_1 + 0x12)))))
             && ((uVar8 == 0xffffffff || (uVar8 < uVar5)))) {
            uVar7 = *(unsigned int *)(*(int *)(iVar2 + 0x14) + 0x18);
            uVar8 = uVar5;
            iVar6 = iVar4;
          }
        }
      }
    }
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = uVar7;
    }
  }
  return iVar6;
}

