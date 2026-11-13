typedef struct S_82E8D418 {
  char pad0[0x7814];
  int f7814;
  int f7818;
  int f781c;
  int f7820;
  int f7824;
  int f7828;
  int f782c;
  char pad7830[0x10];
  int f7840;
  int f7844;
  int f7848;
  int f784c;
} S_82E8D418;

void fn_82E8D418(S_82E8D418 *s)
{
  int v;
  int t[3];

  if (s->f7848 == s->f7840 && s->f784c == s->f7844) {
    s->f7814 = 0;
  } else {
    s->f7814 = 1;
    s->f7818 = 1;
  }
  s->f7848 = s->f7840;
  s->f7828 = s->f7820;
  s->f782c = s->f7824;
  s->f784c = s->f7844;
}
