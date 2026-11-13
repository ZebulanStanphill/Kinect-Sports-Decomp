typedef struct { unsigned high:30, bit1:1, bit0:1; } Flags_82BA0750;

#define true 1
extern int fn_82AB15D0();
extern void *fn_82BAF540();
extern int fn_82BC0A80();
extern int fn_82BC24B0();
extern int fn_82BC2EF0(int,int);
static __forceinline int call_82BA0750(int *p, int ctx) { int a=p[0x14]; return fn_82BC2EF0(a,*(int *)(ctx+0xc)); }
extern int fn_82BC3428();


void fn_82BA0750(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  void *lVar3;
  unsigned char cVar5;
  int iVar6;
  int *piVar7;
  
  const char *s2="e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\cfg.cpp";
  const char *s1="vreg_ntuple";
  const char *s0="Assertion failed: %s (%s:%u)";
  iVar1 = *(int *)(param_1 + 0x88);
  iVar4 = *(int *)(iVar1 + 8);
  do {
    if (iVar4 == 0) {
      return;
    }
    for (piVar2 = *(int **)(iVar1 + 0x1c); piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      if ((piVar2[0x39] & 1U) != 0) {
        iVar6 = 1;
        iVar4 = (*(int (**)())(*piVar2 + 4))(piVar2);
        if (1 <= iVar4) {
          piVar7 = piVar2 + 0x15;
          do {
            iVar4 = *piVar7;
            if ((((iVar4 == 0x23) || (iVar4 == 0x24)) || (iVar4 == 0x25)) || (iVar4 == 0x26)) {
              lVar3 = fn_82BAF540(*(unsigned int *)(param_1 + 0xac),0x1f,1);
              if (lVar3 == 0) {
                fn_82AB15D0(0,s0,s1,s2,0x132);
              }
              fn_82BC3428(piVar2,lVar3);
              break;
            }
            iVar6 = iVar6 + 1;
            piVar7 = piVar7 + 1;
            iVar4 = (*(int (**)())(*piVar2 + 4))(piVar2);
          } while (iVar6 <= iVar4);
        }
        if ((((unsigned char)((Flags_82BA0750 *)(piVar2+0x39))->bit1 != 0) &&
            (iVar4 = call_82BA0750(piVar2,param_1), iVar4 == 8)) &&
           (lVar3 = fn_82BAF540(*(unsigned int *)(param_1 + 0xac),0x1f,2), lVar3 != 0)) {
          fn_82BC3428(piVar2,lVar3);
        }
        if (((piVar2[4] != 0) && (cVar5 = fn_82BC24B0(piVar2), cVar5 != '\0')) &&
           (piVar2[0x14] != 0x2a)) {
          iVar4 = piVar2[7];
          fn_82BC3428(piVar2,iVar4);
          fn_82BC0A80(iVar4,piVar2[5],piVar2);
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 8);
    iVar4 = *(int *)(iVar1 + 8);
  } while( true );
}

