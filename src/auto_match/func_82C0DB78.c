extern int fn_82A1E438();
extern unsigned int fn_82C0BD48();
extern int fn_82C0BDA8();
extern int fn_82C0BEA8();

typedef struct Obj_82C0DB78 { void **vt; } Obj_82C0DB78;
typedef struct { void **vt; char pad[0x28]; Obj_82C0DB78 *o2c; char pad2[0xc4]; unsigned int f3d; int pad3[3]; int f41; int f42; } Main_82C0DB78;

#define VC(o, off, T) ((T)(*(void ***)(o))[(off) / 4])

void fn_82C0DB78(Main_82C0DB78 *param_1)

{
  int uVar1;
  unsigned int uVar3;
  Obj_82C0DB78 *piVar4;
  Obj_82C0DB78 *piStack_40;
  Obj_82C0DB78 *piStack_3c;
  int iVar5;
  unsigned int aiStack_38;
  int lVar2;
  void **vt40;

  uVar1 = VC(param_1, 0x100, int (*)(Main_82C0DB78 *))(param_1);
  while ((uVar1 & 4) == 0) {
    VC(param_1->o2c, 0x3c, void (*)(Obj_82C0DB78 *, Obj_82C0DB78 **, int, int))(param_1->o2c, &piStack_40, 0, 0);
    if (piStack_40 != 0) {
      VC(param_1->o2c, 0x44, void (*)(Obj_82C0DB78 *, Obj_82C0DB78 **, int, int))(param_1->o2c, &piStack_3c, 0, 0);
      uVar1 = VC(param_1, 0x100, int (*)(Main_82C0DB78 *))(param_1);
      while ((uVar1 & 6) == 0) {
        VC(piStack_40, 0xc, void (*)(Obj_82C0DB78 *))(piStack_40);
        uVar3 = fn_82C0BD48(piStack_3c);
        if (uVar3 > param_1->f3d && param_1->f41 == 0) {
          piVar4 = (Obj_82C0DB78 *)fn_82C0BDA8(piStack_3c);
          VC(piVar4, 0x38, void (*)(Obj_82C0DB78 *, int))(piVar4, 1);
          VC(piStack_40, 0x48, void (*)(Obj_82C0DB78 *, Obj_82C0DB78 *))(piStack_40, piVar4);
          vt40 = *(void ***)piStack_40;
          iVar5 = ((int (*)(Obj_82C0DB78 *, int, int *))vt40[0x78 / 4])(piStack_40, VC(piVar4, 0x54, int (*)(Obj_82C0DB78 *))(piVar4) - 8, (int *)&aiStack_38);
          if (iVar5 < 0) {
            VC(piVar4, 8, void (*)(Obj_82C0DB78 *))(piVar4);
            VC(piStack_40, 0x14, void (*)(Obj_82C0DB78 *))(piStack_40);
            VC(param_1, 0x60, void (*)(Main_82C0DB78 *))(param_1);
            break;
          }
          VC(piVar4, 8, void (*)(Obj_82C0DB78 *))(piVar4);
          fn_82C0BEA8(piStack_3c);
          VC(piStack_40, 0x14, void (*)(Obj_82C0DB78 *))(piStack_40);
          VC(param_1, 0xcc, void (*)(Main_82C0DB78 *))(param_1);
          if (aiStack_38 == 0) break;
        }
        else {
          VC(piStack_40, 0x14, void (*)(Obj_82C0DB78 *))(piStack_40);
          VC(param_1, 0xa4, void (*)(Main_82C0DB78 *))(param_1);
        }
        uVar1 = VC(param_1, 0x100, int (*)(Main_82C0DB78 *))(param_1);
      }
      VC(piStack_40, 0x50, void (*)(Obj_82C0DB78 *))(piStack_40);
      if (piStack_40 != 0) {
        VC(piStack_40, 8, void (*)(Obj_82C0DB78 *))(piStack_40);
        piStack_40 = 0;
      }
      if (piStack_3c != 0) {
        VC(piStack_3c, 8, void (*)(Obj_82C0DB78 *))(piStack_3c);
        piStack_3c = 0;
      }
    }
    uVar1 = VC(param_1, 0x100, int (*)(Main_82C0DB78 *))(param_1);
    if ((uVar1 & 4) != 0) break;
    VC(param_1, 0xd4, void (*)(Main_82C0DB78 *))(param_1);
    fn_82A1E438(param_1->f42);
    uVar1 = VC(param_1, 0x100, int (*)(Main_82C0DB78 *))(param_1);
  }
  VC(param_1, 0xd4, void (*)(Main_82C0DB78 *))(param_1);
}
