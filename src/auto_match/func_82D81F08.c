extern unsigned int *auStack_a0;
extern int fn_82CE5410();
extern int fn_82CE8B30();
extern int fn_82CFBAD8();
extern unsigned int iStack_78;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_ea;
extern unsigned int uStack_ec;
extern unsigned int uStack_ee;
extern unsigned int uStack_ef;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


void fn_82D81F08(int param_1,int param_2,int param_3,unsigned __int64 param_4,int *param_5,
                  unsigned __int64 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  unsigned __int64 *puVar4;
  unsigned int uVar5;
  unsigned __int64 *puVar6;
  __int64 lVar7;
  unsigned __int64 uStack_f8;
  unsigned char uStack_f0;
  unsigned char uStack_ef;
  unsigned char uStack_ee;
  unsigned short uStack_ec;
  unsigned short uStack_ea;
  unsigned int uStack_e0;
  int *piStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  int iStack_cc;
  int iStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned __int64 uStack_a8;
  unsigned char auStack_a0 [40];
  int iStack_78;
  
  iVar1 = fn_82CE5410();
  piVar2 = (int *)(**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x10);
  uStack_d4 = *(unsigned int *)(param_1 + 0x78);
  iVar1 = 1;
  uStack_bc = *(unsigned int *)(param_1 + 0x58);
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_ef = 3;
  uStack_ec = 0x50;
  uStack_ea = 0xffff;
  uStack_ee = 1;
  uStack_d0 = 0x40;
  uStack_e0 = (unsigned int)param_6;
  if (param_3 != 0) {
    uVar5 = param_3 - 1;
    iVar1 = ((int)uVar5 >> 6) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 0x3f) != 0) + 1;
  }
  *piVar2 = iVar1;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  piStack_dc = piVar2;
  iStack_cc = param_2;
  iStack_c8 = param_3;
  if ((*(int **)(param_1 + 0x5c) != (int *)0x0) &&
     (cVar3 = (**(int (***)())(**(int **)(param_1 + 0x5c) + 0x10))(), cVar3 != '\0')) {
    uStack_bc = 0;
    uStack_b4 = *(unsigned int *)(*(int *)(param_1 + 0x5c) + 0xc);
    uStack_b0 = *(unsigned int *)(*(int *)(param_1 + 0x5c) + 0x10);
  }
  if (0 < param_3) {
    do {
      puVar4 = &uStack_a8;
      puVar6 = &uStack_f8;
      lVar7 = 10;
      do {
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar6;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      iStack_78 = param_3;
      if (param_7 <= param_3) {
        iStack_78 = param_7;
      }
      param_3 = param_3 - param_7;
      param_2 = param_7 * 0x40 + param_2;
      iStack_cc = param_2;
      iStack_c8 = param_3;
      fn_82CE8B30(param_4,auStack_a0,1);
    } while (0 < param_3);
  }
  (**(int (***)())(*param_5 + 0xc))(param_5,param_4,0xb);
  (**(int (***)())(*param_5 + 0x10))(param_5);
  fn_82CFBAD8(param_6);
  iVar1 = fn_82CE5410();
  (**(int (***)())(**(int **)(iVar1 + 0x10) + 8))(*(int **)(iVar1 + 0x10),piVar2,0x10);
  return;
}

