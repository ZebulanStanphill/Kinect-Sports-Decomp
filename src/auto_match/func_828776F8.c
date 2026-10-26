extern float lbl_8201FBC8;
extern void fn_82864988(void *s, const char *str);

typedef struct { unsigned char a; char pad[3]; char name[0x24]; float f; } Self;

Self *fn_828776F8(Self *s)
{
  s->a = 0;
  fn_82864988(s->name, "INVALID");
  s->f = lbl_8201FBC8;
  return s;
}
