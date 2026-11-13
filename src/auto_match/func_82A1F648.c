extern unsigned int *__imp_XboxHardwareInfo;
typedef struct { unsigned short len; unsigned short max; char *buf; } Str;
extern int RtlCompareStringN(const char *, unsigned, const char *, unsigned, int);

int fn_82A1F648(Str *s)
{
  if (s->len >= 2 && RtlCompareStringN(s->buf, 2, "d:", 2, 1) == 0) return 1;
  if (s->len >= 5 && RtlCompareStringN(s->buf, 5, "game:", 5, 1) == 0) return 1;
  if ((*__imp_XboxHardwareInfo & 0x10) != 0 && s->len >= 7 &&
      RtlCompareStringN(s->buf, 7, "cdrom0:", 7, 1) == 0) return 1;
  return 0;
}
