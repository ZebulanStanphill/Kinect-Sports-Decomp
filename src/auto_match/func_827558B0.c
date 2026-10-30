typedef struct { int a; int b; } E;
typedef struct { E *data; unsigned int n; } V;

int fn_827558B0(V *v)
{
    int sum = 0;
    unsigned int i;
    for (i = 0; i < v->n; i++) {
        sum += v->data[i].b;
    }
    return sum;
}
