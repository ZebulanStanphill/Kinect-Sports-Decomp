typedef struct { float v[4]; } Vec4_82DA2348;
typedef struct { Vec4_82DA2348 col[3]; } Rotation_82DA2348;

typedef struct Pair_82DA2348 {
    char pad[0x20];
    Rotation_82DA2348 a;
    Rotation_82DA2348 b;
} Pair_82DA2348;

extern void fn_82CE6010(Rotation_82DA2348 *self, const Vec4_82DA2348 *q);

void fn_82DA2348(Pair_82DA2348 *self, const Vec4_82DA2348 *qa, const Vec4_82DA2348 *qb)
{
    fn_82CE6010(&self->a, qa);
    fn_82CE6010(&self->b, qb);
}
