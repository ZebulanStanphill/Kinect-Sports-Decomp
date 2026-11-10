typedef struct Out_8247D718 {
    int data[4];
    int count;
} Out_8247D718;

extern float ltcg_pool_0_0f;
extern float lbl_82191EA0[];
extern void fn_825521F0(void *param_1, void *param_2, Out_8247D718 *out, float a, float b);

void fn_8247D718(void *param_1, void *param_2)
{
    Out_8247D718 out;

    out.count = 0;
    fn_825521F0(param_1, param_2, &out, ltcg_pool_0_0f, lbl_82191EA0[0x44]);
}
