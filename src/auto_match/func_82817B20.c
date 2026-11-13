int fn_82817B20(unsigned int *pair, unsigned int which, unsigned int *out)
{
    switch (which) {
    case 0:
        *out = pair[1];
        return 1;
    case 1:
        *out = pair[0];
        return 1;
    default:
        *out = 0;
        return 0;
    }
}
