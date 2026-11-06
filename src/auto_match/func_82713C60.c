typedef struct { int w[6]; } Buf;
typedef int (*VF)(Buf *, void *);
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82695608();
extern int fn_826959C8();
extern int fn_82696330();

void fn_82713C60(int param_1)
{
  unsigned char cVar4;
  int uVar1;
  unsigned char uVar5;
  unsigned char *puVar2;
  int *piVar6;
  Buf auStack_30;
  int r;

  cVar4 = fn_82695468(param_1, 10);
  if (cVar4 == 0) {
    fn_826954C0(param_1, "Boolean", 0, 0);
  }
  else {
    piVar6 = *(unsigned int *)(param_1 + 8) != 0 ? (int *)(*(unsigned int *)(param_1 + 8) - 0x10) : 0;
    uVar1 = *(int *)(param_1 + 0x18);
    r = (*(VF *)(*piVar6 + 0x10))(&auStack_30, piVar6);
    uVar5 = fn_82695608(r, uVar1);
    puVar2 = *(unsigned char **)(param_1 + 4);
    fn_826959C8(puVar2);
    puVar2[4] = uVar5;
    *puVar2 = 2;
    fn_82696330(&auStack_30);
  }
}
