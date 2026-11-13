extern unsigned int *auStack_2c;
extern int fn_8288E0C8();
extern int fn_828B5560();
extern unsigned int uStack_30;


unsigned __int64 fn_8288F870(unsigned __int64 param_1,__int64 param_2,unsigned short param_3,unsigned int param_4)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  unsigned int uVar7;
  __int64 lVar6;
  unsigned int uStack_30;
  unsigned char auStack_2c [44];
  
  uStack_30 = param_4 & 0xffff;
  piVar4 = (int *)fn_8288E0C8(auStack_2c,param_2 + 0x7c,&uStack_30);
  iVar2 = *piVar4;
  iVar5 = 0;
  uVar3 = *(unsigned int *)(iVar2 + 0x1c);
  if (*(int **)(iVar2 + 0x10) != (int *)0x0) {
    iVar5 = **(int **)(iVar2 + 0x10);
  }
  uVar7 = uVar3 >> 3;
  if (*(unsigned int *)(iVar5 + 8) <= uVar7) {
    uVar7 = uVar7 - *(unsigned int *)(iVar5 + 8);
  }
  uVar1 = *(unsigned short *)(*(int *)(*(int *)(iVar5 + 4) + uVar7 * 4) + (uVar3 & 7) * 2);
  if ((unsigned __int64)*(unsigned int *)(iVar2 + 0x20) != 0) {
    *(unsigned int *)(iVar2 + 0x1c) = uVar3 + 1;
    if ((unsigned int)(*(int *)(iVar2 + 0x18) << 3) <= uVar3 + 1) {
      *(unsigned int *)(iVar2 + 0x1c) = 0;
    }
    lVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x20) - 1;
    *(int *)(iVar2 + 0x20) = (int)lVar6;
    if (lVar6 == 0) {
      *(unsigned int *)(iVar2 + 0x1c) = 0;
    }
  }
  fn_828B5560(param_1,param_3,param_4 & 0xffff,uVar1);
  return param_1;
}

