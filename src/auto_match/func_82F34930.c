extern void *fn_82E50BE8(unsigned int, int, int, int, int);
struct Obj_82F34930;
typedef struct Vt_82F34930 {
  void *slot0;
  void (*AddRef)(struct Obj_82F34930 *);
} Vt_82F34930;
typedef struct Obj_82F34930 { Vt_82F34930 *vt; } Obj_82F34930;

int fn_82F34930(int param_1, unsigned int param_2, int param_3)
{
  unsigned int piVar1;
  unsigned int lVar2;
  unsigned int iVar3;
  int uVar4;
  unsigned int uVar5;

  uVar4 = 0;
  if (param_2 <= 0x3fffffff) { lVar2 = param_2 << 2; } else { lVar2 = -1; }
  iVar3 = (unsigned int)fn_82E50BE8(lVar2, 0, 0, 0, 0);
  *(unsigned int *)(param_1 + 0xc) = iVar3;
  if (iVar3 == 0) {
    uVar4 = 0x8007000e;
  }
  else {
    if (param_2 != 0) {
      iVar3 = 0;
      uVar5 = param_2;
      do {
        *(int *)(*(int *)(param_1 + 0xc) + iVar3) = *(int *)(iVar3 + param_3);
        piVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + iVar3);
        if (piVar1 != 0) {
          (*(Obj_82F34930 **)(*(int *)(param_1 + 0xc) + iVar3))->vt->AddRef(*(Obj_82F34930 **)(*(int *)(param_1 + 0xc) + iVar3));
        }
        uVar5 = uVar5 - 1;
        iVar3 = iVar3 + 4;
      } while (uVar5 != 0);
    }
    *(int *)(param_1 + 8) = (int)param_2;
  }
  return uVar4;
}
