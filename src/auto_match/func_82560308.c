extern unsigned int *auStack_60;
extern int fn_825306A0();
extern int fn_82531D10();
extern float lbl_82193CC0;
extern unsigned int lbl_8219567C;
extern unsigned int lbl_83296AE0;
extern unsigned int lbl_83296BB4;
extern unsigned int uStack_68;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82560308(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  float *pfVar2;
  unsigned int *puVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar5;
  __int64 lVar6;
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [56];
  
  puVar5 = &uStack_68;
  puVar4 = (unsigned __int64 *)0x83296888;
  lVar6 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar3 = (unsigned int *)(param_3 + 0x68);
  pfVar2 = (float *)(param_3 + 100);
  fn_82531D10(param_1,auStack_60);
  if (lbl_8219567C < *(float *)(param_3 + 0x60)) {
    *pfVar2 = *(float *)(param_3 + 0x60) * lbl_82193CC0 + *pfVar2;
  }
  uVar1 = *puVar3;
  *(float *)(lbl_83296AE0 + 100) = *pfVar2;
  *(unsigned int *)(lbl_83296AE0 + 0x68) = uVar1;
  lbl_83296BB4 = 1;
  fn_825306A0(0);
  return 1;
}

