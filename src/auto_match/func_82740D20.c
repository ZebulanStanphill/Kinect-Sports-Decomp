extern unsigned int fn_8267B890(int, int, int);
extern void fn_826824B0(unsigned int);
extern int fn_826957D0(int *, int);
extern void fn_826959C8(unsigned char *);
extern void fn_82696BC8(int, unsigned int);
extern int fn_826AE1D8(int, int);
extern void fn_8273FF78(unsigned int, int);
extern unsigned int fn_827403B0(unsigned int, int, int);

struct Vt_82740D20 { int s0; int s1; int (*f8)(void *); int pad[13]; unsigned char (*f40)(void *); };
struct Sub_82740D20 { struct Vt_82740D20 *vt; };
struct Ctx_82740D20 { char pad[0x78]; struct { char pad[0x288]; int f288; } *f78; };
struct Obj_82740D20 { int pad0; unsigned char *f4; struct Sub_82740D20 *f8; int pad[3]; struct Ctx_82740D20 *f18; int f1c; };

void fn_82740D20(struct Obj_82740D20 *param_1)
{
  int lVar3;
  unsigned int iVar5;
  unsigned char *puVar1;
  unsigned int uVar4;

  if (param_1->f1c >= 1) {
    lVar3 = fn_826AE1D8((int)param_1->f18, fn_826957D0((int *)param_1, 0));
    if (lVar3 == 0) {
      puVar1 = param_1->f4;
      fn_826959C8(puVar1);
      *puVar1 = 0;
    } else {
      if (param_1->f8 == 0 || param_1->f8->vt->f8(param_1->f8) != 0x14 || param_1->f8->vt->f40(param_1->f8) != 0) {
        uVar4 = fn_8267B890(param_1->f18->f78->f288, 0x44, 0);
        if (uVar4 != 0) uVar4 = fn_827403B0(uVar4, (int)param_1->f18, 0); else uVar4 = 0;
        iVar5 = uVar4;
      } else {
        unsigned int q = (unsigned int)param_1->f8;
        iVar5 = q ? q - 0x10 : 0;
        if (iVar5 != 0) {
          *(unsigned int *)(iVar5 + 8) = (*(int *)(iVar5 + 8) + 1U) & 0x8fffffff;
        }
      }
      fn_8273FF78(iVar5, lVar3);
      fn_82696BC8((int)param_1->f4, iVar5);
      if (iVar5 != 0) {
        fn_826824B0(iVar5);
      }
    }
  }
}
