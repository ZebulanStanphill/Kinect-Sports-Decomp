extern unsigned d3dx_crc32(unsigned);

void png_calculate_crc(char *png_ptr)
{
  int need_crc = 1;
  if ((*(unsigned char *)(png_ptr + 0x60c) & 0x20) != 0) {
    if ((*(unsigned *)(png_ptr + 0x55c) & 0x300) == 0x300) {
      need_crc = 0;
    }
  } else if ((*(unsigned *)(png_ptr + 0x55c) & 0x800) != 0) {
    need_crc = 0;
  }
  if (need_crc) *(unsigned *)(png_ptr + 0x600) = d3dx_crc32(*(unsigned *)(png_ptr + 0x600));
}
