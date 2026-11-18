typedef struct Value_8229F208 {
    unsigned int owner;    /* 0x00 */
    unsigned int type;     /* 0x04 */
    const char *text;      /* 0x08 */
    unsigned int reserved; /* 0x0c */
} Value_8229F208;

typedef struct View_8229F208 {
    int reserved;   /* 0x00 */
    int state;      /* 0x04 */
    void *movie;    /* 0x08 */
    int reserved0c; /* 0x0c */
    float elapsed;  /* 0x10 */
} View_8229F208;

extern void fn_82273CD8(Value_8229F208 *, unsigned int);
extern void fn_82273C88(Value_8229F208 *);
extern void fn_82672C20(void *, const char *, Value_8229F208 *, unsigned int);

void fn_8229F208(View_8229F208 *self, int state)
{
    Value_8229F208 argument;
    argument.owner = 0;
    argument.type = 0;
    if (self->state != state) {
        self->state = state;
        switch (state) {
        case 1:
            self->elapsed = 0.0f;
            fn_82273CD8(&argument, 4);
            argument.text = "disappear";
            fn_82672C20(self->movie, "_root.gotoAndPlay", &argument, 1);
            break;
        case 0:
            self->elapsed = 0.0f;
            fn_82273CD8(&argument, 4);
            argument.text = "appear";
            fn_82672C20(self->movie, "_root.gotoAndPlay", &argument, 1);
            break;
        }
    }
    fn_82273C88(&argument);
}
