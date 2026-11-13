extern int fn_82F02410();
extern int fn_82F14588();
extern unsigned int uRam8325edb8;


unsigned __int64 fn_82F146D0(int param_1,unsigned __int64 param_2)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82F14588();
    *(unsigned int *)(param_1 + 0x24) = 0;
  }
  puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x48) + 0x58);
  bVar1 = *(unsigned char *)puVar2;
  iVar3 = (unsigned int)bVar1 * 4;
  uVar6 = *(unsigned int *)(*(int *)(param_1 + 0x3c) + iVar3);
  if (*(int *)(param_1 + 8) < 4) {
    bVar1 = *(unsigned char *)(*(int *)(param_1 + 4) + (unsigned int)bVar1);
    uVar4 = bVar1 + uRam8325edb8 + 1;
    uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x38) + iVar3) + (unsigned __int64)bVar1 +
            (unsigned __int64)uRam8325edb8 + 1;
  }
  else {
    if (*(int *)(param_1 + 8) == 4) {
      uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x38) + iVar3);
      goto LAB_82f1479c;
    }
    bVar1 = *(unsigned char *)(*(int *)(param_1 + 4) + (unsigned int)bVar1);
    uVar4 = bVar1 + uRam8325edb8;
    uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x38) + iVar3) + (unsigned __int64)bVar1 +
            (unsigned __int64)uRam8325edb8;
  }
  uVar6 = uVar6 << (uVar4 & 0x3f) | *puVar2 >> 1 & 0x1ffff;
LAB_82f1479c:
  fn_82F02410(param_2,uVar6,uVar5);
  return 0;
}

