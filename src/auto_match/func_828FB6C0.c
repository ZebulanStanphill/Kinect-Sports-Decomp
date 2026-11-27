typedef struct Lexer_828FB6C0 {
    const char *current; /* 0x00 */
    const char *end;     /* 0x04 */
    char location[0x14]; /* 0x08: file and line, passed to the message sink */
    int line;            /* 0x1c */
    char pad20[8];       /* 0x20 */
    unsigned int flags;  /* 0x28: bit 1 = ';' starts a comment (assembly) */
    char pad2C[4];       /* 0x2c */
    void *messages;      /* 0x30 */
} Lexer_828FB6C0;

extern void fn_828FA8D8(void *messages, void *location, unsigned int code, const char *format, ...);
extern void fn_828FAF58(Lexer_828FB6C0 *lexer, int keepNewline);

/* Skips white space, comments and line continuations. Returns whether a line
   break was skipped. */
int fn_828FB6C0(Lexer_828FB6C0 *lexer)
{
    int newLine = 0;

    while (lexer->current < lexer->end) {
        char c = *lexer->current;

        if (c == '\n') {
            lexer->current++;
            lexer->line++;
            newLine = 1;
        } else if (c == ' ' || (c >= 9 && c <= 13)) {
            lexer->current++;
        } else if (c == '/' && lexer->current + 1 < lexer->end && lexer->current[1] == '/') {
            fn_828FAF58(lexer, 1);
        } else if (c == '/' && lexer->current + 1 < lexer->end && lexer->current[1] == '*') {
            const char *end = lexer->end;

            lexer->current += 2;
            while (lexer->current < lexer->end) {
                char d = *lexer->current;

                if (d == '*' && lexer->current + 1 < end && lexer->current[1] == '/') {
                    break;
                }
                if (d == '\n') {
                    lexer->line++;
                }
                lexer->current++;
            }
            if (lexer->current < end) {
                lexer->current += 2;
            } else {
                fn_828FA8D8(lexer->messages, lexer->location, 1001, "comment continues past end of file");
            }
        } else if ((lexer->flags & 2) && c == ';') {
            fn_828FAF58(lexer, 0);
        } else if (c == '\\' && lexer->current + 1 < lexer->end && lexer->current[1] == '\n') {
            lexer->current += 2;
            lexer->line++;
        } else if (c == '\\' && lexer->current + 2 < lexer->end && lexer->current[1] == '\r' &&
                   lexer->current[2] == '\n') {
            lexer->current += 3;
            lexer->line++;
        } else {
            break;
        }
    }
    return newLine;
}
