extern int fn_8223CA80();

typedef struct { unsigned int v[4]; } Q;

void fn_8223CAD8(int param_1)
{
  unsigned char tmp[16];
  *(Q *)(param_1 + 8) = *(Q *)fn_8223CA80(tmp);
}
