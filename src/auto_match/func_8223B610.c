extern int fn_828E9DA8(void *reader);
extern int fn_828E9D90(void *reader);
extern void fn_828EA180(void *reader, void *dst, unsigned int bytes);

void fn_8223B610(void *reader, void *dst, unsigned int bytes, unsigned char *ok)
{
    unsigned char valid;

    valid = fn_828E9DA8(reader) - fn_828E9D90(reader) >= (int)(bytes * 8);
    if (ok != 0)
        *ok = valid;
    if (valid)
        fn_828EA180(reader, dst, bytes);
}
