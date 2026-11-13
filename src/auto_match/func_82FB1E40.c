extern int fn_82FA5060();
extern int fn_82FB1DC0();
extern int fn_82FFF750();
extern unsigned int lbl_831BC768;


extern char lbl_8326434C[];
int * fn_82FB1E40(unsigned __int64 param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  
  RtlEnterCriticalSection(lbl_8326434C);
  uVar1 = fn_82FA5060(lbl_831BC768,0xd4);
  if ((uVar1 & 0xffffffff) != 0) {
    piVar2 = (int *)fn_82FB1DC0(uVar1,param_1);
    if ((piVar2 == (int *)0x0) || (iVar3 = fn_82FFF750(), iVar3 == 1)) goto LAB_82fb1eb8;
    (*(int (**)())(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)0x0;
LAB_82fb1eb8:
  RtlLeaveCriticalSection(lbl_8326434C);
  return piVar2;
}

