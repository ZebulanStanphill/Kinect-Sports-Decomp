typedef struct Ctx_8228A318 {
    char pad[0x18b8];
    unsigned int mode;  /* 0x18b8 */
    int pad2;
    int kind;           /* 0x18c0 */
} Ctx_8228A318;

typedef struct Slot_8228A318 {
    int kind;
    char pad[0x3c];
} Slot_8228A318;

typedef struct Game_8228A318 {
    char pad[0x604];
    int cur;                    /* 0x604 */
    int next;                   /* 0x608 */
    char pad2[0x94];
    int state;                  /* 0x6a0 */
    int pad3;
    Slot_8228A318 slots[4];     /* 0x6a8 */
    char pad4[0x11f0 - 0x7a8];
    Ctx_8228A318 *ctx;          /* 0x11f0 */
} Game_8228A318;

void fn_8228A318(Game_8228A318 *self, unsigned int ev)
{
    Ctx_8228A318 *ctx = self->ctx;
    unsigned int n;
    int i;
    int kind;

    switch (ctx->mode) {
    case 0:
        switch (ev) {
        case 1:
            self->state = 1;
            self->cur = self->next;
            break;
        case 6:
            self->cur = 0xe;
            break;
        }
        break;
    case 1:
        switch (ev) {
        case 0:
            kind = self->slots[2].kind;
            self->state = 1;
            if (kind == 1 || kind == 0)
                self->cur = 6;
            else if (kind == 3 && ctx->kind == 3)
                self->cur = 0xb;
            else
                self->cur = 7;
            break;
        case 1:
            self->state = 2;
            self->cur = self->next;
            break;
        case 6:
            self->cur = 0xe;
            break;
        }
        break;
    case 2:
        switch (ev) {
        case 2:
            self->state = 1;
            self->cur = self->next;
            break;
        case 3:
            self->state = 2;
            self->cur = self->next;
            break;
        case 4:
            self->state = 3;
            self->cur = self->next;
            break;
        case 5:
            n = 0;
            for (i = 0; i < 4; i++) {
                if (self->slots[i].kind != 4)
                    n++;
            }
            if (n == 2)
                self->cur = self->next;
            else
                self->cur = 0xa;
            break;
        case 6:
            self->cur = 0xe;
            break;
        }
        break;
    }
}
