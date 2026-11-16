unsigned int fn_82651A90(__int64 position, __int64 length)
{
    if (position < 0) {
        return 0;
    }
    if (length == 0) {
        return 0xffff;
    }
    if (position >= length) {
        return 0xfffe;
    }
    return (unsigned int)((position * 0xfffe) / length);
}
