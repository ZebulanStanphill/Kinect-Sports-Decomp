extern unsigned int *auStack_70;
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern int fn_83064858();
extern int fn_83065890();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern unsigned int lbl_8217E890;
extern unsigned int uStack_48;
extern unsigned int uStack_60;


unsigned __int64 fn_83064EB8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char cVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int auStack_70 [2];
  unsigned char **appuStack_68 [2];
  unsigned int uStack_60;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  unsigned int uStack_48;
  
  uStack_60 = 0;
  appuStack_68[0] = &lbl_8217E890;
  uStack_48 = 0;
  puStack_50 = (unsigned int *)0x0;
  puStack_4c = (unsigned int *)0x0;
  uVar7 = 0;
  lVar8 = 0;
  fn_83065890(appuStack_68);
  puVar2 = (unsigned int *)0x0;
  puVar3 = (unsigned int *)0x0;
  uVar4 = auStack_70[0];
  auStack_70[0] = uStack_60;
  while (uStack_60 = auStack_70[0], auStack_70[0] != 0) {
    lVar8 = lVar8 + 1;
    fn_8257A9F0(&puStack_50,auStack_70);
    uVar5 = (*(int (**)())appuStack_68[0][1])(appuStack_68,uStack_60);
    puVar2 = puStack_4c;
    puVar3 = puStack_50;
    uVar4 = auStack_70[0];
    auStack_70[0] = uVar5;
  }
  puVar1 = puVar3;
  if ((param_3 & 0xffffffff) != 0) {
    auStack_70[0] = uVar4;
    fn_830677A0(param_3,lVar8,param_4);
    uVar4 = auStack_70[0];
  }
  for (; auStack_70[0] = uVar4, puVar1 != puVar2; puVar1 = puVar1 + 1) {
    cVar6 = fn_83064858(param_1,*puVar1);
    if (cVar6 != '\0') {
      uVar7 = 1;
    }
    if ((param_3 & 0xffffffff) != 0) {
      fn_830679A8(param_3);
    }
    uVar4 = auStack_70[0];
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_830678C8(param_3);
  }
  if (puVar3 != (unsigned int *)0x0) {
    fn_8265CA20(puVar3);
  }
  return uVar7;
}

