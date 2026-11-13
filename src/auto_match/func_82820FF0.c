static void sw(unsigned int *p) { unsigned int v = *p; *p = (v >> 24) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | (v << 24); }
void fn_82820FF0(unsigned int *d)
{
  sw(d);
  sw(d + 1);
  sw(d + 2);
}
