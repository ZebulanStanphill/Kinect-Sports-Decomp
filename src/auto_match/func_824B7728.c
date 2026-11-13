#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_60;
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


void fn_824B7728(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3,__int64 param_4,unsigned int param_5,
                  unsigned short param_6,unsigned short param_7,unsigned short param_8)

{
  int iVar1;
  char cVar3;
  int iVar2;
  unsigned char uVar4;
  unsigned int uVar5;
  unsigned short auStack_60 [48];
  
  uVar5 = 4;
  if ((int)param_3 < 2) {
    uVar5 = param_2;
  }
  iVar1 = fn_8225F160();
  *(unsigned int *)(iVar1 + 0x18) = 1;
  *(unsigned int *)(iVar1 + 0x1c) = 0;
  *(unsigned int *)(iVar1 + 0x28) = uVar5;
  *(unsigned int *)(iVar1 + 0x20) = param_5;
  *(unsigned int *)(iVar1 + 0x24) = 0;
  cVar3 = fn_828EA610(param_1);
  if (cVar3 == '\0') {
    cVar3 = fn_828EA5F8(param_1);
    if ((cVar3 != '\0') && (cVar3 = fn_82512508(param_1), cVar3 != '\0')) {
      iVar1 = fn_8245AE18();
      iVar2 = fn_8245B1F0();
      if (iVar2 != 0) {
        fn_8245AF50(iVar1,0x10);
        if (*(int *)(iVar1 + 0x14) == 0) {
          *(unsigned int *)(iVar1 + 0x14) = 1;
        }
        uVar4 = fn_823AB478(param_1);
        fn_8245B050(iVar1,uVar4,4);
        fn_8245B050(iVar1,uVar5 & 0xff,4);
        fn_8245B050(iVar1,param_3 & 0xff,4);
        fn_8245B100(iVar1);
        auStack_60[0] = CONCAT11('\x01' - (param_4 == 0),(unsigned char)auStack_60[0]);
        fn_8245B168(iVar1,auStack_60,1);
        auStack_60[0] = (unsigned short)param_5;
        fn_8245B168(iVar1,auStack_60,2);
        auStack_60[0] = param_6;
        fn_8245B168(iVar1,auStack_60,2);
        auStack_60[0] = param_7;
        fn_8245B168(iVar1,auStack_60,2);
        auStack_60[0] = param_8;
        fn_8245B168(iVar1,auStack_60,2);
        fn_824B70F0();
        fn_8245AFC0(iVar1,0,0);
      }
    }
  }
  return;
}

