extern int fn_82F7F760(double *value, char *buffer, unsigned int size, int precision, int caps, void *locale);
extern int fn_82F7FE10(double *value, char *buffer, unsigned int size, int precision, void *locale);
extern int fn_82F7F850(double *value, char *buffer, unsigned int size, int precision, int caps, void *locale);
extern int fn_82F7FEE0(double *value, char *buffer, unsigned int size, int precision, int caps, void *locale);

int fn_82F80010(double *value, char *buffer, unsigned int size, int format, int precision, int caps, void *locale)
{
    if (format == 'e' || format == 'E') {
        return fn_82F7F760(value, buffer, size, precision, caps, locale);
    }
    if (format == 'f') {
        return fn_82F7FE10(value, buffer, size, precision, locale);
    }
    if (format == 'a' || format == 'A') {
        return fn_82F7F850(value, buffer, size, precision, caps, locale);
    }
    return fn_82F7FEE0(value, buffer, size, precision, caps, locale);
}
