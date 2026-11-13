extern int fn_82281868(int a, int b, int c);
extern int fn_822819E0(int a, int b);
extern int fn_8229E090(int a, int b, int c);
extern int fn_82480A60(int a);

void fn_82481540(int param_1, int param_2)
{
  int obj;
  int sub;

  if (param_1 != 2) {
    fn_8229E090(*(int *)(param_2 + 0xb4), 0, 1);
    *(int *)(param_2 + 0xb4) = 0;
    if (param_1 == 0) {
      fn_82480A60(param_2);
    }
    else {
      obj = *(int *)(param_2 + 0x14);
      sub = obj + 100;
      if (*(unsigned int *)(obj + 0x10) != 0) {
        fn_82281868(obj, sub, 0);
      }
      else if (*(int *)(obj + 8) != 0) {
        fn_822819E0(obj, sub);
      }
      *(int *)(param_2 + 0x100) = 1;
    }
  }
  else {
    *(int *)(param_2 + 0xb4) = 0;
  }
}
