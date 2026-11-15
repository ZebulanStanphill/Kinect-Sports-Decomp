typedef struct Argument_8229E540 {
    int first;  /* 0x0 */
    int second; /* 0x4 */

    union {
        int integer;
        unsigned char boolean;
    } value;

    int reserved; /* 0xc */
} Argument_8229E540;

typedef struct Owner_8229E540 {
    int reserved;               /* 0x0 */
    int mode;                   /* 0x4 */
    int first;                  /* 0x8 */
    int second;                 /* 0xc */
    unsigned short *firstText;  /* 0x10 */
    unsigned short *secondText; /* 0x14 */
} Owner_8229E540;

extern void fn_82273CD8(Argument_8229E540 *, int);
extern void fn_82273C88(Argument_8229E540 *);
extern void fn_82672C20(int, const char *, Argument_8229E540 *, int);
extern void fn_822315A0(unsigned int);

void fn_8229E540(Owner_8229E540 *self, unsigned int *handle)
{
    Argument_8229E540 arguments[5];
    Argument_8229E540 *argument;
    int i;
    int value;
    unsigned char flag;
    unsigned char secondFlag;
    for (i = 0; i < 5; ++i) {
        arguments[i].first = 0;
        arguments[i].second = 0;
    }
    value = self->first;
    fn_82273CD8(&arguments[0], 5);
    arguments[0].value.integer = value;
    value = self->second;
    fn_82273CD8(&arguments[1], 5);
    arguments[1].value.integer = value;
    if (self->firstText != 0) {
        flag = 1;
        if (*self->firstText != 0) {
            goto firstReady;
        }
    }
    flag = 0;
firstReady:
    fn_82273CD8(&arguments[2], 2);
    arguments[2].value.boolean = flag;
    if (self->secondText != 0 && *self->secondText != 0) {
        secondFlag = 1;
    } else
        secondFlag = 0;
    fn_82273CD8(&arguments[3], 2);
    arguments[3].value.boolean = secondFlag;
    flag = self->mode == 1;
    fn_82273CD8(&arguments[4], 2);
    arguments[4].value.boolean = flag;
    fn_82672C20(handle[0], "_root.MsgBoxInit", arguments, 5);
    argument = arguments + 5;
    i = 4;
    do {
        --argument;
        fn_82273C88(argument);
    } while (--i >= 0);
    if (handle[1] != 0) {
        fn_822315A0(handle[1]);
    }
}
