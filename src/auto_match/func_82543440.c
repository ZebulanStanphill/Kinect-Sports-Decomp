extern int fn_82639380();
extern int fn_82639528();
extern int fn_826397C8();
extern int fn_8263CBB0();
extern unsigned int lbl_821954CC;
extern unsigned int uStack_4c;


void fn_82543440(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  unsigned int uVar7;
  int *piVar8;
  unsigned int uStack_4c;
  
  fVar5 = lbl_821954CC;
  if (*param_3 != 0) {
    piVar8 = param_3 + 2;
    iVar1 = *piVar8;
    iVar2 = *param_1;
    iVar6 = (iVar1 + 0x30) * 0x18;
    iVar4 = *(int *)((unsigned int)*(unsigned short *)(param_3 + 3) * 4 + **(int **)(param_2 + 4));
    *(unsigned int *)(iVar6 + iVar2) = (param_3[4] & 7U) << 10 | *(unsigned int *)(iVar6 + iVar2) & 0xffffe3ff;
    *(unsigned __int64 *)(iVar2 + 0x18) =
         0x8000000000000000U >> (iVar1 + 0x20U & 0x7f) | *(unsigned __int64 *)(iVar2 + 0x18);
    iVar1 = *param_1;
    iVar2 = *piVar8;
    iVar6 = (iVar2 + 0x30) * 0x18;
    *(unsigned int *)(iVar6 + iVar1) = (param_3[5] & 7U) << 0xd | *(unsigned int *)(iVar6 + iVar1) & 0xffff1fff;
    *(unsigned __int64 *)(iVar1 + 0x18) =
         0x8000000000000000U >> (iVar2 + 0x20U & 0x7f) | *(unsigned __int64 *)(iVar1 + 0x18);
    iVar1 = *param_1;
    iVar2 = *piVar8;
    iVar6 = (iVar2 + 0x30) * 0x18 + iVar1;
    uStack_4c = (unsigned int)(__int64)((float)param_3[6] * fVar5);
    *(unsigned int *)(iVar6 + 0x10) = (uStack_4c & 0x3ff) << 0xc | *(unsigned int *)(iVar6 + 0x10) & 0xffc00fff;
    *(unsigned __int64 *)(iVar1 + 0x18) =
         0x8000000000000000U >> (iVar2 + 0x20U & 0x7f) | *(unsigned __int64 *)(iVar1 + 0x18);
    if ((unsigned int)param_3[7] < 2) {
      fn_82639380(*param_1,*piVar8,1);
    }
    else {
      fn_826397C8();
      fn_82639380(*param_1,*piVar8,4);
    }
    fn_82639528(*param_1,*piVar8);
    iVar1 = *piVar8;
    if (*(int *)(iVar4 + 0x1c) == 4) {
      uVar7 = (unsigned int)*(unsigned char *)(*(int *)(*(int *)param_3[1] + *(int *)(param_2 + 4) + 8) + iVar1);
      uVar3 = *(unsigned int *)
               ((-(unsigned int)(uVar7 < *(unsigned int *)(iVar4 + 0x38)) & uVar7) * 4 + *(int *)(iVar4 + 0x34));
    }
    else {
      uVar3 = *(unsigned int *)(iVar4 + 0x34);
    }
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(*param_1,iVar1,uVar3,0x8000000000000000 >> (iVar1 + 0x20U & 0x7f));
  }
  return;
}

