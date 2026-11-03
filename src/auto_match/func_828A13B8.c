extern unsigned char fn_82898298(unsigned);
extern unsigned fn_82898258(unsigned);
void fn_828A13B8(char *p, unsigned s)
{
  unsigned char ok;
  unsigned char c = fn_82898298(s);
  if (c != 0 || *(unsigned *)(p + 0x2c4) == s) ok = 1; else ok = 0;
  if (ok) { unsigned v = fn_82898258(s); if (*(unsigned *)(p + 0x2c4) == s) *(unsigned *)(p + 0x2c4) = v; }
}
