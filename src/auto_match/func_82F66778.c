typedef struct Stream_82F66778 Stream_82F66778;

extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int fn_82F79578(Stream_82F66778 *stream, const char *format, void *locale, void *args);
extern int fn_82F665B0(int (*output)(Stream_82F66778 *, const char *, void *, void *), char *buffer,
                       unsigned int capacity, const char *format, void *locale, void *args);

int fn_82F66778(char *buffer, unsigned int size, unsigned int count, const char *format, void *locale,
                void *args)
{
    int result;
    int savedErrno;

    if (format == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    if (count == 0 && buffer == 0 && size == 0) {
        return 0;
    }
    if (buffer == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    if (size == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return -1;
    }
    if (size > count) {
        savedErrno = *_errno();
        result = fn_82F665B0(fn_82F79578, buffer, count + 1, format, locale, args);
        if (result == -2) {
            if (*_errno() == 34) {
                *_errno() = savedErrno;
            }
            return -1;
        }
    } else {
        savedErrno = *_errno();
        result = fn_82F665B0(fn_82F79578, buffer, size, format, locale, args);
        buffer[size - 1] = 0;
        if (result == -2 && count == (unsigned int)-1) {
            if (*_errno() == 34) {
                *_errno() = savedErrno;
            }
            return -1;
        }
    }
    if (result < 0) {
        buffer[0] = 0;
        if (result == -2) {
            *_errno() = 34;
            _invalid_parameter_noinfo();
            return -1;
        }
        return -1;
    }
    return result;
}
