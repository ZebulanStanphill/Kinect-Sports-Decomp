typedef struct {
    unsigned short Length;
    unsigned short MaximumLength;
    char *Buffer;
} ANSI_STRING;

extern int _snprintf(char *buf, unsigned int n, const char *fmt, ...);
extern void RtlInitAnsiString(ANSI_STRING *s, const char *src);
extern int ObCreateSymbolicLink(ANSI_STRING *link, ANSI_STRING *target);

void fn_82A1CD20(const char *linkFmt, void *linkArg, const char *targetFmt, void *targetArg, int *ok)
{
    ANSI_STRING link;
    ANSI_STRING target;
    char linkBuf[64];
    char targetBuf[64];

    _snprintf(linkBuf, 0x40, linkFmt, linkArg);
    RtlInitAnsiString(&link, linkBuf);
    _snprintf(targetBuf, 0x40, targetFmt, targetArg);
    RtlInitAnsiString(&target, targetBuf);
    *ok = ObCreateSymbolicLink(&link, &target) >= 0;
}
