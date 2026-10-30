extern int fn_822315A0();
extern int fn_82233640();
extern unsigned char fn_8223AAC0();
extern int fn_8223B930();
extern int fn_8265C9E0();
extern unsigned int lbl_8219803C;
extern unsigned int lbl_821AD588;

typedef struct Ptr { void *ptr; int *rep; } Ptr;

Ptr *fn_82252CC0(Ptr *param_1)
{
  int *rep;
  int *obj;
  int *mem;

  mem = (int *)fn_8265C9E0(0x280);
  if (mem != 0) {
    mem[1] = 1;
    mem[0] = (int)&lbl_821AD588;
    mem[2] = 1;
    obj = mem + 3;
    if (obj != 0) {
      fn_82233640(obj);
      *obj = (int)&lbl_8219803C;
      fn_8223B930(obj + 0x83);
    }
    rep = mem;
  }
  else {
    rep = 0;
  }
  obj = rep + 3;
  param_1->ptr = 0;
  param_1->rep = 0;
  if (rep != 0) {
    if (fn_8223AAC0(rep) != 0) {
      if (param_1->rep != 0) {
        fn_822315A0(param_1->rep);
      }
      param_1->rep = rep;
      param_1->ptr = obj;
    }
    fn_822315A0(rep);
  }
  return param_1;
}
