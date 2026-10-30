typedef struct Str_8243C908 {
    char b[32];
} Str_8243C908;
extern void fn_8236DA90(char *p);
extern void fn_82230110(Str_8243C908 *s, const char *lit);
extern void fn_82230300(Str_8243C908 *s, int a, int b);
extern void fn_822B1BE8(char *dst, char *owner, Str_8243C908 *name, int n);
extern void fn_82897DF8(char *dst, char *owner, Str_8243C908 *name);

void fn_8243C908(char *param_1)
{
    Str_8243C908 s1;
    Str_8243C908 s2;
    Str_8243C908 s3;
    Str_8243C908 s4;
    Str_8243C908 s5;
    Str_8243C908 s6;
    Str_8243C908 s7;
    Str_8243C908 s8;

    fn_8236DA90(param_1);
    fn_82230110(&s1, "athleticsController");
    fn_822B1BE8(param_1 + 0xe4, param_1, &s1, 8);
    fn_82230300(&s1, 1, 0);
    fn_82230110(&s2, "athleticsRace100m");
    fn_822B1BE8(param_1 + 0x20c, param_1, &s2, 0x16);
    fn_82230300(&s2, 1, 0);
    fn_82230110(&s3, "javelinRace100m");
    fn_822B1BE8(param_1 + 0x334, param_1, &s3, 0x16);
    fn_82230300(&s3, 1, 0);
    fn_82230110(&s4, "discus100m");
    fn_822B1BE8(param_1 + 0x45c, param_1, &s4, 0x16);
    fn_82230300(&s4, 1, 0);
    fn_82230110(&s5, "discus100m");
    fn_822B1BE8(param_1 + 0x584, param_1, &s5, 0x16);
    fn_82230300(&s5, 1, 0);
    fn_82230110(&s6, "discus100m");
    fn_822B1BE8(param_1 + 0x6ac, param_1, &s6, 0x16);
    fn_82230300(&s6, 1, 0);
    fn_82230110(&s7, "LaneIds");
    fn_82897DF8(param_1 + 0x7d4, param_1, &s7);
    fn_82230300(&s7, 1, 0);
    fn_82230110(&s8, "RaceStartSyncTime");
    fn_82897DF8(param_1 + 0x82c, param_1, &s8);
    fn_82230300(&s8, 1, 0);
}
