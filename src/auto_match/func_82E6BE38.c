extern float lbl_83248A10[258];
extern double fn_82F655D8(double, double);

static __forceinline void Set_82E6BE38(float *p, float v)
{
    *p = v;
}

void fn_82E6BE38(void)
{
    unsigned int index;
    index = 0;
    if (index < 258) {
        do {
            {
                float *pLbl_83248A10Elem = &lbl_83248A10[index];
                Set_82E6BE38(&*pLbl_83248A10Elem, (float)fn_82F655D8(10.0, (float)index * 0.05f));
            }
            index++;
        } while (index < 258);
    }
}
