extern int tolower(int);


typedef struct Ctx { int a; char *end; } Ctx;
int fn_828FA428(Ctx *c, char *start, int *kind)
{
  char *p = start;
  int u = 0, l = 0;
  while (p < c->end) {
    if (u == 0 && tolower(*p) == 0x75) { u = 1; p++; continue; }
    if (l == 0 && tolower(*p) == 0x6c) { l = 1; p++; continue; }
    break;
  }
  if (kind != 0) {
    if (u) *kind = 4; else if (l) *kind = 3;
  }
  return p - start;
}
