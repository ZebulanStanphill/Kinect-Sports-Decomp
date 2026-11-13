extern int fn_8267BE38();
extern int fn_826944C8();
extern int fn_8269A608();
extern int fn_8269F500();
extern int fn_826C2D50();
extern int fn_826C3BE0();
extern unsigned int lbl_8200B908;
extern unsigned int lbl_8200B960;


unsigned int *
fn_826C40A8(unsigned int *param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
             unsigned __int64 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar7;
  __int64 lVar6;
  
  fn_826C2D50();
  param_1[0xc] = 0;
  *param_1 = &lbl_8200B960;
  param_1[4] = &lbl_8200B908;
  param_1[0xd] = 0;
  if (param_3 != 0) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  param_1[0xe] = param_3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_4;
  param_1[0x13] = param_5;
  iVar1 = *(int *)(*(int *)(param_2 + 0x78) + 8);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = iVar1;
  uVar7 = *(int *)(iVar1 + 8) + 1;
  *(unsigned int *)(iVar1 + 8) = uVar7;
  lVar6 = (unsigned __int64)uVar7 - 1;
  *(int *)(iVar1 + 8) = (int)lVar6;
  if (lVar6 == 0) {
    fn_826944C8();
  }
  *(unsigned short *)(param_1 + 0x19) = 0;
  *(unsigned char *)((int)param_1 + 0x67) = 0;
  *(char *)((int)param_1 + 0x66) = (char)param_7;
  if ((param_6 & 0xffffffff) != 0) {
    fn_826C3BE0(param_1 + 0xf,param_6);
  }
  if ((param_7 != 3) && (param_7 != 4)) {
    piVar2 = *(int **)(param_2 + 0x74);
    piVar4 = (int *)piVar2[0x20];
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)fn_8269F500(piVar2);
    }
    if (piVar4 != (int *)0x0) {
      *piVar4 = *piVar4 + 1;
    }
    puVar3 = (unsigned int *)param_1[0xd];
    if ((puVar3 != (unsigned int *)0x0) &&
       (uVar7 = *puVar3, *puVar3 = (unsigned int)((unsigned __int64)uVar7 - 1),
       (__int64)((unsigned __int64)uVar7 - 1) < 1)) {
      fn_8269A608(puVar3);
      fn_8267BE38(puVar3);
    }
    param_1[0xd] = piVar4;
    uVar5 = (**(int (***)())(*piVar2 + 0x40))(piVar2);
    param_1[0xc] = uVar5;
  }
  return param_1;
}

