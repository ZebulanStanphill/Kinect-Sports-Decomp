extern int memcpy();
extern unsigned int lbl_82089AB0;
extern unsigned int lbl_82089AC0;
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int lbl_8315D960;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A49DF8(unsigned short *param_1,int param_2,unsigned short param_3,unsigned short param_4,int param_5,
                  unsigned int param_6,unsigned short param_7,int param_8)

{
  unsigned short *puVar1;
  unsigned int uVar2;
  unsigned short *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  __int64 lVar8;
  unsigned short in_stack_00000056;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  
  param_6 = param_6 & 0xffff;
  if (param_6 == 0) {
    if (param_3 == 2) {
      param_6 = 4;
    }
    else {
      param_6 = -(unsigned int)(param_3 == 3) & 0x20;
    }
  }
  param_1[1] = param_4;
  *(int *)(param_1 + 2) = param_5;
  param_1[7] = (unsigned short)param_6;
  param_1[8] = (short)param_2 - 0x12;
  uVar2 = (unsigned int)param_4;
  if (param_3 == 2) {
    param_1[10] = 7;
    lVar8 = 7;
    param_1[9] = in_stack_00000056;
    trapWord(6,(unsigned __int64)in_stack_00000056,0);
    uVar4 = (in_stack_00000056 - 2) * (unsigned int)param_4;
    uVar6 = uVar4 * 4;
    uVar4 = uVar6 | uVar4 >> 0x1e;
    puVar3 = param_1 + 10;
    iVar5 = 0;
    uVar6 = ((int)uVar4 >> 3) + (unsigned int)((int)uVar4 < 0 && (uVar6 & 4) != 0) + uVar2 * 7;
    param_1[6] = (unsigned short)uVar6;
    *(int *)(param_1 + 4) =
         (int)(((__int64)(int)(uVar6 & 0xffff) * (__int64)param_5 & 0xffffffffU) /
              (unsigned __int64)in_stack_00000056);
    do {
      puVar3[1] = *(unsigned short *)(&lbl_82089AB0 + iVar5);
      puVar1 = (unsigned short *)(&lbl_82089AC0 + iVar5);
      iVar5 = iVar5 + 2;
      puVar3 = puVar3 + 2;
      *puVar3 = *puVar1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  else {
    uVar6 = param_6 * param_4;
    uVar6 = ((int)uVar6 >> 3) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 7) != 0);
    param_1[6] = (unsigned short)uVar6;
    *(unsigned int *)(param_1 + 4) = (uVar6 & 0xffff) * param_5;
  }
  if (param_2 == 0x28) {
    *param_1 = 0xfffe;
    uStack_48 = lbl_8208E058;
    uStack_44 = lbl_8208E05C;
    stack_pair_50.second = lbl_8208E054;
    stack_pair_50.first = (unsigned int)param_3;
    memcpy(param_1 + 0xc,&stack_pair_50.first,0x10);
    if (param_7 == 0) {
      param_7 = (unsigned short)param_6;
    }
    param_1[9] = param_7;
    if (param_8 == -1) {
      uVar7 = 0;
      if ((uVar2 != 0) && (uVar2 < 9)) {
        uVar7 = *(unsigned int *)(&lbl_8315D960 + (unsigned int)param_4 * 4);
      }
      *(unsigned int *)(param_1 + 10) = uVar7;
    }
    else {
      *(int *)(param_1 + 10) = param_8;
    }
  }
  else {
    *param_1 = param_3;
  }
  return;
}

