extern void fn_82CF68D8(void *, int, int);


typedef struct { int pad[2]; void (*f8)(void *, int, int); } AVT_82CE6E98;
typedef struct { AVT_82CE6E98 *vt; } Alloc_82CE6E98;
typedef struct { int pad[13]; void (*f34)(void *); } SVT_82CE6E98;
typedef struct { SVT_82CE6E98 *vt; char pad[0x120 - 4]; int f120; char f124; char pad2[3]; unsigned f128; } Slot_82CE6E98;
typedef struct { int a; int b; int c; int d; int e; int f; int g; int h; int idx; } Rec_82CE6E98;
typedef struct { char pad[0x1c]; Alloc_82CE6E98 al; } Mgr_82CE6E98;

void fn_82CE6E98(char *param_1, Rec_82CE6E98 *param_2, int param_3)
{
  Slot_82CE6E98 *s = (Slot_82CE6E98 *)(param_1 + param_2->idx * 0x130 + 0xadc);
  if ((param_3 & 2) != 0) {
    if (s->f128 != 0) {
      if (param_2->c - param_2->b != 0) {
        ((Mgr_82CE6E98 *)param_1)->al.vt->f8(&((Mgr_82CE6E98 *)param_1)->al, param_2->b, param_2->c - param_2->b);
        param_2->b = 0;
        param_2->a = 0;
        param_2->c = 0;
      }
    }
    s->vt->f34(s);
    param_2->d = 0;
    param_2->g = 0;
  }
  if ((param_3 & 1) != 0) {
    s->vt->f34(s);
    s->f120 = 0;
    s->f124 = 0;
    fn_82CF68D8(param_2, 0, 0x24);
  }
}
