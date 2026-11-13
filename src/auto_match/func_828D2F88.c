typedef struct Obj_828D2F88 { int pad[2]; int h; int f; } Obj_828D2F88;
extern unsigned char fn_828ACCE8(int);
extern unsigned char fn_828AD740(int);
extern void fn_828D2DB8(void *, int);

unsigned char fn_828D2F88(Obj_828D2F88 *self)
{
  unsigned char a = self->f == 0 && fn_828ACCE8(self->h) != 0;
  unsigned char r = a && fn_828AD740(self->h) != 0;
  if (r) {
    fn_828D2DB8(self, 3);
  }
  return r;
}
