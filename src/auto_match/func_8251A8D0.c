typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82517A50();
extern int fn_828ACC40();
extern int fn_828AE130();
extern int fn_828B62F0();
extern int fn_828B6300();
extern int fn_828B6318();
extern int fn_828B6380();
extern int fn_828B6458();
extern int fn_828B6720();
extern int fn_828B6758();
extern int fn_828B7DC0();
extern int fn_828B8F50();
extern int fn_828C3D70();
extern int fn_828C40D8();
extern int fn_828C4360();
extern int fn_828EA820();
extern unsigned int lbl_83265988;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_8251A8D0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  char cVar7;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned char auStack_50 [4];
  unsigned int uStack_4c;
  unsigned __int64 uStack_48;
  
  if ((*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x50)) && (*(char *)(param_1 + 0x5c) != '\0'))
  {
    fn_828C40D8(*(unsigned int *)(*(int *)(param_1 + 4) + 8));
    iVar1 = *(int *)(param_1 + 0x48);
    *(unsigned int *)(param_1 + 0x48) = 0;
    *(unsigned int *)(param_1 + 0x44) = 0;
    if (iVar1 == 0) {
      return;
    }
    fn_822315A0();
    return;
  }
  cVar7 = fn_828ACC40(*(unsigned int *)(*(int *)(param_1 + 4) + 8));
  iVar1 = lbl_83265988;
  if (cVar7 == '\0') {
    return;
  }
  if (lbl_83265988 == 0) {
    if (*(int *)(param_1 + 0x50) == 2) {
      return;
    }
    *(unsigned int *)(param_1 + 0xc) = 1;
    *(unsigned int *)(param_1 + 0x54) = 2;
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) goto LAB_8251aa28;
  fn_828C3D70(auStack_50,*(unsigned int *)(*(int *)(param_1 + 4) + 8));
  cVar7 = fn_828B62F0(auStack_50);
  if (cVar7 == '\0') {
LAB_8251a9cc:
    bVar4 = false;
  }
  else {
    fn_828C4360(auStack_50);
    cVar7 = fn_828B6458();
    if (cVar7 == '\0') goto LAB_8251a9cc;
    fn_828C4360(auStack_50);
    iVar6 = fn_828B6720();
    bVar4 = true;
    if (iVar6 == 0) goto LAB_8251a9cc;
  }
  if (!bVar4) {
    *(unsigned int *)(param_1 + 0x54) = 4;
    fn_828B6380(auStack_50);
    return;
  }
  fn_828B6300();
  fn_828B6318(auStack_50);
  uVar5 = fn_828C4360(auStack_50);
  fn_828B6758(&uStack_4c,uVar5);
  fn_82517A50(param_1 + 0x44,uStack_4c);
  uVar5 = fn_828C4360(auStack_50);
  fn_828B7DC0(&uStack_48,uVar5,&uStack_4c);
  fn_828B6380(auStack_50);
LAB_8251aa28:
  uStack_48 = *(unsigned __int64 *)(*(int *)(param_1 + 4) + 0x10);
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
  fn_828B8F50(*(unsigned int *)(param_1 + 0x44));
  uVar3 = *(unsigned int *)(param_1 + 0x4c);
  uVar5 = fn_828EA820(iVar1);
  fn_828AE130(uVar2,param_1 + 0x44,uVar5,1,(unsigned __int64)uVar3 + 1,0,(((unsigned __int64)(uStack_48) >> 0) & 0xFF),
                  (((unsigned __int64)(uStack_48) >> 8) & 0xFF));
  return;
}

