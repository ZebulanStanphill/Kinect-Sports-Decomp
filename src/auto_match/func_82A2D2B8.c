typedef struct String_82A2D2B8 {
    unsigned short length;        /* 0x0 */
    unsigned short maximumLength; /* 0x2 */
    char *buffer;                 /* 0x4 */
} String_82A2D2B8;

/* Splits a path into its first component and the remainder after the next backslash. */
void fn_82A2D2B8(String_82A2D2B8 path, String_82A2D2B8 *first, String_82A2D2B8 *rest)
{
    unsigned int start;
    unsigned int i;

    first->length = 0;
    first->maximumLength = 0;
    first->buffer = 0;
    rest->length = 0;
    rest->maximumLength = 0;
    rest->buffer = 0;
    if (path.length == 0) {
        return;
    }
    i = 0;
    if (path.buffer[0] == '\\') {
        i++;
    }
    start = i;
    for (; i < path.length; i++) {
        if (path.buffer[i] == '\\') {
            break;
        }
    }
    first->buffer = &path.buffer[start];
    first->length = (unsigned short)(i - start);
    first->maximumLength = first->length;
    if (i < path.length) {
        rest->buffer = &path.buffer[i + 1];
        rest->length = (unsigned short)(path.length - i - 1);
        rest->maximumLength = rest->length;
    }
}
