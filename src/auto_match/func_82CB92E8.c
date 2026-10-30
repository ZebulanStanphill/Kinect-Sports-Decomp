void fn_82CB92E8(int *p1, int *p2, int *p3, int *p4, int *p5, int *p6, int s1, int s2)
{
  int i;
  for (i = 0; i < 8; i++) {
    p1[0] = p4[0]; p1[1] = p4[1]; p1[2] = p4[2]; p1[3] = p4[3];
    p4 = (int *)((char *)p4 + s1);
    p1 = (int *)((char *)p1 + s1);
    p1[0] = p4[0]; p1[1] = p4[1]; p1[2] = p4[2]; p1[3] = p4[3];
    p4 = (int *)((char *)p4 + s1);
    p1 = (int *)((char *)p1 + s1);
    p2[0] = p5[0]; p2[1] = p5[1];
    p5 = (int *)((char *)p5 + s2);
    p2 = (int *)((char *)p2 + s2);
    p3[0] = p6[0]; p3[1] = p6[1];
    p6 = (int *)((char *)p6 + s2);
    p3 = (int *)((char *)p3 + s2);
  }
}
