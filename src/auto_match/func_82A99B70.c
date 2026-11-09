typedef char *va_list;

extern void __cdecl __va_start(va_list *, ...);

typedef struct Obj_82A99B70 Obj_82A99B70;
typedef void (*Fmt_82A99B70)(Obj_82A99B70 *self, const char *fmt, va_list ap);
struct Obj_82A99B70 { Fmt_82A99B70 *vt; };

void fn_82A99B70(Obj_82A99B70 *self, const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  self->vt[0](self, fmt, ap);
}
