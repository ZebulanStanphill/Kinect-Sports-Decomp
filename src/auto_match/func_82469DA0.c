typedef struct Value_82469DA0 {
    int first; /* 0x0 */
    int type;  /* 0x4 */

    union {
        double number;
        const char *text;
    } value; /* 0x8 */
} Value_82469DA0;

typedef struct Reference_82469DA0 {
    void *object;     /* 0x0 */
    void *references; /* 0x4 */
} Reference_82469DA0;

typedef struct Owner_82469DA0 {
    char pad000[0x138];
    unsigned int digits;
    unsigned int maximum; /* 0x138 */
} Owner_82469DA0;

extern int fn_82A1E1A0(const char *text);
extern void fn_82273CD8(Value_82469DA0 *, int);
extern void fn_82273C88(Value_82469DA0 *);
extern Reference_82469DA0 *fn_82279C58(Reference_82469DA0 *, void *);
extern void fn_82672C20(void *, const char *, Value_82469DA0 *, int);
extern void fn_822315A0(void *);

void fn_82469DA0(Owner_82469DA0 *self, int blue, const char *text)
{
    Value_82469DA0 value;
    Reference_82469DA0 first;
    Reference_82469DA0 second;
    const char *mode;
    const char *method;
    int digits;
    unsigned int maximum;
    value.first = 0;
    value.type = 0;
    digits = fn_82A1E1A0(text);
    maximum = self->digits;
    if ((int)maximum < digits) {
        maximum = digits;
    }
    self->digits = maximum;
    if (maximum > 4) {
        mode = "sixDigits";
    } else {
        mode = "fourDigits";
    }
    fn_82273CD8(&value, 4);
    value.value.text = mode;
    fn_82672C20(fn_82279C58(&first, self)->object, "_root.SetDigitMode", &value, 1);
    if (first.references != 0) {
        fn_822315A0(first.references);
    }
    fn_82273CD8(&value, 5);
    value.value.text = text;
    if (blue == 0) {
        method = "_root.SetRedDigits";
    } else {
        method = "_root.SetBlueDigits";
    }
    fn_82672C20(fn_82279C58(&second, self)->object, method, &value, 1);
    if (second.references != 0) {
        fn_822315A0(second.references);
    }
    fn_82273C88(&value);
}
