typedef struct Node_82ACAFD8 {
  char pad[8];
  unsigned pad18 : 18;
  unsigned kind : 7;
  unsigned low : 7;
} Node_82ACAFD8;
extern unsigned char fn_82AC6740(Node_82ACAFD8 *);

int fn_82ACAFD8(Node_82ACAFD8 *n)
{
  unsigned k;
  unsigned char ok;
  if (fn_82AC6740(n) != 0) {
    k = n->kind;
    if (k < 0x53 || k > 0x5f)
      ok = 0;
    else
      ok = 1;
    if (!ok)
      return 1;
  }
  k = n->kind;
  switch (k) {
  case 0x67: case 0x68:
  case 0x6c: case 0x6d: case 0x6e: case 0x6f:
  case 0x76: case 0x77:
  case 0x79: case 0x7a:
  case 0x7e:
    return 1;
  default:
    return 0;
  }
}
