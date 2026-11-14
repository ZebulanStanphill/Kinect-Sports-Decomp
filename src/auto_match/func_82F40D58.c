int fn_82F40D58(void *self, unsigned int *type, int allowReset, void *check, unsigned int size)
{
    int hr = 0;
    unsigned int needed;

    if (type == 0)
        return 0x8000ffff;
    if (check == 0)
        goto done;
    if (*type >= 7) {
        if (allowReset == 0)
            goto invalid;
        *type = 2;
    }
    switch (*type) {
    case 0:
    case 3:
        needed = 4;
        break;
    case 1:
        if (size & 1) {
invalid:
            hr = 0x80070057;
        }
        return hr;
    case 4:
        needed = 8;
        break;
    case 5:
        needed = 2;
        break;
    case 6:
        needed = 0x10;
        break;
    default:
        goto done;
    }
    if (needed > size)
        hr = 0xc00d36b1;
done:
    return hr;
}
