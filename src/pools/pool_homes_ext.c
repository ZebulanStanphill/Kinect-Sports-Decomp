/* Extern homes primer (generated from the constant pool of the original executable: do not edit).
   Home objects that are extern-visible consts in the original: every read of them uses the object's
   own address, never a neighbour's base register. They are defined non-static here, in a module of
   their own, so that they take no part in the internal layout of pool_homes.c (a filler holds each
   one's place there). */

const float lbl_82186E64[1] = {12.0f}; /* 82186E64..82186E68 */
const float lbl_8218DF78[42] = {
    256.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f,   0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f,   0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}; /* 8218DF78..8218E020 */
const float lbl_8218E8FC[1] = {4.0f};                                          /* 8218E8FC..8218E900 */
const float lbl_821916F4[2] = {4.5f, 0.0f};                                    /* 821916F4..821916FC */
const float lbl_821916FC[1] = {2.0f};                                          /* 821916FC..82191700 */
const float home_82005748[1] = {100.0f};                                       /* 82005748: __real@42c80000 */

float fn_home_82186E64(void)
{
    return lbl_82186E64[0];
}

float fn_home_8218DF78(void)
{
    return lbl_8218DF78[0];
}

float fn_home_8218E8FC(void)
{
    return lbl_8218E8FC[0];
}

float fn_home_821916F4(void)
{
    return lbl_821916F4[0];
}

float fn_home_821916FC(void)
{
    return lbl_821916FC[0];
}

float fn_home_82005748(void)
{
    return home_82005748[0];
}
