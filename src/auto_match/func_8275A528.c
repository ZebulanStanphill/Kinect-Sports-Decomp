extern void fn_82759640(void *, int);
extern unsigned int lbl_820145C8;
typedef struct { void *vtbl; int ref; unsigned char b8; unsigned char b9; unsigned short h10; int i12; float f16; } Obj;
Obj *fn_8275A528(Obj *o, int b9, int arg, unsigned char b8)
{
  o->b9 = (unsigned char)b9; o->i12 = 0; o->vtbl = &lbl_820145C8; o->ref = 1; o->h10 = 0;
  fn_82759640(o, arg);
  o->b8 = b8;
  o->f16 = 0.0f;
  return o;
}
