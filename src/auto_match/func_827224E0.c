typedef struct { int v; } T;
extern void fn_826A1050(void **p, int a, int b, T *c);
extern char lbl_82006B48[];
extern char lbl_82006B9C[];
extern char lbl_82010A68[];
void **fn_827224E0(void **p, int a, int b, T *c)
{
    T t = *c;
    fn_826A1050(p, a, b, &t);
    p[0] = lbl_82010A68;
    p[3] = lbl_82006B9C;
    p[0x1a] = lbl_82006B48;
    return p;
}
