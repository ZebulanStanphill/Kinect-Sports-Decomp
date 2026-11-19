void png_warning(int png_ptr)

{
  if (*(int (***)())(png_ptr + 0x544) == (int (**)())0x0) {
    return;
  }
  (*(int (**)())(png_ptr + 0x544))();
  return;
}

