typedef struct { unsigned short Length, MaximumLength; char *Buffer; } ANSI_STRING;
extern void RtlInitAnsiString(ANSI_STRING *s, const char *src);
typedef struct { int code; ANSI_STRING *str; int flags; } Obj;

Obj *fn_82A33950(Obj *o, ANSI_STRING *s, const char *src)
{
  RtlInitAnsiString(s, src);
  o->str = s;
  o->code = -4;
  o->flags = 0x80;
  return o;
}
