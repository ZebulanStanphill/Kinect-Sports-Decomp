extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82240378();
extern int fn_824A3140();
extern int fn_8258E3A8();
extern int fn_8265C940();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_64;


unsigned __int64 fn_8258DE50(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned char *param_5)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int aiStack_70 [2];
  unsigned char **ppuStack_68;
  unsigned int uStack_64;
  unsigned char auStack_60 [28];
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  fn_8258E3A8(aiStack_70,param_1,param_2);
  if (aiStack_70[0] == *(int *)(param_1 + 4)) {
    *param_5 = 0;
    uVar3 = fn_8265C940(param_3,param_4);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      fn_8223B688(auStack_60,param_2);
      uStack_44 = (unsigned int)uVar3;
      uStack_40 = 1;
      puVar2 = (unsigned int *)fn_8265C9E0(0x34);
      if (puVar2 == (unsigned int *)0x0) {
        uStack_64 = 0;
        ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_68);
      }
      *puVar2 = *(unsigned int *)(param_1 + 4);
      puVar2[1] = *(unsigned int *)(param_1 + 4);
      puVar2[2] = *(unsigned int *)(param_1 + 4);
      *(unsigned char *)(puVar2 + 0xc) = 0;
      *(unsigned char *)((int)puVar2 + 0x31) = 0;
      if (puVar2 + 3 != (unsigned int *)0x0) {
        fn_82240378(puVar2 + 3,auStack_60);
        puVar2[10] = uStack_44;
        puVar2[0xb] = uStack_40;
      }
      fn_824A3140(aiStack_70,param_1,puVar2);
      fn_82230300(auStack_60,1,0);
    }
  }
  else {
    iVar1 = *(int *)(aiStack_70[0] + 0x2c);
    *param_5 = 1;
    *(int *)(aiStack_70[0] + 0x2c) = iVar1 + 1;
    uVar3 = (unsigned __int64)*(unsigned int *)(aiStack_70[0] + 0x28);
  }
  fn_82230300(param_2,1,0);
  return uVar3;
}

