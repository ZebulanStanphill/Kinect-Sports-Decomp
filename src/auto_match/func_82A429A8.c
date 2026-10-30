typedef struct { void **vt; } Obj_82A429A8;
typedef int (*Fn_82A429A8)(void *, void *, void *);
extern void fn_82A49DF8(void *, int, int, int, unsigned int, int, int, unsigned int, short);

int fn_82A429A8(Obj_82A429A8 **pp, unsigned short a, unsigned int b, unsigned int c)
{
  int out;
  char buf[48];
  fn_82A49DF8(buf, 0x28, 3, a, c, 0, 0, b, 0x80);
  out = 0x7fffffff;
  ((Fn_82A429A8)(*pp)->vt[8])(*pp, buf, &out);
  return out;
}
