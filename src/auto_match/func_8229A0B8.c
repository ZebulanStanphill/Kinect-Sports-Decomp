typedef struct Value_8229A0B8 {
    void *objectInterface; /* 0x00 */
    int type;              /* 0x04 */

    union {
        double number;
        unsigned char boolean;
    } value; /* 0x08 */
} Value_8229A0B8;

typedef struct Caption_8229A0B8 {
    void *movie; /* 0x00 */
    int pad4;
    unsigned int id;        /* 0x08 */
    char letters[0x100][2]; /* 0x0c */
    char pad20c[0x1000];
    int shown;    /* 0x120c */
    int x;        /* 0x1210 */
    int y;        /* 0x1214 */
    int duration; /* 0x1218 */
    char pad121c[0xc];
    int created; /* 0x1228 */
    int pending; /* 0x122c */
} Caption_8229A0B8;

extern int fn_82A1E110(const char *a, const char *b);
extern void fn_82273CD8(Value_8229A0B8 *value, int type);
extern void fn_82273C88(Value_8229A0B8 *value);
extern void fn_82672C20(void *movie, const char *path, Value_8229A0B8 *args, int count);

static __forceinline void SetNumber_8229A0B8(Value_8229A0B8 *value, double number)
{
    fn_82273CD8(value, 3);
    value->value.number = number;
}

static __forceinline void SetBoolean_8229A0B8(Value_8229A0B8 *value, unsigned char boolean)
{
    fn_82273CD8(value, 2);
    value->value.boolean = boolean;
}

void fn_8229A0B8(Caption_8229A0B8 *self)
{
    unsigned char complete = 1;
    unsigned int i;
    Value_8229A0B8 args[5];
    Value_8229A0B8 *arg;
    int n;

    for (i = 0; i < 0x100; i++) {
        if (fn_82A1E110(self->letters[i], "") == 0) {
            complete = i >= 15;
            break;
        }
    }
    for (n = 0; n < 5; n++) {
        args[n].objectInterface = 0;
        args[n].type = 0;
    }
    SetNumber_8229A0B8(&args[0], self->id);
    SetNumber_8229A0B8(&args[1], self->x);
    SetNumber_8229A0B8(&args[2], self->y);
    SetNumber_8229A0B8(&args[3], self->duration);
    SetBoolean_8229A0B8(&args[4], complete);
    if (self->created == 0) {
        fn_82672C20(self->movie, "_root.mainCtrl.createCaption", args, 5);
    } else {
        fn_82672C20(self->movie, "_root.mainCtrl.replaceCaption", args, 5);
    }
    self->shown = 1;
    self->created = 1;
    self->pending = 0;
    arg = args + 5;
    n = 4;
    do {
        arg--;
        fn_82273C88(arg);
    } while (--n >= 0);
}
