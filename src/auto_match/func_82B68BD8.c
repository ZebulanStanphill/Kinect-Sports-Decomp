void fn_82B68BD8(int *p1, int *p2, int *p3, int *p4)
{
  int d;
  int h;

  d = *p1 - *p4;
  *p4 = d;
  *p1 = *p1 - (d >> 1);
  d = *p2 - *p3;
  *p3 = d;
  *p2 = *p2 - (d >> 1);
  d = *p4 - (*p3 + 1 >> 1);
  *p4 = d;
  d = *p3 - (d * 3 + 2 >> 2);
  *p3 = d;
  *p4 = (d + 1 >> 1) + *p4;
  d = *p3 >> 1;
  h = d >> 1;
  *p3 = d;
  d = h + *p2;
  *p2 = d;
  *p3 = d - *p3;
  d = (*p4 >> 1) + *p1;
  *p1 = d;
  *p4 = d - *p4;
}
