typedef struct Status_829DB750 {
    float value0; /* 0x0 */
    float value4; /* 0x4 */
    int value8;   /* 0x8 */
    int valueC;   /* 0xc */
    int value10;  /* 0x10 */
    int pad14;
    __int64 value18; /* 0x18 */
    int value20;     /* 0x20 */
    float result;    /* 0x24 */
    float value28;   /* 0x28 */
    int pad2c;
} Status_829DB750;

typedef struct State_829DB750 {
    char pad0[0x10];
    float valueA; /* 0x10 */
    float valueB; /* 0x14 */
    char pad18[0x14];
    void *device; /* 0x2c */
    char pad30[0x18];
    char values[0x14]; /* 0x48 */
} State_829DB750;

extern State_829DB750 lbl_83217B08;
extern float lbl_8201FBB0;
extern int fn_829E37D0(void *values, float *out);
extern int fn_829E37E0(void *values, float *out);
extern int fn_829E3800(void *values, float *out);
extern int fn_829E3C40(void *device, Status_829DB750 *out);

void fn_829DB750(float *outX, float *outResult, float *outY, float *outA, float *outB, float *outZ)
{
    Status_829DB750 status;

    fn_829E37D0(lbl_83217B08.values, outX);
    fn_829E37E0(lbl_83217B08.values, outY);
    fn_829E3800(lbl_83217B08.values, outZ);
    *outA = lbl_83217B08.valueA;
    *outB = lbl_83217B08.valueB;
    *outResult = 0.0f;
    if (lbl_83217B08.device != 0) {
        status.value0 = 100.0f;
        status.value4 = 100.0f;
        status.value8 = 1;
        status.valueC = 1;
        status.value10 = 4;
        status.value18 = 1;
        status.value20 = 0;
        status.result = 60.0f;
        status.value28 = lbl_8201FBB0;
        fn_829E3C40(lbl_83217B08.device, &status);
        *outResult = status.result;
    }
}
