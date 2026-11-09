typedef struct Element_826664D8 { char data[12]; } Element_826664D8;
typedef struct Vector_826664D8 { Element_826664D8 *a,*b,*c; } Vector_826664D8;
int fn_826664D8(Vector_826664D8 *p) { return p->b-p->a; }
