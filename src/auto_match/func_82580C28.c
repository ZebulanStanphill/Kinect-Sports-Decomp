extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_827DDB88();
extern int fn_827DDBF8();
extern int fn_82811438();
extern int fn_82BFE230();
extern unsigned int lbl_821C55F8;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_30;
extern unsigned int uStack_44;
extern unsigned int uStack_68;


unsigned int * fn_82580C28(int param_1)

{
  unsigned __int64 *puVar1;
  unsigned int *puVar2;
  unsigned __int64 *puVar3;
  __int64 lVar4;
  unsigned int auStack_90 [4];
  unsigned char auStack_80 [24];
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [28];
  unsigned int uStack_44;
  int (**pcStack_38)();
  int (**pcStack_34)();
  unsigned int uStack_30;
  
  auStack_90[0] = 0;
  fn_82811438(auStack_80,auStack_90,0x10);
  puVar2 = (unsigned int *)
           (**(int (***)())(*(int *)lbl_83156AA0 + 4))
                     (lbl_83156AA0,0x10,auStack_80,*(unsigned int *)(param_1 + 8));
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    uStack_30 = *(unsigned int *)(param_1 + 8);
    *puVar2 = &lbl_821C55F8;
    puVar2[1] = 0;
    puVar2[2] = uStack_30;
    lVar4 = 6;
    puVar1 = &uStack_68;
    do {
      puVar3 = puVar1;
      puVar1 = puVar3 + 1;
      *puVar1 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(unsigned int *)(puVar3 + 2) = 0;
    puVar2[3] = 0;
    pcStack_38 = fn_827DDB88;
    pcStack_34 = fn_827DDBF8;
    uStack_44 = 0x34;
    fn_82BFE230(auStack_60,puVar2 + 1);
  }
  return puVar2;
}

