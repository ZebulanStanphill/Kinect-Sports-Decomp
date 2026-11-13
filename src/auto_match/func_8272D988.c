typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_8268ACE8();
extern int fn_8268AE58();
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_8268B8E8();
extern int fn_826BD928();
extern int fn_827050F0();
extern int fn_8272D828();
extern int fn_82793908();
extern int fn_827A0C50();
extern int strchr();
extern unsigned int iStack_58;
extern unsigned int iStack_6c;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_8272D988(int *param_1,int *param_2)

{
  bool bVar1;
  unsigned int uVar2;
  char cVar7;
  unsigned __int64 uVar3;
  int iVar5;
  int *piVar6;
  unsigned __int64 uVar4;
  unsigned int *puVar8;
  __int64 lVar9;
  char in_RESERVE;
  unsigned char bVar10;
  unsigned int uStack_70;
  int iStack_6c;
  float fStack_68;
  float fStack_64;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  int iStack_58;
  struct { unsigned int first; unsigned int second; } stack_pair_50;


  if (*param_2 != 0x800) {
    return 0;
  }
  if ((*(unsigned short *)(param_1 + 0x32) >> 1 & 1) == 0) {
    return 1;
  }
  if ((*(unsigned char *)(*(int *)(param_1[0x28] + 8) + 0x20) & 1) == 0) {
    return 1;
  }
  cVar7 = fn_8272D828(param_1,*(unsigned char *)((int)param_2 + 0xb),&fStack_68,0);
  if (cVar7 == '\0') {
    return 1;
  }
  uVar3 = fn_827A0C50((double)fStack_68,(double)fStack_64,param_1[0x28]);
  if ((int)uVar3 == -1) {
    return 1;
  }
  cVar7 = fn_82793908(*(unsigned int *)(param_1[0x28] + 8),&iStack_6c,0,uVar3);
  if (cVar7 == '\0') {
    return 1;
  }
  if ((*(unsigned short *)(iStack_6c + 0x2a) & 0x100) == 0) {
LAB_8272da48:
    bVar1 = false;
  }
  else {
    iVar5 = fn_8268ACE8(iStack_6c + 0x10);
    bVar1 = true;
    if (iVar5 == 0) goto LAB_8272da48;
  }
  if (!bVar1) {
    return 1;
  }
  uVar4 = (unsigned __int64)*(unsigned int *)(iStack_6c + 0x10) & 0xfffffffc;
  piVar6 = (int *)(**(int (***)())(*param_1 + 0x40))(param_1);
  if (piVar6 == (int *)0x0) {
    return 1;
  }
  iVar5 = fn_8268AE58(uVar4 + 8,0xffffffff8201163c,0xb);
  bVar10 = (iVar5 == 0) << 1;
  if (iVar5 != 0) {
    return 1;
  }
  lVar9 = uVar4 + 0x13;
  uVar4 = strchr(lVar9,0x2c);
  fn_8268B330(&uStack_70);
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  bVar1 = (uVar4 & 0xffffffff) == 0;
  if (bVar1) {
    fn_8268B8E8(&uStack_70,lVar9);
  }
  else {
    fn_8268B610(&uStack_70,lVar9,uVar4 - lVar9);
    fn_82273CD8(&stack_pair_60.first,4);
    iStack_58 = (int)uVar4 + 1;
  }
  bVar1 = !bVar1;
  iVar5 = param_1[8];
  stack_pair_50.first = 0;
  stack_pair_50.second = 0;
  if (iVar5 != 0) {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    lVar9 = fn_826BD928(iVar5 + 0x68);
    bVar10 = (lVar9 == 0) << 1;
    if (lVar9 != 0) {
      fn_827050F0(piVar6,lVar9,((unsigned __int64)uStack_70 & 0xfffffffc) + 8,&stack_pair_50.first,&stack_pair_60.first,
                        bVar1);
      goto LAB_8272db7c;
    }
  }
  (**(int (***)())(*piVar6 + 0x5c))
            (piVar6,((unsigned __int64)uStack_70 & 0xfffffffc) + 8,&stack_pair_50.first,&stack_pair_60.first,bVar1);
LAB_8272db7c:
  if (iVar5 != 0) {
    fn_8267C498(iVar5);
  }
  fn_82273C88(&stack_pair_50.first);
  fn_82273C88(&stack_pair_60.first);
  lVar9 = ((unsigned __int64)uStack_70 & 0xfffffffc) + 4;
  do {
    puVar8 = (unsigned int *)lVar9;
    uVar4 = (unsigned __int64)*puVar8;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar4 - 1,0,lVar9);
      *puVar8 = uVar2;
      bVar10 = 2;
    }
  } while (!(bool)(bVar10 >> 1 & 1));
  if (uVar4 == 1) {
    fn_8267BE38();
  }
  return 1;
}
