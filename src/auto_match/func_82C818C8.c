typedef unsigned char bool;
extern int fn_82C800C8();
extern int fn_82C80520();
extern int fn_82C814F8();
extern int fn_82C815A0();
extern unsigned int iStack00000014;


unsigned __int64
fn_82C818C8(int param_1, int param_2, int *param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, int in_stack_00000054, int in_stack_0000005c, int in_stack_00000064, int in_stack_0000006c, int in_stack_00000074, unsigned int in_stack_0000007c, unsigned int in_stack_00000084)

{
  bool bVar1;
  short sVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iStack00000014;







  
  uVar9 = *(unsigned int *)(param_2 + 0x10);
  uVar6 = (unsigned __int64)uVar9;
  if (((((uVar9 != 0) && (uVar9 != 3)) && (uVar9 != 0x59565955)) &&
      (((uVar9 != 0x32595559 && (uVar9 != 0x56555949)) &&
       ((uVar9 != 0x30323449 && ((uVar9 != 0x32315659 && (uVar9 != 0x32323450)))))))) &&
     (uVar9 != 0x31313450)) {
LAB_82c81c20:
    *param_3 = 0;
    return 1;
  }
  if (param_3 == (int *)0x0) {
    return 1;
  }
  iVar5 = (int)param_4;
  if ((((iVar5 < 0) || ((int)param_6 < 0)) || ((int)param_7 < 0)) ||
     ((((int)param_8 < 1 || (in_stack_00000054 < 1)) ||
      (((in_stack_0000005c < 0 || ((in_stack_00000064 < 0 || (in_stack_0000006c < 1)))) ||
       (in_stack_00000074 < 1)))))) goto LAB_82c81c20;
  iVar4 = *(int *)(param_2 + 4);
  iVar7 = iVar4;
  if (iVar4 < 1) {
    iVar7 = -iVar4;
  }
  if (iVar7 < (int)param_6 + (int)param_8) goto LAB_82c81c20;
  iVar7 = *(int *)(param_2 + 8);
  iVar8 = iVar7;
  if (iVar7 < 1) {
    iVar8 = -iVar7;
  }
  if (((iVar8 < (int)param_7 + in_stack_00000054) || (iVar5 < in_stack_0000005c + in_stack_0000006c)
      ) || (uVar9 = (unsigned int)param_5,
           (int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) <
           in_stack_00000064 + in_stack_00000074)) goto LAB_82c81c20;
  sVar2 = *(short *)(param_2 + 0xe);
  iStack00000014 = param_1;
  iVar4 = fn_82C800C8(uVar6,iVar4,iVar7,in_stack_00000084);
  if ((((iVar4 != 0) || (iVar4 = fn_82C800C8(uVar6,param_4,param_5), iVar4 != 0)) ||
      ((iVar4 = fn_82C800C8(uVar6,param_8,in_stack_00000054), iVar4 != 0 ||
       ((iVar4 = fn_82C800C8(uVar6,in_stack_0000006c,in_stack_00000074), iVar4 != 0 ||
        (iVar4 = fn_82C800C8(uVar6,param_6,param_7), iVar4 != 0)))))) ||
     (iVar4 = fn_82C800C8(uVar6,in_stack_0000005c,in_stack_00000064), iVar4 != 0))
  goto LAB_82c81c20;
  iVar4 = (int)uVar6;
  if (iVar4 == 0x31313450) {
    uVar10 = 1;
    goto LAB_82c81b44;
  }
  if ((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) {
    if (iVar4 == 0) {
      bVar1 = sVar2 == 0x20;
    }
    else {
      if (((iVar4 == 0x59565955) || (iVar4 == 0x32595559)) || ((uVar6 & 0xffffffff) == 0x32323450))
      goto LAB_82c81b40;
      bVar1 = iVar4 == 0x32315659;
    }
    uVar10 = 0;
    if (!bVar1) goto LAB_82c81b44;
  }
LAB_82c81b40:
  uVar10 = in_stack_0000007c;
LAB_82c81b44:
  uVar3 = fn_82C80520(param_2,param_3,param_4,param_5,uVar10,0);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar4 = *param_3;
  *(unsigned int *)(iVar4 + 0x24) = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(iVar4 + 0x28) = *(unsigned int *)(param_2 + 8);
  *(int *)(iVar4 + 0x2c) = iVar5;
  *(unsigned int *)(iVar4 + 0x30) = uVar9;
  *(unsigned int *)(iVar4 + 0x124) = uVar10;
  *(unsigned int *)(iVar4 + 0x128) = in_stack_00000084;
  iVar5 = fn_82C814F8(iVar4);
  if (iVar5 == 0) {
    return 1;
  }
  iVar5 = fn_82C815A0(param_3,param_6,param_7,param_8,in_stack_00000054,in_stack_0000005c,
                        in_stack_00000064,in_stack_0000006c);
  if (iVar5 != 0) {
    return 1;
  }
  if (*(int *)(iStack00000014 + 0x5680) != 0) {
    *(unsigned int *)(iVar4 + 0x7c) = 1;
    *(unsigned int *)(iVar4 + 0x84) = *(unsigned int *)(iStack00000014 + 0x5684);
    *(unsigned int *)(iVar4 + 0x88) = *(unsigned int *)(iStack00000014 + 0x5688);
    *(unsigned int *)(iVar4 + 0x8c) = *(unsigned int *)(iStack00000014 + 0x568c);
    *(unsigned int *)(iVar4 + 0x90) = *(unsigned int *)(iStack00000014 + 0x5690);
    *(unsigned int *)(iVar4 + 0x94) = *(unsigned int *)(iStack00000014 + 0x5694);
    *(unsigned int *)(iVar4 + 0x98) = *(unsigned int *)(iStack00000014 + 0x5698);
  }
  return 0;
}

