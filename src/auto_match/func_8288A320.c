typedef struct { char pad[0x48]; int arr[0x37]; } S;
void fn_8288A320(S *p, int v)
{
  int i;
  for (i = 0; i < 0x37; i++) {
    p->arr[i] = v;
  }
}
