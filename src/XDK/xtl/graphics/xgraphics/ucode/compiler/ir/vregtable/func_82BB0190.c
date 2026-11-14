typedef struct Pair_82BAFF00 {
    int a;
    int b;
} Pair_82BAFF00;

extern Pair_82BAFF00 lbl_820E35F8;
extern int fn_82BAF628(int *self, int count, Pair_82BAFF00 a, Pair_82BAFF00 b, Pair_82BAFF00 c, Pair_82BAFF00 d);

int fn_82BB0190(int *self, Pair_82BAFF00 a, Pair_82BAFF00 b, Pair_82BAFF00 c)
{
    return fn_82BAF628(self, 3, a, b, c, lbl_820E35F8);
}
