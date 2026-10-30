typedef unsigned int uint;
static void sw(uint *p) { uint v = *p; *p = (v >> 24) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | (v << 24); }
void fn_82820FF0(uint *d)
{
  sw(d);
  sw(d + 1);
  sw(d + 2);
}
