#define true 1
extern float fRam832115dc;
extern int fn_828114A8();
extern int fn_82859DF0();
extern int fn_82859EF0();
extern int fn_82859FD8();
extern int fn_8285F548();
extern int fn_82F68CC0();
extern int iRam832115d0;
extern int iRam832115e0;
extern int iRam8321161c;
extern int iRam83211624;
extern int iRam8321162c;
extern unsigned int uRam831574a8;
extern unsigned int uRam831575a8;
extern unsigned int uRam832115d4;
extern unsigned int uRam832115d8;
extern unsigned int uRam8321160c;
extern unsigned int uRam83211614;
extern unsigned int uRam83211620;


void fn_8285F670(unsigned int param_1)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  int iVar7;
  __int64 lVar8;
  
  uVar6 = 0;
  iVar3 = iRam83211624;
  uRam831574a8 = param_1;
  iVar7 = iRam8321162c;
  iVar4 = uRam83211620;
  do {
    uVar1 = uVar6 & 0xffffffff;
    uVar6 = uVar6 - 1;
    puVar5 = *(unsigned int **)((int)(uVar1 << 2) + -0x7cea8b58);
    uRam831575a8 = (unsigned int)uVar6;
    if (puVar5 != (unsigned int *)0x0) {
      iRam83211624 = iVar3 + 1;
      uRam83211620 = iVar7 + iVar4;
      fn_82F68CC0();
      if (iRam8321161c == 0) {
LAB_8285f750:
        iVar3 = iRam832115d0;
        if ((*puVar5 & 0x40000000) == 0) {
          puVar5 = puVar5 + 7;
          lVar8 = 8;
          do {
            if (*(unsigned short *)puVar5 != 0) {
              uRam831575a8 = uRam831575a8 + 1;
              *(unsigned int *)(uRam831575a8 * 4 + -0x7cea8b58) = (unsigned int)*(unsigned short *)puVar5 * 0x2c + iVar3;
            }
            puVar5 = (unsigned int *)((int)puVar5 + 2);
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        else if ((*puVar5 & 0x40000000) == 0x40000000) {
          iVar3 = 0;
          if (*(short *)(puVar5 + 8) != 0) {
            iVar7 = 0;
            do {
              fn_828114A8(uRam8321160c,*(unsigned int *)(puVar5[7] + iVar7));
              iVar3 = iVar3 + 1;
              iVar7 = iVar7 + 4;
            } while (iVar3 < (int)(unsigned int)*(unsigned short *)(puVar5 + 8));
          }
        }
      }
      else {
        puVar2 = (unsigned int *)fn_82859DF0(puVar5,uRam832115d4);
        if (iRam832115e0 == 0) {
          fn_82859EF0((double)fRam832115dc,puVar5,uRam832115d8);
        }
        else if (iRam832115e0 == 1) {
          fn_82859FD8((double)fRam832115dc,puVar5,uRam832115d8);
        }
        iVar3 = fn_8285F548((unsigned __int64)uRam83211620 + 1,
                              (unsigned __int64)uRam83211614 + (unsigned __int64)uRam83211620 + 1,
                              (unsigned __int64)*puVar2 + 1);
        if (iVar3 == 0) goto LAB_8285f750;
      }
      iVar3 = iRam83211624 + -1;
      uVar6 = (unsigned __int64)uRam831575a8;
      uRam83211620 = uRam83211620 - iRam8321162c;
      iRam83211624 = iVar3;
      iVar4 = uRam83211620;
      iVar7 = iRam8321162c;
    }
    if ((__int64)(uVar6 + 1) < 1) {
      return;
    }
  } while( true );
}

