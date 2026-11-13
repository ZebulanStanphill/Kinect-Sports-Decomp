extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82233428();
extern int fn_82236E18();
extern int fn_8223A7A8();
extern int fn_823297C8();
extern int fn_823A9560();
extern int fn_823ECB88();
extern int fn_823F0970();
extern int fn_823F09D0();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_828E2688();
extern int fn_828E3508();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int lbl_821968A4;
extern unsigned int lbl_821980B4;
extern unsigned int lbl_821980BC;
extern unsigned int lbl_82198494;
extern unsigned int uStack_58;


unsigned int * fn_824043E0(unsigned int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  char cVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int auStack_60;
  struct { unsigned int first; int second; } stack_pair_58;

  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  
  fn_82233428();
  *param_1 = &lbl_821980B4;
  puVar4 = param_1 + 0xc;
  param_1[10] = &lbl_821968A4;
  fn_823ECB88(puVar4);
  puVar5 = param_1 + 0x2a;
  fn_828E3508(puVar5);
  param_1[0x3c] = 0;
  param_1[0x42] = 0;
  param_1[0x2a] = &lbl_821980BC;
  puVar2 = (unsigned int *)fn_8265C9E0(8);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &lbl_82198494;
  }
  fn_8223A7A8(param_1 + 0x44,puVar2);
  stack_pair_58.first = 0;
  auStack_60 = 2;
  *puVar5 = &lbl_821980BC;
  puVar2 = (unsigned int *)fn_823A9560(auStack_50,&stack_pair_58.first,&auStack_60);
  stack_pair_58.first = *puVar2;
  stack_pair_58.second = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  fn_823F0970(puVar4,&stack_pair_58.first);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  puVar2 = (unsigned int *)fn_82236E18(auStack_48,0xffffffff821921e0,0xffffffff821921e4);
  stack_pair_58.first = *puVar2;
  stack_pair_58.second = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  fn_823F09D0(puVar4,&stack_pair_58.first);
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  puVar2 = (unsigned int *)fn_823297C8(auStack_40);
  stack_pair_58.first = *puVar2;
  iVar1 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  stack_pair_58.second = iVar1;
  cVar3 = fn_828E2688(puVar5);
  if (cVar3 == '\0') {
    fn_823F2E20(param_1 + 0x44,&stack_pair_58.first);
    iVar1 = stack_pair_58.second;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return param_1;
}

