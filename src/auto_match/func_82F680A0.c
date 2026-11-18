typedef struct ThreadData_82F680A0 {
    int reserved00[9]; /* 0x00 */
    char *errorText;   /* 0x24 */
} ThreadData_82F680A0;

extern ThreadData_82F680A0 *_getptd_noexit(void);
extern void *fn_82F6E1C8(unsigned int count, unsigned int size);
extern const char *fn_82F68048(int errorNumber);
extern int fn_82F664B0(char *dst, unsigned int size, const char *src);
__declspec(noreturn) extern void fn_82F63C78(const unsigned short *expression, const unsigned short *function,
                                             const unsigned short *file, unsigned int line,
                                             unsigned int reserved);

char *fn_82F680A0(int errorNumber)
{
    ThreadData_82F680A0 *data = _getptd_noexit();
    char *text;

    if (data == 0) {
        return "Visual C++ CRT: Not enough memory to complete call to strerror.";
    }
    if (data->errorText == 0) {
        if ((data->errorText = (char *)fn_82F6E1C8(0x86, 1)) == 0) {
            return "Visual C++ CRT: Not enough memory to complete call to strerror.";
        }
    }
    text = data->errorText;
    if (fn_82F664B0(text, 0x86, fn_82F68048(errorNumber)) == 0) {
        return text;
    }
    fn_82F63C78(0, 0, 0, 0, 0);
}
