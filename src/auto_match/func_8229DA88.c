typedef struct { int first; int second; } Pair_8229DA88;
typedef struct { int pad0; int a; int b; } Src_8229DA88;

extern void fn_82517978(Pair_8229DA88 *out, int a, int b, int c);
extern void fn_8266F2D0(void *self, Pair_8229DA88 *pair, int b, float f, int d);

void fn_8229DA88(Src_8229DA88 *src, void *self, int b, float f)
{
    Pair_8229DA88 pair;
    pair.first = 0;
    pair.second = 0;
    fn_82517978(&pair, src->a, src->b, 0);
    fn_8266F2D0(self, &pair, b, f, 0);
}
