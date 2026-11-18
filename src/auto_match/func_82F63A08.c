extern int *_errno(void);
extern double fn_82F6B2A0(const char *text, char **end);

double fn_82F63A08(const char *text, char **end, int exponent, int *error)
{
    int savedErrno;
    double value;

    savedErrno = *_errno();
    *_errno() = 0;
    value = fn_82F6B2A0(text, end);
    *error = *_errno();
    *_errno() = savedErrno;
    for (; exponent > 0; exponent--) {
        value *= 10.0;
    }
    for (; exponent < 0; exponent++) {
        value *= 0.1;
    }
    return value;
}
