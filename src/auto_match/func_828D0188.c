typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_8223B6E0();
extern int fn_828CFCD8();
extern int fn_828E9D28();
extern int fn_82CE07C8();
extern int memcpy();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828D0188(int param_1)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  unsigned char bVar5;
  unsigned int uVar6;
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 < 2) {
    return;
  }
  if (3 < iVar2) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x84);
  bVar1 = *(unsigned char *)(iVar3 + 8);
  bVar5 = bVar1 >> 1 & 1;
  if ((bVar5 == 0) || (bVar4 = true, iVar2 != 2)) {
    bVar4 = false;
  }
  uVar6 = 3;
  if (bVar4) {
    *(unsigned int *)(param_1 + 0x7c) = 3;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x7c) = 4;
  if (bVar5 == 0) {
LAB_828d02d8:
    uVar6 = 2;
  }
  else if ((bVar1 & 4) == 0) {
    bVar4 = false;
    if (((bVar1 & 8) != 0) && (*(unsigned short *)(iVar3 + 0xe) != 0)) {
      uStack_40 = *(unsigned int *)(iVar3 + 0x10);
      uStack_3c = (unsigned int)*(unsigned short *)(iVar3 + 0xe);
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      fn_828E9D28(auStack_50);
      fn_828CFCD8(param_1 + 0x58,auStack_50);
      bVar4 = true;
      fn_8223B6E0(auStack_50);
    }
    if ((bVar4) || (*(char *)(param_1 + 8) != '\0')) {
      *(unsigned int *)(param_1 + 0x80) = 1;
      memcpy(param_1 + 0x98,(unsigned __int64)*(unsigned int *)(param_1 + 0x84) + 8,0x18);
      *(unsigned int *)(param_1 + 0xa0) = 0;
      *(unsigned short *)(param_1 + 0x9e) = 0;
      if ((*(unsigned short *)(param_1 + 0xa6) < 0x14) &&
         (((*(short *)(param_1 + 0x9a) == 9 || (*(short *)(param_1 + 0x9a) == 10)) &&
          (*(short *)(param_1 + 0x9c) == 8)))) {
        *(unsigned short *)(param_1 + 0x9a) = 8;
      }
      goto code_r0x828d02e0;
    }
    goto LAB_828d02d8;
  }
  *(unsigned int *)(param_1 + 0x80) = uVar6;
code_r0x828d02e0:
  if (*(int *)(param_1 + 0x84) != 0) {
    fn_82CE07C8();
    *(unsigned int *)(param_1 + 0x84) = 0;
  }
  return;
}

