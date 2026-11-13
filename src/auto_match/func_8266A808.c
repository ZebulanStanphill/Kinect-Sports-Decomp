typedef struct String_8266A808 {
    char data[0x1c];
} String_8266A808;

typedef struct Global_8266A808 {
    int head;
    char sub[0x10];
} Global_8266A808;

extern Global_8266A808 lbl_831E7AF4;
extern void fn_826660E8(void *sub, int value);
extern void fn_8266ACB8(Global_8266A808 *g, int value);
extern int fn_82A1E230(void); /* XGetLanguage */
extern int fn_82A1D7A8(void); /* XGetLocale */
extern String_8266A808 *fn_8265F4B8(String_8266A808 *result, int a, int b);
extern void fn_8223F658(String_8266A808 *s);
extern void fn_8266A700(void);
extern void fn_82230180(String_8266A808 *s);

int fn_8266A808(void)
{
    String_8266A808 text;
    int dwLocale;
    int dwLanguage;
    int result;

    fn_826660E8(lbl_831E7AF4.sub, 4);
    fn_8266ACB8(&lbl_831E7AF4, 1);
    dwLanguage = fn_82A1E230();
    dwLocale = fn_82A1D7A8();
    fn_8265F4B8(&text, dwLanguage, dwLocale);
    fn_8223F658(&text);
    fn_8266A700();
    result = 1;
    fn_82230180(&text);
    return result;
}
