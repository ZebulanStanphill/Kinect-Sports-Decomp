extern int fn_82D7E470(char *base, int *pos);

void fn_82F40778(char *p, int *pos)
{
    int hr = fn_82D7E470(*(int *)(*(int *)(p - 0x18) + 8) + p - 0x18, pos);
    if (hr >= 0) {
        *(int *)(p - 0x14) = *pos;
        *pos = *pos + 5;
    }
}
