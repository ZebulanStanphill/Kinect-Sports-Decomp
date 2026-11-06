extern void fn_82681898(int, double);
extern int fn_82693A98(int **);
extern int fn_82693B78(int, int, int, int);
extern void fn_826944C8(int *);
extern unsigned char fn_82695468(int, int);
extern void fn_826954C0(int, char *, int, int);
extern unsigned char fn_82695608(int, int);
extern int fn_826957D0(int, int);
extern void fn_826959C8(unsigned char *);
extern void fn_82696D38(int ***, int, int, int, int);
extern char lbl_82005EA4[];

typedef struct Node_82710378 {
  int first;
  int pad4;
  int refs;
} Node_82710378;

void fn_82710378(int param_1)
{
  unsigned char *puVar1;
  int uVar2;
  int uVar4;
  unsigned char cVar6;
  int iVar5;
  unsigned int lVar7;
  int bVar8;
  Node_82710378 *apuStack_40[2];

  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  lVar7 = 0;
  *puVar1 = 0;
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x2a4) == 1) {
    cVar6 = fn_82695468(param_1, 8);
    if (cVar6 == 0) {
      fn_826954C0(param_1, lbl_82005EA4, 0, 0);
    }
    else {
      if (*(unsigned int *)(param_1 + 8) != 0) {
        lVar7 = *(unsigned int *)(param_1 + 8) - 0x10;
      }
      if (*(int *)(param_1 + 0x1c) >= 1) {
        uVar2 = *(int *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1, 0);
        fn_82696D38((int ***)apuStack_40, uVar4, uVar2, -1, 0);
        bVar8 = 1;
        if (*(int *)(param_1 + 0x1c) >= 2) {
          uVar2 = *(int *)(param_1 + 0x18);
          cVar6 = fn_82695608(fn_826957D0(param_1, 1), uVar2);
          bVar8 = cVar6 == 0;
        }
        uVar2 = apuStack_40[0]->first;
        iVar5 = fn_82693B78(lVar7 + 0x30, uVar2, fn_82693A98((int **)apuStack_40), bVar8);
        fn_82681898(*(int *)(param_1 + 4), (double)iVar5);
        {
          Node_82710378 *n = apuStack_40[0];
          int v = n->refs - 1;
          n->refs = v;
          if (v == 0) {
            fn_826944C8((int *)n);
          }
        }
      }
    }
  }
}
