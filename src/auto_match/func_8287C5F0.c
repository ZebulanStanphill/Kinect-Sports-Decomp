typedef char *va_list;

extern void __cdecl __va_start(va_list *, ...);

typedef struct Obj_8287C5F0 Obj_8287C5F0;
typedef void (*Fmt_8287C5F0)(Obj_8287C5F0 *self, const char *fmt, va_list ap);
struct Obj_8287C5F0 { Fmt_8287C5F0 *vt; };

void fn_8287C5F0(Obj_8287C5F0 *self, const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  self->vt[17](self, fmt, ap);
}
