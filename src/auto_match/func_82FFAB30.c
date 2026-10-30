extern int fn_82FAB9C0();
extern int fn_82FF86A8();
extern unsigned int *fn_82FF8ED8();
extern int *fn_830080D8();
extern int *fn_83016110();
extern int fn_8302B168();
extern int *fn_8302B2C8();
extern int RtlEnterCriticalSection(void *);
extern int RtlLeaveCriticalSection(void *);
extern char lbl_8326434C[];
extern char *lbl_832642E0;

typedef struct Vt_82FFAB30 { void *s0; void *s1; void (*f8)(void *); } Vt_82FFAB30;
typedef struct Obj_82FFAB30 { Vt_82FFAB30 *vt; } Obj_82FFAB30;

int fn_82FFAB30(char *param_1, int *param_2, char *param_3, unsigned int *param_4, unsigned int param_5, int param_6)
{
  unsigned int uVar1;
  unsigned int *puVar2;
  Obj_82FFAB30 *piVar3;
  int *pp;
  int uVar4;

  uVar4 = 1;
  puVar2 = fn_82FF8ED8(param_1 + 4, param_2[1]);
  if (puVar2 == 0) {
    return 2;
  }
  uVar1 = *puVar2;
  *param_4 = uVar1;
  if ((param_5 & 0xff) != 0) {
    piVar3 = (Obj_82FFAB30 *)fn_82FAB9C0(lbl_832642E0 + 0x350, uVar1, uVar1);
  }
  else {
    piVar3 = (Obj_82FFAB30 *)fn_83016110(lbl_832642E0 + 0x328, param_6);
  }
  if (piVar3 == 0) {
    RtlEnterCriticalSection(lbl_8326434C);
    piVar3 = (Obj_82FFAB30 *)fn_8302B2C8(*param_4, param_5, param_6);
    if (piVar3 == 0) {
      uVar4 = 2;
    }
    else {
      uVar4 = fn_8302B168(piVar3, puVar2, param_2[1]);
      if (uVar4 != 1) {
        piVar3->vt->f8(piVar3);
      }
    }
    RtlLeaveCriticalSection(lbl_8326434C);
    if (uVar4 != 1) goto LAB_82ffac48;
  }
  pp = fn_830080D8(param_3 + 0x34);
  if (pp != 0) {
    *pp = (int)piVar3;
  }
LAB_82ffac48:
  fn_82FF86A8(param_1 + 4);
  return uVar4;
}
