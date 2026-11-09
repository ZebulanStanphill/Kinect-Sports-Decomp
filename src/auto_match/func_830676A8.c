typedef char *va_list;

extern void __cdecl __va_start(va_list *, ...);

typedef struct Obj_830676A8 Obj_830676A8;
typedef void (*Fmt_830676A8)(Obj_830676A8 *self, const char *fmt, va_list ap);
struct Obj_830676A8 { Fmt_830676A8 *vt; };

void fn_830676A8(Obj_830676A8 *self, const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  self->vt[1](self, fmt, ap);
}
