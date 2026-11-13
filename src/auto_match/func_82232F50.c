extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82233428();
extern int fn_82236DA0();
extern int fn_82236E18();
extern int fn_8223A7A8();
extern int fn_8238F748();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern int fn_828E2688();
extern int fn_828E3508();
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196C50;
extern unsigned int lbl_82196C68;
extern unsigned int lbl_82196C78;
extern unsigned int lbl_82196E48;
extern unsigned int lbl_82197F34;
extern unsigned int uStack_68;


unsigned int * fn_82232F50(unsigned int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  char cVar6;
  unsigned int *puVar5;
  unsigned int *puVar7;
  unsigned char auStack_70;
  struct { unsigned int first; int second; } stack_pair_68;

  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_58 [4];
  int iStack_54;
  unsigned char auStack_50 [4];
  int iStack_4c;
  
  fn_82233428();
  *param_1 = &lbl_82196C50;
  param_1[10] = &lbl_821968A4;
  fn_8238F748(param_1 + 0xc);
  puVar5 = param_1 + 0xd2;
  fn_828E3508(puVar5);
  param_1[0xe4] = 0;
  param_1[0xea] = 0;
  param_1[0xd2] = &lbl_82197F34;
  uVar2 = fn_8265C9E0(0x18);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828ABF58(uVar2,1,0,0xffffffffffffffff);
  }
  fn_8223A7A8(param_1 + 0xec,uVar3);
  uVar2 = fn_8265C9E0(0x18);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828ABF58(uVar2,1,0,0xffffffffffffffff);
  }
  fn_8223A7A8(param_1 + 0xee,uVar3);
  puVar7 = param_1 + 0xf0;
  *puVar5 = &lbl_82197F34;
  fn_828E3508(puVar7);
  param_1[0x102] = 0;
  param_1[0x108] = 0;
  param_1[0xf0] = &lbl_82196C68;
  puVar4 = (unsigned int *)fn_8265C9E0(8);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[1] = 0;
    *puVar4 = &lbl_82196E48;
  }
  fn_8223A7A8(param_1 + 0x10a,puVar4);
  *puVar7 = &lbl_82196C68;
  fn_828E3508(param_1 + 0x10c);
  param_1[0x11e] = 0;
  param_1[0x124] = 0;
  auStack_70 = 0;
  param_1[0x10c] = &lbl_82196C78;
  puVar4 = (unsigned int *)fn_82236DA0(auStack_60,&auStack_70);
  stack_pair_68.first = *puVar4;
  iVar1 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  stack_pair_68.second = iVar1;
  cVar6 = fn_828E2688(puVar5);
  if (cVar6 == '\0') {
    fn_823F2E20(param_1 + 0xec,&stack_pair_68.first);
    iVar1 = stack_pair_68.second;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  auStack_70 = 0;
  puVar4 = (unsigned int *)fn_82236DA0(auStack_58,&auStack_70);
  stack_pair_68.first = *puVar4;
  iVar1 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  stack_pair_68.second = iVar1;
  cVar6 = fn_828E2688(puVar5);
  if (cVar6 == '\0') {
    fn_823F2E20(param_1 + 0xee,&stack_pair_68.first);
    iVar1 = stack_pair_68.second;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  puVar5 = (unsigned int *)fn_82236E18(auStack_50,0xffffffff8219674c,0xffffffff82198048);
  stack_pair_68.first = *puVar5;
  iVar1 = puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  stack_pair_68.second = iVar1;
  cVar6 = fn_828E2688(puVar7);
  if (cVar6 == '\0') {
    fn_823F2E20(param_1 + 0x10a,&stack_pair_68.first);
    iVar1 = stack_pair_68.second;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  return param_1;
}

