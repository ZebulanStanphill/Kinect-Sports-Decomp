extern int fn_8267BE38();
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_8200DADC;

typedef struct Vt_826F2588 { void (*dtor)(void *, int); } Vt_826F2588;
typedef struct Obj_826F2588 { Vt_826F2588 *vt; } Obj_826F2588;
typedef struct Ent_826F2588 { int kind; Obj_826F2588 *obj; unsigned char flag; } Ent_826F2588;
typedef struct Arr_826F2588 { unsigned int count; char *ptr; } Arr_826F2588;

void fn_826F2588(void **param_1)
{
  unsigned int uVar1;
  Obj_826F2588 *puVar2;
  Ent_826F2588 *piVar3;
  unsigned int uVar4;
  int iVar5;
  Arr_826F2588 *a = (Arr_826F2588 *)((char *)param_1 + 0x24);
  char *b;

  uVar1 = a->count;
  uVar4 = 0;
  *param_1 = &lbl_8200DADC;
  if (uVar1 != 0) {
    iVar5 = 0;
    do {
      if (uVar4 < 0x10) {
        piVar3 = (Ent_826F2588 *)((char *)a + iVar5 + 0x10);
      }
      else {
        piVar3 = (Ent_826F2588 *)(a->ptr + iVar5 - 0xc0);
      }
      if ((piVar3->kind == 2) && (piVar3->flag != 0)) {
        puVar2 = piVar3->obj;
        if (puVar2 != 0) {
          puVar2->vt->dtor(puVar2, 0);
          b = (char *)param_1 + 0xf4;
          if (((char *)puVar2 < b + 4) || ((char *)puVar2 >= b + 0x204)) {
            fn_8267BE38(puVar2);
          }
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (uVar4 < uVar1);
  }
  fn_8267BE38(param_1[10]);
  *param_1 = &lbl_8200C4D4;
}
