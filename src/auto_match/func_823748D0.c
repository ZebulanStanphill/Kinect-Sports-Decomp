typedef struct SP_823748D0 { void *p; void *rc; } SP_823748D0;
extern unsigned int *fn_82522588(SP_823748D0 *, unsigned int);
extern SP_823748D0 *fn_82365BD8(SP_823748D0 *, SP_823748D0 *);
extern void fn_8228E658(unsigned int, SP_823748D0 *);
extern void fn_822315A0(void *);

void fn_823748D0(int param_1, SP_823748D0 *param_2)
{
  unsigned int uVar4;
  SP_823748D0 a;
  SP_823748D0 b;

  for (uVar4 = *(unsigned int *)(param_1 + 0x30);
       uVar4 != *(unsigned int *)(param_1 + 0x34); uVar4 += 8) {
    unsigned int *puVar2 = fn_82522588(&a, uVar4);
    unsigned int uVar1 = *puVar2;
    SP_823748D0 *iVar3 = fn_82365BD8(&b, param_2);
    fn_8228E658(uVar1 + 0x24c, iVar3);
    if (iVar3->rc != 0) {
      fn_822315A0(iVar3->rc);
    }
    if (a.rc != 0) {
      fn_822315A0(a.rc);
    }
  }
  if (param_2->rc != 0) {
    fn_822315A0(param_2->rc);
  }
}
