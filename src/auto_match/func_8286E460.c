typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern int fn_828647C0();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_82865170();
extern int fn_82866418();


unsigned __int64 fn_8286E460(int *param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  char cVar5;
  int iVar4;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned char auStack_70 [112];
  
  uVar6 = *param_2;
  uVar1 = param_2[1];
  bVar2 = false;
  uVar3 = fn_82864988(auStack_70,0xffffffff82021750);
  for (uVar7 = (unsigned __int64)uVar6; (uVar7 & 0xffffffff) != (unsigned __int64)uVar1; uVar7 = uVar7 + 0x24) {
    cVar5 = fn_828647C0(uVar7,uVar3);
    if (cVar5 != '\0') break;
  }
  fn_82864898(auStack_70);
  uVar6 = param_2[1];
  if (((uVar7 & 0xffffffff) == (unsigned __int64)uVar6) || ((uVar7 & 0xffffffff) == (unsigned __int64)*param_2)) {
    for (uVar7 = (unsigned __int64)*param_2; (uVar7 & 0xffffffff) != (unsigned __int64)uVar6; uVar7 = uVar7 + 0x24
        ) {
      iVar4 = (**(int (***)())(*param_1 + 0xc))(param_1,uVar7,param_3);
      if (iVar4 < 0) {
        fn_82865170();
        fn_82866418();
        bVar2 = true;
      }
      uVar6 = param_2[1];
    }
    uVar3 = 0xffffffffa0100000;
    if (!bVar2) {
      uVar3 = 0x20100000;
    }
  }
  else {
    uVar3 = 0xffffffffa0100000;
  }
  return uVar3;
}

