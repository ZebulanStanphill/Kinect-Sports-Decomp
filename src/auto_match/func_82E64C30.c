extern unsigned int *auStack_50;
extern int fn_82E50D88();
extern int fn_82E50FA0();
extern int fn_82E64450();
extern int fn_82E644B8();
extern int fn_82E72FC0();
extern int fn_82E72FB8();


unsigned __int64 fn_82E64C30(int param_1,unsigned char *param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int *piVar3;
  __int64 lVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned char *pbVar10;
  unsigned int auStack_50;

  fn_82E50D88(param_1 + 0xc);
  if ((param_3 & 0xffffffff) == 0) {
    uVar9 = 0xffffffff80070057;
  }
  else if (*(int *)(param_1 + 0xb8) == -1) {
    uVar9 = 0xffffffff80004005;
  }
  else {
    lVar4 = fn_82E644B8(param_1 + 0x4c,*(int *)(param_1 + 0xb8),&auStack_50);
    uVar7 = -(unsigned int)(lVar4 != 0) & auStack_50;
    if (uVar7 == 0) {
LAB_82e64ca0:
      uVar9 = 0xffffffff80004003;
    }
    else {
      uVar8 = 0;
      if (*(int *)(uVar7 + 0x6c) != 0) {
        do {
          lVar4 = fn_82E64450(uVar7 + 4,uVar8,&auStack_50);
          pbVar10 = (unsigned char *)(-(unsigned int)(lVar4 != 0) & auStack_50);
          if (pbVar10 == (unsigned char *)0x0) goto LAB_82e64ca0;
          pbVar6 = pbVar10;
          pbVar5 = param_2;
          do {
            bVar1 = *pbVar6;
            bVar2 = *pbVar5;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar6 = pbVar6 + 1;
            pbVar5 = pbVar5 + 1;
          } while (pbVar6 != pbVar10 + 0x10);
          if (((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) &&
             (*(int *)(pbVar10 + 0x10) == *(int *)(param_2 + 0x10))) {
            fn_82E72FB8(param_3);
            uVar9 = fn_82E72FC0(param_3,pbVar10 + 0x18,*(unsigned short *)(pbVar10 + 0x18));
            goto LAB_82e64d8c;
          }
          uVar8 = uVar8 + 1;
        } while ((uVar8 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(uVar7 + 0x6c));
      }
      fn_82E72FB8(param_3);
      piVar3 = *(int **)(param_1 + 0x48);
      uVar9 = 1;
      if (piVar3 != (int *)0x0) {
        uVar9 = (**(int (***)())(*piVar3 + 0x14))(piVar3,param_2,param_3);
      }
    }
  }
LAB_82e64d8c:
  fn_82E50FA0(param_1 + 0xc);
  return uVar9;
}
