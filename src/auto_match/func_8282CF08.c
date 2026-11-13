typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8282C280();
extern int fn_8282C398();
extern int fn_8282C5F8();


unsigned __int64 fn_8282CF08(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  unsigned char bVar5;
  unsigned __int64 uVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  unsigned char abStack_30 [16];
  
  bVar1 = *(unsigned char *)(param_1 + 0x134);
  bVar5 = bVar1 >> 5 & 1;
  if (((bVar5 == 0) || ((bVar1 & 0x10) == 0)) || (bVar7 = true, (bVar1 & 8) == 0)) {
    bVar7 = false;
  }
  if (((bVar5 != 0) || ((bVar1 & 0x10) != 0)) || (bVar4 = true, (bVar1 & 8) != 0)) {
    bVar4 = false;
  }
  if (!bVar7) {
    if ((*(char *)(param_1 + 0x52) == '\0') ||
       (bVar7 = true, *(unsigned int *)(param_1 + 0x58) <= *(unsigned int *)(param_1 + 0x68))) {
      bVar7 = false;
    }
    bVar2 = param_2 != 3;
    bVar3 = param_2 == 4;
    if (((bVar7) || (bVar5 != 0)) ||
       ((((!bVar3 && (bVar2)) || ((bVar1 & 0x10) == 0)) && (param_2 != 1)))) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x01';
    }
    if (((bVar7) || ((bVar1 & 0x10) != 0)) ||
       ((((!bVar3 && (bVar2)) || (bVar5 == 0)) && (param_2 != 2)))) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x01';
    }
    if (((!bVar2) || ((bVar3 && (bVar4)))) || (((param_2 == 1 || (param_2 == 2)) && (bVar7)))) {
      cVar10 = '\x01';
    }
    else {
      cVar10 = '\0';
    }
    abStack_30[0] = (cVar10 << 1 | bVar3) << 4 | cVar9 << 6 | cVar8 << 7;
    if (abStack_30[0] != 0) {
      fn_8282C280(param_1,abStack_30);
      uVar6 = fn_8282C398(param_1,abStack_30,param_3);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      fn_8282C5F8(param_1,abStack_30);
    }
  }
  return 0;
}

