extern unsigned int *auStack_80;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200F0();
extern int fn_825A23C0();
extern int fn_825A2410();
extern int fn_825BA3D8();
extern int fn_827D6968();
extern int fn_82A1DD38();
extern unsigned int lbl_831C119C;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8329618C;
extern unsigned int stack0x0000001c;


unsigned int * fn_825B9FB0(unsigned __int64 param_1,unsigned int *param_2,short param_3)

{
  short sVar1;
  char cVar5;
  int *piVar2;
  unsigned int uVar3;
  unsigned short *puVar4;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int *piVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int *puStack0000001c;
  unsigned char auStack_80 [128];
  
  puStack0000001c = param_2;
  fn_825200F0(auStack_80,param_1);
  cVar5 = fn_827D6968(lbl_83265A24,auStack_80,0xffffffffffffffff);
  if ((cVar5 != '\0') && (piVar2 = (int *)fn_8251F720(param_1,0), piVar2 != (int *)0x0)) {
    sVar1 = *(short *)(piVar2 + 1);
    piVar9 = piVar2;
    while (sVar1 != 0) {
      fn_825BA3D8(&stack0x0000001c,*(unsigned short *)(piVar9 + 1),
                        *(short *)((int)piVar9 + 6) + param_3);
      param_2 = puStack0000001c;
      uVar3 = 0;
      puVar10 = puStack0000001c + 2;
      if (*puStack0000001c != 0) {
        do {
          if (*(short *)((int)puVar10 + 6) == (short)(*(short *)((int)piVar9 + 6) + param_3))
          goto code_r0x825ba084;
          uVar3 = uVar3 + 1;
          puVar10 = (unsigned int *)((int)puVar10 + *puVar10);
        } while (uVar3 < *puStack0000001c);
      }
      puVar10 = (unsigned int *)0x0;
code_r0x825ba084:
      fn_82A1DD38(puVar10,piVar9,*piVar9);
      *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + param_3;
      if (*(short *)(puVar10 + 2) != 0) {
        *(short *)(puVar10 + 2) = *(short *)(puVar10 + 2) + param_3;
      }
      piVar9 = (int *)(*piVar9 + (int)piVar9);
      sVar1 = *(short *)(piVar9 + 1);
    }
    fn_8251FA58(piVar2);
  }
  uVar3 = *param_2;
  uVar6 = 0;
  puVar10 = param_2 + 2;
  if (uVar3 != 0) {
    do {
      if (*(short *)(puVar10 + 1) == 2) {
        uVar3 = fn_825A23C0(2,2);
        puVar10[0xd] = uVar3;
        puVar10[0xf] = 0;
        puVar10[0xe] = 0;
        uVar7 = 0;
        uVar3 = *param_2;
        puVar11 = param_2 + 2;
        if (uVar3 != 0) {
          do {
            if (*(short *)((int)puVar11 + 10) == *(short *)((int)puVar10 + 6)) {
              if (lbl_8329618C == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(unsigned int *)(lbl_8329618C + 4);
              }
              puVar4 = (unsigned short *)fn_825A2410(puVar10 + 0xd);
              *puVar4 = *(unsigned short *)((int)puVar11 + 6);
              if (*(int (***)())(&lbl_831C119C + (unsigned int)*(unsigned short *)(puVar11 + 1) * 0x10) == (int (**)())0x0)
              {
                cVar5 = '\0';
              }
              else {
                cVar5 = (**(int (***)())(&lbl_831C119C + (unsigned int)*(unsigned short *)(puVar11 + 1) * 0x10))
                                  (puVar11,uVar8);
              }
              if (cVar5 != '\0') {
                puVar10[0xe] = 1;
              }
            }
            uVar7 = uVar7 + 1;
            uVar3 = *param_2;
            puVar11 = (unsigned int *)(*puVar11 + (int)puVar11);
          } while (uVar7 < uVar3);
        }
      }
      uVar6 = uVar6 + 1;
      puVar10 = (unsigned int *)(*puVar10 + (int)puVar10);
    } while (uVar6 < uVar3);
  }
  return param_2;
}

