typedef struct Rc_82481178 { int p68; unsigned p6c; } Rc_82481178;
extern void fn_822315A0(unsigned);
extern void fn_82246748(int, int);
extern void fn_8229E090(int, int, int);
extern void fn_824C04E0(unsigned, int);

void fn_82481178(int mode, int obj)
{
  if (mode != 2) {
    unsigned o;
    fn_8229E090(*(int *)(obj + 0xbc), 0, 0);
    *(int *)(obj + 0xbc) = 0;
    if (mode == 0) {
      if (*(int *)(obj + 0xa8) == 3) {
        *(int *)(*(int *)(obj + 0x48) + 0x30) = 0;
        *(int *)(obj + 0x74) = 1;
        *(int *)(obj + 0x4c) = 1;
      }
      o = *(unsigned *)(obj + 0xa4);
      if (o != 0) {
        Rc_82481178 *r = (Rc_82481178 *)(o + 0x68);
        unsigned rc = r->p6c;
        r->p6c = 0;
        r->p68 = 0;
        if (rc != 0)
          fn_822315A0(rc);
        if (*(int *)(o + 0x48) != 0)
          fn_82246748(*(int *)(o + 0x48), 0);
        fn_824C04E0(o, 1);
      }
    }
  } else {
    *(int *)(obj + 0xbc) = 0;
  }
}
