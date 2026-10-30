extern unsigned int lbl_821878B0[];
void fn_8308A2A8(unsigned int *bits, int i)
{
  bits[i >> 5] &= ~lbl_821878B0[i & 0x1f];
}
