#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern int fn_82A2A378();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F68CC0();
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned __int64 fn_82F3ECC8(int *param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned char *pbVar6;
  unsigned int *puVar7;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned __int64 auStack_50 [10];
  
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  if (param_1[3] == 0) {
    return 0xffffffffc00d36b6;
  }
  if ((param_4 == (unsigned int *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar5 = 0xffffffff80070057;
    goto LAB_82f3ef68;
  }
  (**(int (***)())(*param_1 + 0x14))(param_1,auStack_50,0);
  if (0xffffffff < auStack_50[0]) {
    return 0xffffffffc00d3a9a;
  }
  *param_4 = (unsigned int)auStack_50[0];
  if (param_3 < (unsigned int)auStack_50[0]) {
    return 0xffffffffc00d36b1;
  }
  uStack_58 = *(unsigned __int64 *)(param_1 + 6);
  uStack_60 = CONCAT44((unsigned int)*(unsigned char *)((int)param_1 + 0x13) << 0x18 |
                       (unsigned int)*(unsigned char *)((int)param_1 + 0x12) << 0x10 |
                       (unsigned int)*(unsigned char *)((int)param_1 + 0x11) << 8 | (unsigned int)*(unsigned char *)(param_1 + 4),
                       CONCAT22(*(unsigned short *)(param_1 + 5) << 8 | *(unsigned short *)(param_1 + 5) >> 8,
                                *(unsigned short *)((int)param_1 + 0x16) << 8 |
                                *(unsigned short *)((int)param_1 + 0x16) >> 8));
  fn_82F68CC0(param_2,&uStack_60,0x10);
  uVar2 = *(unsigned __int64 *)(param_1 + 8);
  uStack_60 = ((((unsigned __int64)(uStack_60)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack_60 = ((((unsigned __int64)(uStack_60)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar2 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  *(unsigned __int64 *)(param_2 + 0x10) =
       ((uVar2 & 0xff) << 0x18 |
       (uVar2 & 0xff00) << 8 |
       (unsigned __int64)((((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20 |
       ((unsigned __int64)(((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
       ((unsigned __int64)(((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
       (unsigned __int64)((((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF) >> 0x18);
  *(unsigned int *)(param_2 + 0x18) =
       (unsigned int)*(unsigned char *)((int)param_1 + 0x4b) << 0x18 | (unsigned int)*(unsigned char *)((int)param_1 + 0x4a) << 0x10 |
       (unsigned int)*(unsigned char *)((int)param_1 + 0x49) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x12);
  *(unsigned int *)(param_2 + 0x1c) =
       (unsigned int)*(unsigned char *)((int)param_1 + 0x5b) << 0x18 | (unsigned int)*(unsigned char *)((int)param_1 + 0x5a) << 0x10 |
       (unsigned int)*(unsigned char *)((int)param_1 + 0x59) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x16);
  uStack_60 = uVar2;
  fn_82F68CC0(param_2 + 0x20,param_1[0x13],param_1[0x16]);
  pbVar6 = (unsigned char *)(param_1 + 0x17);
  puVar7 = (unsigned int *)(param_2 + 0x20 + param_1[0x16]);
  *puVar7 = (unsigned int)*(unsigned char *)((int)param_1 + 0x5f) << 0x18 |
            (unsigned int)*(unsigned char *)((int)param_1 + 0x5e) << 0x10 | (unsigned int)*(unsigned char *)((int)param_1 + 0x5d) << 8
            | (unsigned int)*pbVar6;
  puVar7 = puVar7 + 1;
  if (param_1[0x14] == 0) {
code_r0x82f3eed8:
    pbVar6 = (unsigned char *)(param_1 + 0x18);
    *puVar7 = (unsigned int)*(unsigned char *)((int)param_1 + 99) << 0x18 |
              (unsigned int)*(unsigned char *)((int)param_1 + 0x62) << 0x10 |
              (unsigned int)*(unsigned char *)((int)param_1 + 0x61) << 8 | (unsigned int)*pbVar6;
    if (param_1[0x15] == 0) goto LAB_82f3ef68;
    uVar3 = fn_82E50BE8(*(unsigned int *)pbVar6,0,0,0,0);
    if (uVar3 == 0) {
      uVar5 = 0xffffffff8007000e;
      goto LAB_82f3ef68;
    }
    iVar1 = fn_82A2A378(0,0,param_1[0x15],0xffffffffffffffff,uVar3,*(unsigned int *)pbVar6,0,0);
    if (iVar1 != 0) {
      fn_82F68CC0(puVar7 + 1,uVar3,*(unsigned int *)pbVar6);
      goto LAB_82f3ef68;
    }
  }
  else {
    uVar4 = fn_82E50BE8(*(unsigned int *)pbVar6,0,0,0,0);
    if (uVar4 == 0) {
      return 0xffffffff8007000e;
    }
    iVar1 = fn_82A2A378(0,0,param_1[0x14],0xffffffffffffffff,uVar4,*(unsigned int *)pbVar6,0,0);
    if (iVar1 != 0) {
      fn_82F68CC0(puVar7,uVar4,*(unsigned int *)pbVar6);
      puVar7 = (unsigned int *)((int)puVar7 + *(int *)pbVar6);
      goto code_r0x82f3eed8;
    }
  }
  uVar5 = thunk_FUN_82a2b798();
  if (0 < (int)uVar5) {
    uVar5 = uVar5 & 0xffff | 0x80070000;
  }
LAB_82f3ef68:
  if ((uVar4 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar4);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar3);
  }
  return uVar5;
}

