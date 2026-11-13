extern unsigned int *auStack_50;
typedef struct S8225 { int pad[6]; int f18; int f1c; int f20; int f24; int f28; } S8225;
extern S8225 *fn_8225F160();
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


void fn_824B78B0(unsigned __int64 param_1,unsigned char param_2,unsigned int param_3,unsigned short param_4,
                  unsigned short param_5,unsigned short param_6)

{
  int iVar1;
  S8225 *s;
  unsigned char cVar3;
  int iVar2;
  unsigned char uVar4;
  unsigned short auStack_50;
  
  s = fn_8225F160();
  s->f18 = 1;
  s->f1c = 3;
  s->f28 = 4;
  s->f20 = param_3;
  s->f24 = 0;
  cVar3 = fn_828EA610(param_1);
  if (cVar3 == '\0') {
    cVar3 = fn_828EA5F8(param_1);
    if ((cVar3 != '\0') && (cVar3 = fn_82512508(param_1), cVar3 != '\0')) {
      iVar1 = fn_8245AE18();
      iVar2 = fn_8245B1F0();
      if (iVar2 != 0) {
        fn_8245AF50(iVar1,0x11);
        if (*(int *)(iVar1 + 0x14) == 0) {
          *(unsigned int *)(iVar1 + 0x14) = 1;
        }
        uVar4 = fn_823AB478(param_1);
        fn_8245B050(iVar1,uVar4,4);
        fn_8245B050(iVar1,param_2,4);
        fn_8245B100(iVar1);
        auStack_50 = (unsigned short)param_3;
        fn_8245B168(iVar1,&auStack_50,2);
        auStack_50 = param_4;
        fn_8245B168(iVar1,&auStack_50,2);
        auStack_50 = param_5;
        fn_8245B168(iVar1,&auStack_50,2);
        auStack_50 = param_6;
        fn_8245B168(iVar1,&auStack_50,2);
        fn_824B70F0();
        fn_8245AFC0(iVar1,0,0);
      }
    }
  }
  return;
}

