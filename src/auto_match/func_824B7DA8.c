extern unsigned int *auStack_30;
extern int fn_8225F160();
extern int fn_823AB478();
extern int fn_8245AE18();
extern int fn_8245AF50();
extern int fn_8245AFC0();
extern int fn_8245B050();
extern int fn_8245B100();
extern int fn_8245B168();
extern int fn_8245B1F0();
extern int fn_824B70F0();
extern int fn_82512508();
extern int fn_828EA5F8();
extern int fn_828EA610();


void fn_824B7DA8(unsigned __int64 param_1,unsigned char param_2,unsigned int param_3)

{
  int iVar1;
  unsigned char cVar3;
  int iVar2;
  unsigned char uVar4;
  unsigned short auStack_30;
  
  iVar1 = fn_8225F160();
  *(unsigned int *)(iVar1 + 0x18) = 3;
  *(unsigned int *)(iVar1 + 0x1c) = 0xb;
  *(unsigned int *)(iVar1 + 0x28) = 4;
  *(unsigned int *)(iVar1 + 0x20) = param_3;
  *(unsigned int *)(iVar1 + 0x24) = 0;
  cVar3 = fn_828EA610(param_1);
  if (cVar3 == '\0') {
    cVar3 = fn_828EA5F8(param_1);
    if ((cVar3 != '\0') && (cVar3 = fn_82512508(param_1), cVar3 != '\0')) {
      iVar1 = fn_8245AE18();
      iVar2 = fn_8245B1F0();
      if (iVar2 != 0) {
        fn_8245AF50(iVar1,0xd);
        if (*(int *)(iVar1 + 0x14) == 0) {
          *(unsigned int *)(iVar1 + 0x14) = 1;
        }
        uVar4 = fn_823AB478(param_1);
        fn_8245B050(iVar1,uVar4,4);
        fn_8245B050(iVar1,param_2,4);
        fn_8245B100(iVar1);
        auStack_30 = (unsigned short)param_3;
        fn_8245B168(iVar1,&auStack_30,2);
        fn_824B70F0();
        fn_8245AFC0(iVar1,0,0);
      }
    }
  }
  return;
}

