typedef struct Parser_82F022F0 {
    char pad[0x30];
    unsigned int state;
} Parser_82F022F0;

int fn_82F022F0(Parser_82F022F0 *self, unsigned char value, unsigned char *kind, unsigned char *code)
{
    int result = 1;

    *kind = value;
    switch (self->state) {
    case 0:
        if (value == 0)
            self->state = 1;
        break;
    case 1:
        self->state = value == 0 ? 2 : 0;
        break;
    case 2:
        if (value == 0 || value == 1 || value == 2 || value == 3) {
            result = 2;
            *kind = 3;
            *code = value;
        }
        self->state = value == 0;
        break;
    }
    return result;
}
