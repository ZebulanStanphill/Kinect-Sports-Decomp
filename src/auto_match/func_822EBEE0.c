#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_40;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822EC248();
extern int fn_82536690();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_58;


void fn_822EBEE0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  unsigned int *puVar6;
  __int64 alStack_70 [2];
  struct { int first; int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  unsigned char auStack_40 [32];
  
  fn_8255FD70(&puStack_50,*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x118) + 0x24),
                    param_2);
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  uStack_58 = 0;
  for (puVar6 = puStack_50; iVar3 = stack_pair_60.first, puVar6 != puStack_4c; puVar6 = puVar6 + 1) {
    alStack_70[0] = CONCAT44(*puVar6,((unsigned int)(alStack_70[0])));
    fn_82230110(auStack_40);
    iVar3 = fn_822EC248(param_1,auStack_40);
    if (iVar3 == 0) {
      fn_82536690(&stack_pair_60.first,alStack_70);
    }
    fn_82230300(auStack_40,1,0);
  }
  if (stack_pair_60.first == stack_pair_60.second) {
    pcVar5 = (char *)0x0;
    pcVar4 = "";
  }
  else {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar1 = (int)((float)(__int64)(stack_pair_60.second - stack_pair_60.first >> 2) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
    alStack_70[0] = (__int64)iVar1;
    pcVar4 = *(char **)(iVar1 * 4 + stack_pair_60.first);
    pcVar5 = pcVar4;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + (-1 - (int)pcVar4);
  }
  fn_82230360(param_1 + 0x28,pcVar4,pcVar5);
  if (iVar3 != 0) {
    fn_8265CA20(iVar3);
  }
  if (puStack_50 != (unsigned int *)0x0) {
    fn_8265CA20();
  }
  return;
}

