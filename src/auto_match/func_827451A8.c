/* Writes a rectangle (x, y, x2, y2 doubles) as x, y, width and height variants. */
typedef struct Variant_827451A8 {
    unsigned char type;
    unsigned char pad[7];
    double value;
} Variant_827451A8;

extern char lbl_8200EAF0[];
extern char lbl_8200EAE8[];

extern void fn_826A79D8(void *a, void *b, const char *name, Variant_827451A8 *v);
extern void fn_82696330(Variant_827451A8 *v);

void fn_827451A8(char *param_1, char *param_2, double *param_3)
{
    Variant_827451A8 v0;
    Variant_827451A8 v1;
    Variant_827451A8 v2;
    Variant_827451A8 v3;
    char *b;
    char *a;

    v0.value = param_3[0];
    b = param_2 + 0x78;
    v0.type = 3;
    a = param_1 + 0x10;
    fn_826A79D8(a, b, "x", &v0);
    fn_82696330(&v0);

    v1.value = param_3[1];
    v1.type = 3;
    fn_826A79D8(a, b, "y", &v1);
    fn_82696330(&v1);

    v2.type = 3;
    v2.value = param_3[2] - param_3[0];
    fn_826A79D8(a, b, lbl_8200EAF0, &v2);
    fn_82696330(&v2);

    v3.type = 3;
    v3.value = param_3[3] - param_3[1];
    fn_826A79D8(a, b, lbl_8200EAE8, &v3);
    fn_82696330(&v3);
}
