typedef struct Ref_8272A710 { unsigned first; int pad; int count; } Ref_8272A710;
typedef struct Obj_8272A710 { int (**vt)(); char pad[0xd0 - 4]; unsigned *d0; } Obj_8272A710;
extern void fn_8267BE38(unsigned);
extern unsigned fn_8267BF50(void *);
extern void fn_826944C8(Ref_8272A710 *);
extern int fn_826957D0(void *, int);
extern void fn_82696D38(Ref_8272A710 **, int, int, int, int);
extern void fn_82726458(unsigned, int);
extern void fn_82728090(void *, void *);
extern void fn_8279A0A0(int, unsigned, int, int, void *);

void fn_8272A710(int param_1)
{
  int iVar5;
  unsigned iVar6;
  unsigned char bVar3;
  char *piVar6;
  Ref_8272A710 *ref;
  Ref_8272A710 *r;
  struct { unsigned first; unsigned second; unsigned c; unsigned d; } P;
  char *sub;

  if (*(char **)(param_1 + 8) != 0) {
    iVar5 = (*(int (**)(char *))(**(int **)(param_1 + 8) + 8))(*(char **)(param_1 + 8));
    if (iVar5 == 4) {
      sub = *(char **)(param_1 + 8);
      piVar6 = sub != 0 ? sub - 0x68 : 0;
      if (*(int **)(piVar6 + 0xd0) == 0 || **(int **)(piVar6 + 0xd0) == 0) {
        bVar3 = 0;
      } else {
        bVar3 = 1;
      }
      if (bVar3 == 0 && *(int *)(param_1 + 0x1c) >= 1) {
        int a = *(int *)(param_1 + 0x18);
        int t = fn_826957D0((void *)param_1, 0);
        fn_82696D38(&ref, t, a, -1, 0);
        P.d = fn_8267BF50(piVar6);
        P.first = 0;
        P.second = 0;
        P.c = 0;
        fn_8279A0A0(*(int *)(piVar6 + 0xa0), ref->first, -1, 0, &P);
        if (P.second != 0) {
          fn_82728090(piVar6, &P);
        }
        iVar6 = (*(unsigned (**)(char *))(*(int *)piVar6 + 0x40))(piVar6);
        if (iVar6 != 0) {
          *(unsigned *)(iVar6 + 0xb00) = *(unsigned *)(iVar6 + 0xb00) | 0x400;
        }
        fn_82726458(P.first, P.second);
        fn_8267BE38(P.first);
        r = ref;
        if (--r->count == 0) {
          fn_826944C8(r);
        }
      }
    }
  }
}
