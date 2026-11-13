extern unsigned d3dx_crc32(unsigned);

void png_calculate_crc(char *param_1)
{
  int ok = 1;
  if ((*(unsigned char *)(param_1 + 0x60c) & 0x20) != 0) {
    if ((*(unsigned *)(param_1 + 0x55c) & 0x300) == 0x300) {
      ok = 0;
    }
  } else if ((*(unsigned *)(param_1 + 0x55c) & 0x800) != 0) {
    ok = 0;
  }
  if (ok) *(unsigned *)(param_1 + 0x600) = d3dx_crc32(*(unsigned *)(param_1 + 0x600));
}
