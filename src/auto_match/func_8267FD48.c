unsigned int fn_8267FD48(int k, unsigned int v)
{
  switch (k) {
  case 8:
  case 9:
  case 100:
    return v;
  case 2:
    return (v + 1) * 3 & 0xfffffffc;
  case 1:
    return v * 4;
  }
  return 0;
}
