typedef struct Tmp_82554860 {
    int w[4];
} Tmp_82554860;

extern float lbl_821CA45C[];
extern void fn_8255F880(Tmp_82554860 *t, int src);
extern int fn_8255F8D0(Tmp_82554860 *t, float a, float b, int c);
extern void fn_825548C0(void *self, int a, int v, int d);

void fn_82554860(void *self, int a, int src, int d)
{
    Tmp_82554860 t;
    int v;
    fn_8255F880(&t, src);
    v = fn_8255F8D0(&t, 0.0f, lbl_821CA45C[1], 0);
    fn_825548C0(self, a, v, d);
}
