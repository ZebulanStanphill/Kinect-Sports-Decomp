extern int fn_822ABA88();
extern int fn_8236A928();
extern int fn_8236BA88();
extern int fn_823D2898();

typedef struct Vec_822B0820 { int *data; int pad[3]; int idx; } Vec_822B0820;
typedef struct Obj_822B0820 { int pad[3]; Vec_822B0820 *v; struct { char pad[0x990]; unsigned int tgt; } *w; } Obj_822B0820;

void fn_822B0820(Obj_822B0820 *param_1)
{
  unsigned int uVar1;
  unsigned int iVar2;
  unsigned char bVar3;
  int iVar5;
  unsigned int uVar7;
  unsigned int kind;

  bVar3 = 0;
  uVar7 = 0;
  uVar1 = *(unsigned int *)(param_1->v->data[param_1->v->idx] + 8);
  if (uVar1 != 0) {
    do {
      iVar5 = fn_822ABA88(param_1->v->data[param_1->v->idx], uVar7);
      iVar2 = *(int *)(*(int *)(iVar5 + 0x110) + 0x1c);
      if (iVar2 == 0x1a) {
        kind = 1;
      } else if (iVar2 == 0x21) {
        kind = 7;
      } else {
        goto next;
      }
      fn_8236A928(param_1->w, iVar5, kind);
      bVar3 = 1;
      {
        unsigned int o = param_1->w->tgt;
        if (o + 4 != 0) {
          fn_823D2898(o, iVar5, o + 4);
        }
      }
next:
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  if (!bVar3) {
    fn_8236BA88(param_1->v);
  }
}
