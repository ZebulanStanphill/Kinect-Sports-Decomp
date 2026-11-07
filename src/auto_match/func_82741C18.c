typedef struct Variant_82741C18 {
    unsigned char type;
    unsigned char pad[7];
    double value;
} Variant_82741C18;

extern char lbl_8200BEFC[];
extern char lbl_8200BEF0[];
extern char lbl_8201261C[];

extern void fn_826A79D8(void *a, void *b, const char *name, Variant_82741C18 *v);
extern void fn_82696330(Variant_82741C18 *v);

void fn_82741C18(char *param_1, char *param_2, float *param_3)
{
    Variant_82741C18 v0;
    Variant_82741C18 v1;
    Variant_82741C18 v2;
    Variant_82741C18 v3;
    Variant_82741C18 v4;
    Variant_82741C18 v5;
    char *b;
    char *a;

    v0.value = param_3[0];
    b = param_2 + 0x78;
    v0.type = 3;
    a = param_1 + 0x10;
    fn_826A79D8(a, b, lbl_8200BEFC, &v0);
    fn_82696330(&v0);

    v1.value = param_3[3];
    v1.type = 3;
    fn_826A79D8(a, b, lbl_8200BEF0, &v1);
    fn_82696330(&v1);

    v2.value = param_3[1];
    v2.type = 3;
    fn_826A79D8(a, b, lbl_8201261C, &v2);
    fn_82696330(&v2);

    v3.value = param_3[4];
    v3.type = 3;
    fn_826A79D8(a, b, "d", &v3);
    fn_82696330(&v3);

    v4.value = param_3[2];
    v4.type = 3;
    fn_826A79D8(a, b, "tx", &v4);
    fn_82696330(&v4);

    v5.value = param_3[5];
    v5.type = 3;
    fn_826A79D8(a, b, "ty", &v5);
    fn_82696330(&v5);
}
