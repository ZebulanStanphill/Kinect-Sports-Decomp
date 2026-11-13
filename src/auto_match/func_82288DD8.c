extern int fn_82266DD8();
extern int fn_82286EA8(unsigned);
extern int fn_82288ED8();
extern int fn_8228A540();
extern int fn_8228AF60();
extern char lbl_82196582[];
extern int fn_8265C9E0();


void fn_82288DD8(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned uVar2;
  int iVar3;
  int iVar4;
  unsigned int *sentinel;
  
  if (param_1[0x183] != 0) {
    fn_82286EA8(param_1[0x183]);
  }
  uVar2 = fn_8265C9E0(0x5e0);
  if (uVar2) iVar3=fn_82266DD8(uVar2,param_1+100,*param_1,param_1[0x1a6],0);
  else iVar3=0;
  param_1[0x183] = iVar3;
  sentinel=**(unsigned int ***)(iVar3+0x5c0);
  for(puVar1=(unsigned int *)*sentinel;puVar1!=sentinel; puVar1 = (unsigned int *)*puVar1) {
    iVar4 = puVar1[2];
    if (*(int *)(iVar4 + 0x40) == 0) goto LAB_82288e5c;
  }
  iVar4 = 0;
LAB_82288e5c:
  fn_82288ED8(iVar4,0);
  sentinel=**(unsigned int ***)(param_1[0x183]+0x5c0);
  for(puVar1=(unsigned int *)*sentinel;puVar1!=sentinel; puVar1 = (unsigned int *)*puVar1) {
    iVar3 = puVar1[2];
    if (*(int *)(iVar3 + 0x40) == 1) goto LAB_82288e98;
  }
  iVar3 = 0;
LAB_82288e98:
  fn_82288ED8(iVar3,1);
  fn_8228A540(param_1,"ticker_teamsetupaionlinegroup");
  fn_8228AF60(param_1,lbl_82196582);
  return;
}

