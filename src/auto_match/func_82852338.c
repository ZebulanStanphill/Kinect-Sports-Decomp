typedef struct { char pad0[0x40]; float m[16]; } Obj_82852338;
extern void fn_8280AC48(void *src, float *dst);

void fn_82852338(Obj_82852338 **self, void *src)
{
  fn_8280AC48(src, (*self)->m);
}
