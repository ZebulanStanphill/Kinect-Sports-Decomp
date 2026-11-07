typedef struct Value_8229F858 {
    void *object;
    int type;
    union {
        double number;
        unsigned char boolean;
    } value;
} Value_8229F858;

typedef struct Self_8229F858 {
    void *movie;
} Self_8229F858;

extern char lbl_821954B0[];
extern void fn_82273CD8(Value_8229F858 *value, int type);
extern void fn_82273C88(Value_8229F858 *value);
extern void fn_82672C20(void *movie, const char *method, Value_8229F858 *args, int count);

void fn_8229F858(Self_8229F858 *self, int red)
{
    Value_8229F858 args[2];
    Value_8229F858 *p;
    int i;

    for (i = 0; i < 2; i++) {
        args[i].object = 0;
        args[i].type = 0;
    }
    fn_82273CD8(&args[0], 3);
    args[0].value.number = *(double *)(lbl_821954B0 + 0x78);
    fn_82273CD8(&args[1], 2);
    args[1].value.boolean = red != 0;
    fn_82672C20(self->movie, "_root.mainCtrl.setRedState", args, 2);
    p = &args[2];
    i = 1;
    do {
        p--;
        fn_82273C88(p);
        i--;
    } while (i >= 0);
}
