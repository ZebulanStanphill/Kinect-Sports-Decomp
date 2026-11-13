typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82773958();
extern int fn_8278FD18();
extern int fn_827912D8();
extern int fn_82F68CC0();


void fn_82791420(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  bool bVar2;
  __int64 lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  
  lVar3 = fn_827912D8();
  fn_82773958(param_2,lVar3 + 1);
  iVar6 = 0;
  uVar7 = 0;
  iVar5 = 0;
  while( true ) {
    if ((((int *)(param_1 + 0xc) == (int *)0x0) || (iVar6 < 0)) ||
       (bVar2 = false, *(int *)(param_1 + 0x10) <= iVar6)) {
      bVar2 = true;
    }
    if (bVar2) break;
    puVar1 = *(unsigned int **)(*(int *)(param_1 + 0xc) + iVar5);
    iVar8 = puVar1[1];
    if (iVar8 != 0) {
      cVar4 = fn_8278FD18(puVar1,*puVar1);
      if (cVar4 != '\0') {
        iVar8 = iVar8 + -1;
      }
    }
    fn_82F68CC0(((unsigned __int64)uVar7 & 0x7fffffff) * 2 + (unsigned __int64)*param_2);
    uVar7 = iVar8 + uVar7;
    if (iVar6 < *(int *)(param_1 + 0x10)) {
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
  }
  *(unsigned short *)(uVar7 * 2 + *param_2) = 0;
  return;
}

