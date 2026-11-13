typedef struct String_82320440 { unsigned char data[0x1c]; } String_82320440;
typedef struct Cond_82320440 {
    void *vt;
    String_82320440 name;   /* 0x04 */
    int value;              /* 0x20 */
    float a;                /* 0x24 */
    float b;                /* 0x28 */
} Cond_82320440;

extern void fn_82230110(String_82320440 *s, const char *text);
extern void fn_8223B688(String_82320440 *d, String_82320440 *s);
extern void fn_82230300(String_82320440 *s, int a, int b);
extern char lbl_821AFA08[];
extern char lbl_821AFA70[];

Cond_82320440 *fn_82320440(Cond_82320440 *self, int value, float a, float b)
{
    String_82320440 tmp;

    fn_82230110(&tmp, "LinearInputsAndSpeedLessThan");
    self->vt = lbl_821AFA08;
    fn_8223B688(&self->name, &tmp);
    fn_82230300(&tmp, 1, 0);
    self->a = a;
    self->value = value;
    self->b = b;
    self->vt = lbl_821AFA70;
    return self;
}
