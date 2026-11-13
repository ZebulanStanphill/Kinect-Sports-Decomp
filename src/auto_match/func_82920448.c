extern unsigned fn_8265C940(unsigned, unsigned);
extern int fn_8265C990(unsigned, unsigned);
extern int fn_82A1F2B8(const char *);
extern int lbl_8321457C;

void fn_82920448(void)
{
  int bVar1;
  unsigned uVar2;
  unsigned uVar3;

  if (lbl_8321457C == 0) {
    lbl_8321457C = 1;
    bVar1 = 0;
    uVar2 = fn_8265C940(0, 0x24810000);
    uVar3 = fn_8265C940(0, 0x24810000);
    if (uVar2 == 0 || uVar3 == 0 || uVar2 == uVar3) {
      bVar1 = 1;
    }
    if (uVar2 != 0) {
      fn_8265C990(uVar2, 0x24810000);
    }
    if (uVar3 != 0 && uVar3 != uVar2) {
      fn_8265C990(uVar3, 0x24810000);
    }
    fn_8265C990(0, 0x24810000);
    if (bVar1) {
      fn_82A1F2B8("D3DX: (WARN) Overloaded ::new and ::delete operators do not conform to C++ standards:\r\n");
      fn_82A1F2B8("D3DX: (WARN) An allocation of zero bytes should return a unique non-null pointer to at\r\n");
      fn_82A1F2B8("D3DX: (WARN) least zero bytes. Deletion of a null pointer should quietly do nothing.\r\n");
      fn_82A1F2B8("D3DX: (WARN) D3DX relies upon this behavior.\r\n");
    }
  }
}
