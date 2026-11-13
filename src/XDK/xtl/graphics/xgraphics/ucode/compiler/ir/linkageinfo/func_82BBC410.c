extern int fn_82AB15D0();



typedef struct { int a; } Z;
unsigned char fn_82BBC410(char *p, int idx)
{
  char *e;
  int r;
  if (p[0x750] == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","has_required_assignments","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\LinkageInfo.hpp",0x6b);
  }
  if (*(int *)(p + (idx + 8) * 16) != 0 || (e = p + idx * 16, *(int *)(e + 0x84) != 0) || *(int *)(e + 0x88) != 0 || *(int *)(e + 0x8c) != 0)
    r = 1;
  else
    r = 0;
  return r;
}
