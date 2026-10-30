typedef void (*Fn144_82C83930)(void *, unsigned int *, int *, int);
typedef void (*Fn148_82C83930)(void *, int, int, unsigned int);
extern Fn144_82C83930 lbl_8329F144;
extern Fn148_82C83930 lbl_8329F148;

void fn_82C83930(char *p1, char *p2, char *p3, int n4, int n5, int n6, int n7)
{
    int a[6];
    unsigned int v[6];
    int idx, i, m, n2;
    char *q;
    lbl_8329F144(p1, &v[0], &a[0], n5);
    lbl_8329F144(p1 + 8, &v[1], &a[1], n5);
    q = p1 + n5 * 8;
    lbl_8329F144(q, &v[2], &a[2], n5);
    lbl_8329F144(q + 8, &v[3], &a[3], n5);
    lbl_8329F144(p2, &v[4], &a[4], n6);
    lbl_8329F144(p3, &v[5], &a[5], n7);
    idx = a[0] <= a[1];
    if (a[idx] <= a[2])
        idx = 2;
    if (a[idx] <= a[3])
        idx = 3;
    m = a[idx];
    for (i = 0; i < 4; i++) {
        if (a[i] < 0x20 && m >= 0x40)
            v[i] = v[idx];
        if (m < 0x10)
            v[i] = 0;
    }
    n2 = n4 << 1;
    lbl_8329F148(p1, n5, n2, v[0]);
    lbl_8329F148(p1 + 8, n5, n2, v[1]);
    lbl_8329F148(q, n5, n2, v[2]);
    lbl_8329F148(q + 8, n5, n2, v[3]);
    lbl_8329F148(p2, n6, n2, v[4]);
    lbl_8329F148(p3, n7, n2, v[5]);
}
