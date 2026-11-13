typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8223C478();
extern int fn_828E9DB8();


void fn_828D2958(unsigned __int64 param_1,int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned char uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  unsigned int uVar5;
  
  bVar3 = true;
  uVar5 = 0;
  if (param_3 != 0) {
    do {
      bVar2 = *(char *)(uVar5 + param_2) != '\0';
      if (bVar3) {
        fn_8223C478(param_1,1,param_4);
        cVar4 = fn_828E9DB8(param_1,!bVar2,1);
        bVar3 = true;
        if (cVar4 == '\0') goto LAB_828d29d4;
      }
      else {
LAB_828d29d4:
        bVar3 = false;
      }
      if (bVar2) {
        if (bVar3) {
          uVar1 = *(unsigned char *)(uVar5 + param_2);
          fn_8223C478(param_1,8,param_4);
          cVar4 = fn_828E9DB8(param_1,uVar1,8);
          bVar3 = true;
          if (cVar4 != '\0') goto LAB_828d2a30;
        }
        bVar3 = false;
      }
LAB_828d2a30:
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_3);
  }
  return;
}

