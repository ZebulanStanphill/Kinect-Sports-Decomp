extern int fn_82FA5190();
extern int fn_8301A7B8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;
extern char lbl_8326434C[];

int fn_82FEAF18(int param_1, unsigned int *param_2)
{
  int *puVar4;
  int refs;

  RtlEnterCriticalSection(lbl_8326434C);
  puVar4 = (int *)fn_8301A7B8(lbl_832642EC, param_1);
  if (puVar4 == (int *)0) {
    RtlLeaveCriticalSection(lbl_8326434C);
    return 0xf;
  }
  *param_2 = (unsigned int)*(unsigned char *)((int)puVar4 + 0x12);
  refs = puVar4[0x17] - 1;
  puVar4[0x17] = refs;
  if (refs <= 0) {
    unsigned int g = lbl_831BC768;
    (*(int (**)())*puVar4)(puVar4, 0);
    fn_82FA5190(g, puVar4);
  }
  RtlLeaveCriticalSection(lbl_8326434C);
  return 1;
}
