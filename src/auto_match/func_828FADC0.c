typedef struct Token_828FADC0 {
    unsigned int type;
    unsigned int line;

    union {
        char text[1];
        const char *name;
        int signedValue;
        unsigned int unsignedValue;
        double floatValue;
    } value;
} Token_828FADC0;

extern int fn_828F6FA8(char *, unsigned int, const char *, ...);
extern void fn_828FA8D8(void *, const Token_828FADC0 *, int, const char *, ...);

void fn_828FADC0(void *parser, int state, const Token_828FADC0 *token)
{
    char description[256];

    switch (token->type) {
    case 0:
        fn_828F6FA8(description, sizeof(description), "version token");
        break;
    case 1:
        fn_828F6FA8(description, sizeof(description), "token '%s'", token->value.text);
        break;
    case 2:
        fn_828F6FA8(description, sizeof(description), "integer '%u'", token->value.unsignedValue);
        break;
    case 3:
        fn_828F6FA8(description, sizeof(description), "integer '%dl'", token->value.signedValue);
        break;
    case 4:
        fn_828F6FA8(description, sizeof(description), "integer '%uul'", token->value.unsignedValue);
        break;
    case 5:
        fn_828F6FA8(description, sizeof(description), "float '%g'", token->value.floatValue);
        break;
    case 6:
        fn_828F6FA8(description, sizeof(description), "float '%gh'", token->value.floatValue);
        break;
    case 7:
        fn_828F6FA8(description, sizeof(description), "float '%gf'", token->value.floatValue);
        break;
    case 8:
        fn_828F6FA8(description, sizeof(description), "float '%gl'", token->value.floatValue);
        break;
    case 9:
        fn_828F6FA8(description, sizeof(description), "token '%s'", token->value.name);
        break;
    case 10:
        fn_828F6FA8(description, sizeof(description), "string constant");
        break;
    case 12:
        fn_828F6FA8(description, sizeof(description), "end of line");
        break;
    case 13:
        fn_828F6FA8(description, sizeof(description), "end of file");
        break;
    default:
        fn_828F6FA8(description, sizeof(description), "token");
        break;
    }
    fn_828FA8D8(parser, token, state, "syntax error : unexpected %s", description);
}
