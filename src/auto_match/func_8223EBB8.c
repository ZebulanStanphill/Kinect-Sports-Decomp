extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230300();
extern int fn_8223F468();
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_8223F670();
extern int fn_8223F7A8();
extern int fn_822402F8();
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


unsigned __int64
fn_8223EBB8(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
             char param_6)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned __int64 *puVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  int aiStack_c0 [4];
  unsigned int ***apppuStack_b0 [4];
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  
  if ((*(unsigned int *)(param_4 + 0x14) & 0x4000) == 0) {
    (**(int (***)())(*param_2 + 0x1c))();
  }
  else {
    iVar1 = **(int **)(param_4 + 0x30);
    aiStack_c0[0] = iVar1;
    fn_8223F508(iVar1);
    piVar3 = (int *)fn_8223F468(aiStack_c0);
    if (iVar1 != 0) {
      puVar4 = (unsigned int *)fn_8223F5A0(iVar1);
      if (puVar4 != (unsigned int *)0x0) {
        (**(int (***)())*puVar4)(puVar4,1);
      }
    }
    fn_82230300(apppuStack_b0,0,0);
    if (param_6 == '\0') {
      (**(int (***)())(*piVar3 + 0x10))(auStack_70,piVar3);
      fn_822402F8(apppuStack_b0,auStack_70);
      puVar5 = auStack_70;
    }
    else {
      (**(int (***)())(*piVar3 + 0x14))(auStack_90);
      fn_822402F8(apppuStack_b0,auStack_90);
      puVar5 = auStack_90;
    }
    fn_82230300(puVar5,1,0);
    uVar8 = (unsigned __int64)uStack_a0;
    if (((__int64)*(unsigned __int64 *)(param_4 + 0x20) < 1) ||
       (uVar2 = *(unsigned __int64 *)(param_4 + 0x20) & 0xffffffff, lVar9 = uVar2 - uVar8, uVar2 <= uVar8))
    {
      lVar9 = 0;
    }
    if ((*(unsigned int *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      puVar6 = (unsigned __int64 *)fn_8223F7A8(aiStack_c0,param_2,param_3,param_5,lVar9);
      param_3 = *puVar6;
      uVar8 = (unsigned __int64)uStack_a0;
      lVar9 = 0;
    }
    if (uStack_9c < 0x10) {
      apppuStack_b0[0] = apppuStack_b0;
    }
    puVar6 = (unsigned __int64 *)fn_8223F670(aiStack_c0,param_2,param_3,apppuStack_b0[0],uVar8);
    uVar7 = *puVar6;
    *(unsigned __int64 *)(param_4 + 0x20) = 0;
    fn_8223F7A8(param_1,param_2,uVar7,param_5,lVar9);
    fn_82230300(apppuStack_b0,1,0);
  }
  return param_1;
}

