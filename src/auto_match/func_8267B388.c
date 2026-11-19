void fn_8267B388(unsigned int *self)

{
  if (self[1] != 0) {
    *(unsigned char *)(self[1] + 0x210) = 0;
    (*(int (**)())(*self + 0x30))(self,0);
    self[1] = 0;
  }
  return;
}

