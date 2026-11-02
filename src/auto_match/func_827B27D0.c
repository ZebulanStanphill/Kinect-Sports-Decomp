extern char lbl_82015F4C[];

typedef struct { int a, b; int z[23]; } In;
typedef struct { void *vt; int rc; In in; } O;
void fn_827B27D0(O *p, int x) {
 In *q = &p->in;
p->rc = 1;
p->vt = lbl_82015F4C;
q->a = x;
p->in.b = x;
q->z[0] = 0;q->z[1] = 0;
q->z[2] = 0;q->z[3] = 0;q->z[4] = 0;q->z[5] = 0;q->z[6] = 0;q->z[7] = 0;q->z[8] = 0;q->z[9] = 0;q->z[10] = 0;q->z[11] = 0;q->z[12] = 0;q->z[13] = 0;q->z[14] = 0;q->z[15] = 0;q->z[16] = 0;q->z[17] = 0;q->z[18] = 0;q->z[19] = 0;q->z[20] = 0;q->z[21] = 0;q->z[22] = 0;
}