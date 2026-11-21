/* Pool primer for lbl_821954B0 (generated from the constant pool of the original executable: do not edit).
   LTCG generates the functions of a module in reverse source order, so the last function below creates
   the first slot. Module 1 of 2: link order  candidate ... pool_homes.c pool_821954B0_2.c pool_821954B0.c */

/* the home of 0.0f: with it, `x >= 0.0f ? a : b` is the fcmpu/mfcr/lfsx/fsel select of the original */
static const float ltcg_pool_0_0f[4] = {0.0f, 0.0f, 0.0f, 0.0f};

float fn_home_821CC160(void)
{
    return ltcg_pool_0_0f[0];
}

/* makes the select table {1.0f, -1.0f}: it is appended when this module's code generation ends (+0x28) */
float fn_pool_821954B0_0028_table(float x, float a, float b)
{
    return x >= 0.0f ? a : b;
}

float fn_pool_821954B0_0024(void)
{
    return -3.0f;
} /* c0400000 */

float fn_pool_821954B0_0020(void)
{
    return 0.003921569f;
} /* 3b808081 */

float fn_pool_821954B0_001C(void)
{
    return 32.0f;
} /* 42000000 */

float fn_pool_821954B0_0018(void)
{
    return 1000.0f;
} /* 447a0000 */

float fn_pool_821954B0_0014(void)
{
    return 1.0850695e-06f;
} /* 3591a2b4 */

float fn_pool_821954B0_0010(void)
{
    return 89600.0f;
} /* 47af0000 */

float fn_pool_821954B0_000C(void)
{
    return 42560.0f;
} /* 47264000 */

float fn_pool_821954B0_0008(void)
{
    return 0.0059999996f;
} /* 3bc49ba5 */

double fn_pool_821954B0_0000(void)
{
    return 16.0;
} /* 4030000000000000 */
