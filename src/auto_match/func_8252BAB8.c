typedef unsigned char bool;
#define true 1
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82523340();
extern int fn_82523548();
extern int fn_8252C088();
extern int fn_8252CAF8();
extern int fn_82549960();
extern int fn_8265C9E0();
extern float lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


bool fn_8252BAB8(int param_1,unsigned int *param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned int uVar5;
  __int64 lVar3;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  
  iVar9 = param_1 + 0x8bc;
  if (*(int **)(param_1 + 0x8c0) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x8c0) + 8))();
    puVar1 = *(unsigned int **)(param_1 + 0x8c0);
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    *(unsigned int *)(param_1 + 0x8c0) = 0;
  }
  if ((param_2 == (unsigned int *)0x0) || (*param_2 == 0)) {
    return true;
  }
  if (*param_2 >> 0x18 != 0x6f) {
    fn_8252C088(iVar9,param_4 + 200,param_4 + 0xcc);
    uVar2 = fn_8265C9E0(0x200);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82549960(uVar2,param_2,0,0,param_3,param_1 + 0x8cc);
    }
    *(unsigned int *)(param_1 + 0x8c0) = uVar5;
    goto LAB_8252bd24;
  }
  iVar4 = fn_8251F720(param_2,0);
  if (*(int *)(iVar4 + 8) == 0) {
    if ((*(int *)(iVar4 + 4) == 0) || (lVar3 = fn_8251F720(iVar4 + 4,0), lVar3 == 0)) {
      fn_8252C088(iVar9,iVar4 + 0xc,iVar4 + 0x10);
      uVar2 = fn_8265C9E0(0x200);
      if ((uVar2 & 0xffffffff) == 0) goto LAB_8252bcb0;
      uVar5 = fn_82549960(uVar2,iVar4,0,0,param_3,param_1 + 0x8cc);
      goto LAB_8252bcb4;
    }
    iVar6 = param_4 + 200;
    if ((*(int *)(param_4 + 200) == 0) || (iVar7 = param_4 + 0xcc, *(int *)(param_4 + 0xcc) == 0)) {
      iVar7 = iVar4 + 0x10;
      iVar6 = iVar4 + 0xc;
    }
    fn_8252C088(iVar9,iVar6,iVar7);
    uVar5 = *(unsigned int *)(*(int *)(param_3 + 0xb8) + 0x80);
    uVar2 = fn_8265C9E0(0x319c0);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82523340(uVar2,lVar3,param_1 + 0x8cc,param_1 + 0x8f0,uVar5,
                                *(unsigned int *)(param_4 + 0x4d8),0,*(unsigned int *)(param_4 + 0x4dc))
      ;
    }
    *(unsigned int *)(param_1 + 0x8c0) = uVar5;
    fn_8251FA58(lVar3);
  }
  else {
    iVar6 = param_4 + 200;
    if ((*(int *)(param_4 + 200) == 0) || (iVar7 = param_4 + 0xcc, *(int *)(param_4 + 0xcc) == 0)) {
      iVar7 = iVar4 + 0x10;
      iVar6 = iVar4 + 0xc;
    }
    fn_8252C088(iVar9,iVar6,iVar7);
    uVar5 = *(unsigned int *)(*(int *)(param_3 + 0xb8) + 0x80);
    uVar2 = fn_8265C9E0(0x319c0);
    if ((uVar2 & 0xffffffff) == 0) {
LAB_8252bcb0:
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82523548(uVar2,1,0,1,param_1 + 0x8cc,param_1 + 0x8f0,uVar5,
                                *(unsigned int *)(param_4 + 0x4d8));
    }
LAB_8252bcb4:
    *(unsigned int *)(param_1 + 0x8c0) = uVar5;
  }
  (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x98))
            (*(int **)(param_1 + 0x8c0),iVar4 + 0x14,iVar4 + 0x18);
  fn_8251FA58(iVar4);
LAB_8252bd24:
  uVar8 = *(unsigned int *)(param_1 + 0x91c);
  if (uVar8 == 4) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar8 = (unsigned int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_8218E8FC);
  }
  fn_8252CAF8(param_1,0xf,uVar8 & 0xff);
  return *(int *)(param_1 + 0x8c0) != 0;
}

