extern int strncmp(const char *, const char *, unsigned int);
extern unsigned int strlen(const char *);
extern void *memcpy(void *, const void *, unsigned int);
extern void *memset(void *, int, unsigned int);
extern void fn_82637300(void *, unsigned int, int *);

typedef struct Header_82635F08 {
    unsigned int kind;   /* 0x00 */
    unsigned int length; /* 0x04 */
} Header_82635F08;

void fn_82635F08(char *self, unsigned int kind, const char *text)
{
    const char *textCopy = text;
    unsigned int length; /* 0x04 */
    unsigned int words;
    Header_82635F08 header;
    if (strncmp(textCopy, "ShaderDumpxe:\\", 14) == 0) {
        textCopy += 10;
    }
    length = strlen(textCopy);
    memset(&header, 0, sizeof(header));
    header.kind = kind;
    header.length = length;
    words = ((length + 3) >> 2) + 2;
    fn_82637300(self + 0x4dd0, words, (int *)(self + 0x4dbc));
    if (*(int *)(self + 0x4dbc) >= 0) {
        char *data = *(char **)(self + 0x4dd0);
        ((unsigned int *)data)[words - 1] = 0;
        *(Header_82635F08 *)data = header;
        memcpy(data + 8, textCopy, length);
    }
}
