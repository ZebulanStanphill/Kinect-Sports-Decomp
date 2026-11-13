typedef unsigned char bool;
extern unsigned char fn_827747B0(int,int,int);
extern int fn_82776E60();

extern unsigned int lbl_831568D0[];


int fn_82776F00(unsigned param_2,unsigned param_3,int *param_4,float param_1)

{
  unsigned iVar1;
  unsigned char cVar3;
  int uVar2;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  bool bVar9;
  float dVar10;
  
  fn_82776E60(param_2,*(unsigned int *)(*param_4 + 0xc));
  if ((((param_3 == 0) || (*(unsigned *)(param_3 + 0xc) != param_2)) ||
      (iVar1 = *(int *)(param_3 + 8), iVar1 == 0)) || (*(char *)(iVar1 + 0x25) != '\0')) {
LAB_8277705c:
    uVar2 = 0;
  }
  else {
    bVar9 = param_1 != 0.0f;
    uVar7 = 0;
    if (*(unsigned *)(iVar1 + 0x14) > 0) {
      iVar8 = 0;
      dVar10 = 0.5f;
      do {
        iVar4 = *(int *)(iVar1 + 0x10) + iVar8;
        if (((bVar9) && (*(unsigned *)(iVar4 + 0xc) != 0)) && (*(unsigned char *)(iVar4 + 6) != 0)) {
          uVar5 = (unsigned int)((float)*(unsigned short *)(iVar4 + 0x10) * param_1 + dVar10);
          uVar5 = ((uVar5 + 3) >> 2) + uVar5;
          if (uVar5 <= 0xff) {
            uVar6 = lbl_831568D0[1+*(unsigned char *)((int)uVar5 + param_2 + 0x7e0)];
          }
          else {
            uVar6 = 0xff;
          }
          if (uVar6 != *(unsigned char *)(iVar4 + 6)) goto LAB_8277705c;
        }
        if ((*(unsigned *)(iVar4 + 0xc) != 0) &&
           (cVar3 = fn_827747B0(param_2 + 0x40,iVar4, *(int *)(iVar4 + 0xc)), cVar3 == '\0')) goto LAB_8277705c;
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 0x1c;
      } while (uVar7 < *(unsigned int *)(iVar1 + 0x14));
    }
    uVar2 = 1;
  }
  return uVar2;
}

