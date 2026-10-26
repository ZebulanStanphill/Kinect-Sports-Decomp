typedef struct {
  unsigned short Length;
  unsigned short MaximumLength;
  char *Buffer;
} ANSI_STRING;

extern void RtlInitAnsiString(ANSI_STRING *s, const char *src);
extern void fn_82A33C40(ANSI_STRING *s);

void fn_82A1F2B8(const char *param_1)
{
  ANSI_STRING s;
  s.Length = 0;
  s.MaximumLength = 0;
  s.Buffer = 0;
  RtlInitAnsiString(&s, param_1);
  fn_82A33C40(&s);
}
