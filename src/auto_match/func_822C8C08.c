extern int fn_822315A0();
extern int fn_822C8A18();
extern int fn_823F2E20();


void fn_822C8C08(__int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  struct { unsigned int a; unsigned int b; } s;
  
  uVar1 = fn_822C8A18(&s,param_1,param_2);
  fn_823F2E20(param_1 + 0x28,uVar1);
  if (s.b != 0) {
    fn_822315A0(s.b);
  }
  return;
}

