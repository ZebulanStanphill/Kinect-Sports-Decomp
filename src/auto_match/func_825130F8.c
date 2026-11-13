extern int fn_822315A0();
extern int fn_8223B688();
extern int fn_82511928();
extern int fn_82513D20();
extern int fn_825154B8();
extern int fn_825156F8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_821C24F4;
extern unsigned int lbl_821C2524;
extern unsigned int lbl_83297810;


unsigned int * fn_825130F8(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  int *piVar8;
  unsigned int *apuStack_40 [16];
  
  *param_1 = &lbl_821C24F4;
  param_1[1] = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_82F68CC0(param_1 + 4,param_2 + 2,8);
  param_1[6] = 0;
  piVar8 = param_1 + 6;
  fn_8223B688(param_1 + 7,param_2 + 4);
  uVar5 = param_2[1];
  uVar3 = fn_825154B8();
  puVar4 = (unsigned int *)fn_825156F8(uVar3,uVar5);
  uVar5 = (*(int (**)())puVar4[8])(*puVar4,puVar4 + 1,puVar4[0xd]);
  puVar4 = (unsigned int *)fn_8265C9E0(0x14);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[3] = uVar5;
    puVar4[1] = 1;
    *puVar4 = &lbl_821C2524;
    puVar4[2] = 1;
  }
  iVar1 = param_1[3];
  param_1[3] = puVar4;
  param_1[2] = uVar5;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  (*(int (**)())**(unsigned int **)param_1[2])();
  piVar6 = (int *)(*(int (**)())param_2[0xc])(apuStack_40,param_1);
  if (piVar8 != piVar6) {
    puVar4 = (unsigned int *)*piVar6;
    *piVar6 = 0;
    puVar2 = (unsigned int *)*piVar8;
    if (puVar4 != puVar2) {
      if (puVar2 != (unsigned int *)0x0) {
        (**(int (***)())*puVar2)(puVar2,1);
      }
      *piVar8 = (int)puVar4;
    }
  }
  if (apuStack_40[0] != (unsigned int *)0x0) {
    (**(int (***)())*apuStack_40[0])(apuStack_40[0],1);
  }
  uVar5 = param_1[1];
  uVar7 = (unsigned __int64)lbl_83297810;
  if (uVar7 == 0) {
    uVar7 = fn_82511928();
  }
  fn_82513D20(uVar7,uVar5,0);
  return param_1;
}

