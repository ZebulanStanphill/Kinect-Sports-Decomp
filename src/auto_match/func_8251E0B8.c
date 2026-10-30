extern int fn_8251E198();
extern int fn_825298E8();
extern int fn_82558B08();
extern int fn_825597C0();
extern int fn_825E8220();

typedef struct Fn_8251E0B8 { char pad[8]; void (*call)(void *); } Fn_8251E0B8;
typedef struct Node_8251E0B8 { int pad; struct Node_8251E0B8 *next; } Node_8251E0B8;
typedef struct Obj_8251E0B8 { char pad[0xb4c]; int state; } Obj_8251E0B8;

void fn_8251E0B8(int *param_1, int param_2)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int bVar4;
  int iVar5;
  Node_8251E0B8 *n;
  Node_8251E0B8 *nx;
  Obj_8251E0B8 *o;
  Fn_8251E0B8 f;

  n = *(Node_8251E0B8 **)(param_1 + 0x3a);
  bVar4 = 0;
  if (n != 0) {
    iVar1 = *param_1;
    iVar5 = fn_825597C0();
    do {
      o = (Obj_8251E0B8 *)((char *)n - 0x38);
      n = n->next;
      if (o->state == 0) {
        fn_8251E198(param_1, o);
      }
      if ((o->state == 1) || (param_2 != 0)) {
        if (!bVar4) {
          bVar4 = 1;
          if (*(int *)(iVar1 + 0x8ac) != 0) {
            piVar3 = *(int **)(*(int *)(iVar1 + 0x8ac) + 0xbab8);
            fn_825E8220(&f, piVar3 + 6);
            do {
            } while (*(volatile int *)piVar3 != 0);
            f.call(&f);
          }
        }
        fn_825298E8(o);
      }
      else {
        o->state = o->state + 1;
      }
      if (iVar5 != 0) {
        fn_82558B08();
      }
    } while (n != 0);
  }
}
