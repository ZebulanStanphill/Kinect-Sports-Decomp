typedef struct UnicodeString_82A2D578 {
    unsigned short length;        /* 0x00, in bytes */
    unsigned short maximumLength; /* 0x02 */
    unsigned short *buffer;       /* 0x04 */
} UnicodeString_82A2D578;

extern unsigned int RtlUpcaseUnicodeChar(unsigned int c);

/* Matches a name (bytes or wide characters) against a pattern with '*' and '?' wildcards. */
unsigned char fn_82A2D578(UnicodeString_82A2D578 *pattern, unsigned char *nameStart, unsigned int nameSize,
                          unsigned int unicode)
{
    unsigned short *patternChar;
    unsigned short *patternEnd;
    unsigned char *name;
    unsigned char *nameEnd;
    unsigned int expected;
    unsigned int c;

    if (nameSize == 0) {
        return 0;
    }
    patternChar = pattern->buffer;
    name = nameStart;
    nameEnd = nameStart + nameSize;
    patternEnd = (unsigned short *)((unsigned char *)patternChar + pattern->length);
    while (patternChar < patternEnd) {
        expected = *patternChar++;
        if (expected == '*') {
            if (patternChar == patternEnd) {
                return 1;
            }
            patternChar++;
            if (unicode) {
                do {
                    if (name == nameEnd) {
                        break;
                    }
                    c = *(unsigned short *)name;
                    name += 2;
                } while (c != '.');
            } else {
                do {
                    if (name == nameEnd) {
                        break;
                    }
                    c = *name++;
                } while (c != '.');
            }
        } else {
            if (name == nameEnd) {
                return 0;
            }
            if (unicode) {
                c = *(unsigned short *)name;
                name += 2;
            } else {
                c = *name++;
            }
            if (expected != '?' && c != expected && RtlUpcaseUnicodeChar(c) != expected) {
                return 0;
            }
        }
    }
    return name == nameEnd;
}
