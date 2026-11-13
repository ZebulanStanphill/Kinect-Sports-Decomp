extern int *fn_828B0DB8(void);
extern void *fn_828B0ED0(int a, int b, int c);
extern int fn_828C8058(int a, int b);
extern unsigned char fn_828D8FD8(int a, int b);
extern int fn_82A4AAA8(void);

void fn_828D9438(int param_1)
{
  int *obj;
  int iVar2;

  obj = fn_828B0DB8();
  if (obj != 0 && *(unsigned char *)((int)obj + 0x26) == 0) {
    iVar2 = (*(int (**)())(*obj + 0xc))(obj);
    if (fn_82A4AAA8() == 1 &&
        fn_828B0ED0(*(int *)(iVar2 + 0x4c) + 0x38, 2, 0) != 0 &&
        fn_828D8FD8(param_1, 1) == 0) {
      fn_828C8058(*(int *)(param_1 + 0x14), 0xb);
    }
  }
}
