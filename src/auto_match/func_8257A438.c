extern unsigned strlen(const char *);
extern int fn_82F66368(char *, unsigned, const char *, unsigned);
extern int fn_82F668D8(char *, unsigned, const char *, unsigned);

void fn_8257A438(char *path, char *out)
{
  int i = 0;
  unsigned char found = 0;
  unsigned len;
  out[0] = 0;
  len = strlen(path);
  while (len > 2) {
    if (path[i] == ':') {
      found = 1;
      break;
    }
    i++;
    len = strlen(path) - i;
  }
  if (!found) {
    fn_82F66368(out, 0x104, "Game:", 0x103);
    len = strlen(path);
    if (len != 0 && out[len - 1] != '\\') {
      fn_82F668D8(out, 0x104, "\\", 1);
    }
  }
  fn_82F668D8(out, 0x104, path, strlen(path));
}
