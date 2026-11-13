#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_8267BED0();
extern int fn_826A68D8();
extern int fn_826A91F0();
extern int fn_826E7430();
extern int fn_826E7458();
extern int fn_826E7A08();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_826A9798(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  
  *(int *)(param_1 + 0xc) = (int)param_3;
  uVar3 = fn_8267BED0(param_1,param_3,0);
  *(int *)(param_1 + 8) = (int)uVar3;
  fn_826E7A08(param_2,uVar3,*(unsigned int *)(param_1 + 0xc));
  cVar4 = fn_826E7458(param_2);
  if (cVar4 != '\0') {
    iVar2 = *(int *)(param_1 + 8);
    stack_pair_40.second = 0x33;
    iVar5 = 0;
    do {
      bVar1 = *(unsigned char *)(iVar2 + iVar5);
      iVar6 = iVar5 + 1;
      if ((bVar1 & 0x80) != 0) {
        iVar6 = (unsigned int)CONCAT11(*(unsigned char *)(iVar2 + iVar6 + 1),*(unsigned char *)(iVar2 + iVar6)) +
                iVar5 + 3;
      }
      fn_826A91F0(param_2,0xffffffff820072ac,iVar5);
      stack_pair_40.first = fn_826E7430(param_2);
      fn_826A68D8(&stack_pair_40.first,0xffffffff820071ac);
      iVar5 = iVar6;
    } while (bVar1 != 0);
  }
  return;
}

