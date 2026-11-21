extern int fn_82F6A3E8(const char *text, char **end, int radix);

/* Parses a movie level name: a plain number, or "_level" followed by a number (letter case
   ignored unless caseSensitive is set). Returns the level and stores where the number ended,
   or returns -1. */
int fn_826F5C10(const char *name, char **end, unsigned char caseSensitive)
{
    char *numberEnd;
    int level;
    const char *number;

    if (name[0] >= '0' && name[0] <= '9') {
        numberEnd = 0;
        level = fn_82F6A3E8(name, &numberEnd, 10);
        *end = numberEnd;
        return level;
    }
    if (name[0] == '_') {
        if (caseSensitive) {
            if (name[1] == 'l' && name[2] == 'e' && name[3] == 'v' && name[4] == 'e' && name[5] == 'l') {
                goto parse;
            }
        } else if ((name[1] == 'l' || name[1] == 'L') && (name[2] == 'e' || name[2] == 'E') &&
                   (name[3] == 'v' || name[3] == 'V') && (name[4] == 'e' || name[4] == 'E') &&
                   (name[5] == 'l' || name[5] == 'L')) {
            goto parse;
        }
    }
    return -1;
parse:
    number = name + 6;
    if (number[0] < '0' || number[0] > '9') {
        return -1;
    }
    {
        char *levelEnd = 0;

        level = fn_82F6A3E8(number, &levelEnd, 10);
        *end = levelEnd;
    }
    return level;
}
