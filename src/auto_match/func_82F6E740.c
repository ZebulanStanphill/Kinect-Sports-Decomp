extern int fn_82F6E450(void *, void *, unsigned int, void *, unsigned int, void *, unsigned int, void *,
                       unsigned int);

int fn_82F6E740(void *context, void *first, void *second, void *third, void *fourth)
{
    return fn_82F6E450(context, first, first ? 3 : 0, second, second ? 0x100 : 0, third, third ? 0x100 : 0,
                       fourth, fourth ? 0x100 : 0);
}
