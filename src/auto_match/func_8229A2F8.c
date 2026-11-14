typedef struct Value_8229A2F8 {
    int pad0;
    int type;
    double number;
} Value_8229A2F8;

typedef struct Caption_8229A2F8 {
    char pad0[8];
    unsigned int id;
    unsigned short text[0x100];
    unsigned short line1[0x400];
    unsigned short line2[0x400];
    int state;
    int pad1210;
    unsigned int layout;
    int pad1218;
    float holdTime;
    char pad1220[0x122c - 0x1220];
    int ready;
} Caption_8229A2F8;

extern void fn_82299AC8(Caption_8229A2F8 *self, unsigned short *a);
extern void fn_82299E90(Caption_8229A2F8 *self, unsigned short *a, unsigned short *b, unsigned short *c);
extern void fn_82299BF0(Caption_8229A2F8 *self, unsigned short *a, unsigned short *b);
extern void fn_82299D40(Caption_8229A2F8 *self, unsigned short *a, unsigned short *b);
extern void fn_8229A230(Caption_8229A2F8 *self);

static __forceinline int StrCmp(const char *a, const char *b)
{
    const unsigned char *p = (const unsigned char *)a;
    const unsigned char *q = (const unsigned char *)b;
    unsigned char c1 = *p, c2 = *q;
    while (c1 == c2) {
        p++;
        q++;
        if (c1 == 0)
            return 0;
        c1 = *p;
        c2 = *q;
    }
    return c1 - c2;
}

void fn_8229A2F8(Caption_8229A2F8 *self, const char *command, const Value_8229A2F8 *args, unsigned int argCount)
{
    if (argCount != 0 && (args->type & 0x8f) == 3 && (unsigned int)args->number == self->id) {
        if (StrCmp(command, "onCaptionReady") == 0) {
            if (self->state == 2) { } else {
                self->ready = 1;
                switch (self->layout) {
                case 3:
                    fn_82299D40(self, self->line1, self->line2);
                    break;
                case 2:
                    fn_82299BF0(self, self->text, self->line1);
                    break;
                case 1:
                    fn_82299E90(self, self->text, self->line1, self->line2);
                    break;
                case 0:
                    fn_82299AC8(self, self->line1);
                    break;
                }
                return;
            }
            fn_8229A230(self);
        } else if (StrCmp(command, "hasReachedHoldPosition") == 0) {
            self->state = self->holdTime > 0.0f ? 4 : 0;
        } else if (StrCmp(command, "hasReachedEnd") == 0) {
            fn_8229A230(self);
        }
    }
}
