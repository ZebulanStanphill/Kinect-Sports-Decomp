#define true 1
extern unsigned int *auStack_90;
extern unsigned int *auStack_e0;
extern int fn_8305D7C8();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305F258();
extern int fn_8305F2E8();
extern int fn_8305F320();
extern int fn_83066810();
extern int fn_83068418();


void fn_83068750(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  int (**param_5)(),int (**param_6)(),unsigned __int64 param_7)

{
  int iVar2;
  char cVar3;
  unsigned __int64 uVar1;
  int iVar4;
  unsigned char auStack_e0 [80];
  unsigned char auStack_90 [144];
  
  do {
    while( true ) {
      iVar4 = param_2;
      cVar3 = fn_83068418(iVar4);
      if (cVar3 != '\0') goto LAB_830687e4;
      iVar2 = fn_83066810(param_1,iVar4 + 0x10,param_3);
      if (iVar2 == 2) break;
      if (iVar2 != 1) {
        if (iVar2 != 3) {
          return;
        }
        fn_8305F2E8(auStack_e0);
        fn_8305F2E8(auStack_90);
        uVar1 = fn_8305D7C8(param_3);
        fn_8305E0F8(auStack_e0,uVar1);
        uVar1 = fn_8305D7C8(param_3);
        fn_8305E0F8(auStack_90,uVar1);
        fn_8305EC98(auStack_e0,param_3);
        fn_8305EC98(auStack_90,param_3);
        fn_8305F320(param_1,param_3,iVar4 + 0x10,auStack_e0,auStack_90);
        if (*(int *)(iVar4 + 0x34) == 0) {
          if (param_6 != (int (**)())0x0) {
            (*param_6)(iVar4,auStack_e0,param_7);
          }
        }
        else {
          ((int (*)())fn_83068750)(param_1,*(int *)(iVar4 + 0x34),auStack_e0);
        }
        ((int (*)())fn_83068750)(param_1,*(unsigned int *)(iVar4 + 0x30),auStack_90);
        fn_8305F258(auStack_90);
        fn_8305F258(auStack_e0);
        return;
      }
      param_2 = *(int *)(iVar4 + 0x30);
    }
    param_2 = *(int *)(iVar4 + 0x34);
  } while (*(int *)(iVar4 + 0x34) != 0);
  param_5 = param_6;
  if (param_6 != (int (**)())0x0) {
LAB_830687e4:
    (*param_5)(iVar4,param_3,param_7);
  }
  return;
}

