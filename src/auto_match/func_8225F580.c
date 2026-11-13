extern unsigned int **ppuRam83265a4c;
extern int fn_82522ED8();
extern int fn_825231B8();
extern int fn_828EA5F8();
extern int fn_828EA600();
extern int iRam83265a2c;
extern int iRam83265a30;
extern int iRam83265a34;
extern unsigned int lbl_831D0738;
extern unsigned int lbl_831D0868;
extern unsigned int lbl_831D0958;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A3C;
extern unsigned int lbl_83265A40;
extern unsigned int lbl_83265A44;
extern unsigned int lbl_83265A48;


void fn_8225F580(int param_1)

{
  char cVar2;
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned int *puVar4;

  if (iRam83265a2c == 0) {
    lbl_83265A3C = &lbl_831D0738;
    lbl_83265A38 = 0x4b;
    iRam83265a2c = 1;
  }
  if (iRam83265a30 == 0) {
    lbl_83265A44 = &lbl_831D0868;
    lbl_83265A40 = 0x3c;
    iRam83265a30 = 1;
  }
  if (iRam83265a34 == 0) {
    ppuRam83265a4c = &lbl_831D0958;
    lbl_83265A48 = 2;
    iRam83265a34 = 1;
  }
  cVar2 = fn_828EA5F8(param_1);
  if ((cVar2 == '\0') || (cVar2 = fn_828EA600(param_1), cVar2 == '\0')) {
    puVar4 = (unsigned int *)(param_1 + 0xec);
    puVar3 = &lbl_83265A38;
    do {
      if (puVar4[1] != 0) {
        fn_82522ED8();
        puVar4[1] = 0;
      }
      uVar1 = fn_825231B8(*puVar3);
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 1;
      *puVar4 = uVar1;
    } while ((int)puVar3 < -0x7cd9a5b0);
  }
  return;
}
