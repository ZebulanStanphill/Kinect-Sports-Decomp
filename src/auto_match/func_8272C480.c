typedef int (*Fn_8272C480)();
extern int fn_8267C4F0(void *);

void fn_8272C480(int param_1)
{
  int *obj;
  int *sub;
  unsigned int *r;

  obj = (int *)(param_1 - 0xd8);
  obj = (int *)(*(Fn_8272C480 *)(*obj + 0x40))(obj);
  sub = obj + 2;
  r = (unsigned int *)(*(Fn_8272C480 *)(*sub + 0xc))(sub, 3);
  if (r == 0 || r[3] == 0) {
    *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_1 + 8) & 0xfe;
  } else {
    *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_1 + 8) | 1;
  }
  if (r != 0) {
    fn_8267C4F0(r);
  }
}
