extern unsigned int *auStack_68;
extern unsigned int fStack_60;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AC6560();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AE4E18();
extern int fn_82AE60E8();
extern int fn_82B45478();
extern int fn_82B80940();
extern int fn_82B80A80();
extern int fn_82B840F8();
extern int fn_82B841E8();
extern int fn_82B85C68();
extern int fn_82B86888();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * fn_82B8A7A0(int *param_1,int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  char acStack_80 [4];
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned __int64 uStack_70;
  unsigned int auStack_68 [2];
  float fStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  puVar8 = (unsigned int *)(param_3 * 0x28 + *(int *)(param_2 + 0xc));
  uVar2 = puVar8[6];
  if (uVar2 != 0) {
    iVar3 = (int)((param_4 & 0xffffffff) << 3);
    uVar7 = *(unsigned int *)(iVar3 + uVar2 + 4);
    *param_1 = *(int *)(iVar3 + uVar2);
    param_1[1] = uVar7;
    if ((uVar7 & 3) == 1) {
      return param_1;
    }
  }
  fn_82B80940(param_2,param_3,param_4,&uStack_7c,&uStack_70,&uStack_74,auStack_68,&uStack_78);
  if (puVar8[6] == 0) {
    uVar2 = fn_82AE60E8(param_2,((unsigned __int64)(*puVar8 >> 3) & 0x3fff) << 3,0);
    puVar8[6] = uVar2;
  }
  uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(0)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  if ((puVar8[1] & 0x80000000) != 0) {
    iVar3 = *(int *)(*(int *)(puVar8[9] + 0x20) + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_2,0xe23,
                        *(unsigned int *)(*(int *)(*(int *)(puVar8[9] + 0x20) + 0x14) + 0x18));
    }
    iVar3 = fn_82B45478(param_2,iVar3,0x12);
    iVar3 = *(int *)(iVar3 + 0x14);
    if (*(int *)(iVar3 + 4) != 3) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_2,0x12c1);
    }
    acStack_80[0] = '\0';
    fn_82AE4E18(param_2,iVar3,3,&uStack_74,auStack_68,acStack_80);
    if (acStack_80[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_2,0x119d,*(unsigned int *)(iVar3 + 0x18));
    }
    iVar3 = fn_82B841E8(param_2,(unsigned __int64)*(unsigned int *)(param_2 + 0x234),
                          (unsigned __int64)*(unsigned int *)(param_2 + 0x234) + 0x10,0x78,0,1);
    *(unsigned int *)(iVar3 + 8) = *(unsigned int *)(iVar3 + 8) & 0xffffffe1 | 2;
    puVar4 = (unsigned int *)fn_82AD17B0(param_2,iVar3);
    uStack_5c = lbl_821AAD20;
    uVar2 = *puVar4;
    iVar3 = (int)((param_4 & 0xffffffff) << 3);
    *puVar4 = uVar2 | 0x40000000;
    uStack_58 = uStack_5c;
    uStack_54 = uStack_5c;
    *puVar4 = (auStack_68[0] & 0xff) << 0x11 | uVar2 & 0xfe001fff | 0x40000000 | 0x2000;
    uStack_70 = (unsigned __int64)(*(unsigned int *)(iVar3 + puVar8[7]) >> 4) & 0x3fff;
    fStack_60 = (float)uStack_70;
    uVar1 = fn_82B86888(param_2,1,&fStack_60,0);
    uVar1 = fn_82AD18C0(param_2,uVar1,0);
    iVar5 = fn_82B85C68(param_2,(unsigned __int64)*(unsigned int *)(param_2 + 0x234),
                          (unsigned __int64)*(unsigned int *)(param_2 + 0x234) + 0x18,puVar4,uVar1);
    uVar2 = *(unsigned int *)(iVar5 + 8);
    iVar6 = fn_82ABDD90(param_2,uVar2 >> 7 & 0x7f,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
    puVar4 = (unsigned int *)(iVar6 + iVar5 + -0x18);
    *param_1 = iVar5;
    uVar2 = param_1[1];
    *puVar4 = *puVar4 & 0xffffffe0 | 1;
    puVar4[3] = puVar4[3] | 0x20000;
    puVar4[4] = param_3 & 0x7fff | (uStack_7c & 0x3fff) << 0xf | puVar4[4] & 0xe0000000;
    uVar2 = (unsigned int)((0x1fU - LZCOUNT(*(unsigned int *)(iVar3 + puVar8[7]) & 0xf) & 0xffffffff) << 2) & 0xfffc
            | uVar2 & 0x10000 | 1;
    goto LAB_82b8ab4c;
  }
  uVar1 = fn_82ABDD90(param_2,0x7c,0,uStack_78);
  uVar1 = fn_82AC6560(param_2,uVar1,0x23);
  iVar3 = (int)((param_4 & 0x1fffffff) << 3);
  fn_82B840F8(uVar1,param_2,0x7c,
                -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4),param_3,
                uStack_7c,(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF),uStack_74);
  uVar2 = (unsigned int)uVar1 & 0xfffffffe;
  uVar7 = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(uVar2 + 0x24) = *(unsigned int *)(uVar7 + 0x10);
  *(unsigned int *)(*(unsigned int *)(uVar7 + 0x10) & 0xfffffffe) = uVar2;
  *(unsigned int *)(uVar2 + 0x28) = uVar7 - 0x14 | 1;
  *(unsigned int *)(uVar7 + 0x10) = uVar2 + 0x28;
  uVar2 = puVar8[1] >> 4 & 7;
  if (uVar2 == 0) {
    uVar2 = *(unsigned int *)(param_2 + 0x28) | 0x20000;
LAB_82b8a944:
    *(unsigned int *)(param_2 + 0x28) = uVar2;
  }
  else if (uVar2 == 1) {
    uVar2 = *(unsigned int *)(param_2 + 0x28) | 1;
    goto LAB_82b8a944;
  }
  fn_82B80A80(param_2,puVar8,uStack_7c,uStack_74,auStack_68[0],uVar1);
  uVar2 = *(unsigned int *)(iVar3 + puVar8[6] + 4);
  *param_1 = *(int *)(iVar3 + puVar8[6]);
LAB_82b8ab4c:
  param_1[1] = uVar2;
  return param_1;
}

