typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);

typedef struct Obj_826E3ED8 Obj_826E3ED8;
struct Obj_826E3ED8 {
  void (**vtable)(Obj_826E3ED8 *, int, const char *, va_list);
};

void fn_826E3ED8(Obj_826E3ED8 *self, int level, const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  self->vtable[1](self, level, fmt, ap);
}
