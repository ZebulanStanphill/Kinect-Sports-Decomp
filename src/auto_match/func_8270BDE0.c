static __forceinline unsigned int Get2(unsigned int *data, unsigned int index)
{
    return (data[index >> 4] >> ((index & 15) * 2)) & 3;
}

unsigned int fn_8270BDE0(unsigned int *data, unsigned int start, unsigned int count)
{
    unsigned int end;

    if (count < 8) {
        end = start + count;
        return Get2(data, end - 1) - 1;
    }
    end = start + count;
    return ((Get2(data, end - 2) | Get2(data, end - 3) << 2) << 1) | (Get2(data, end - 1) >> 1);
}
